#include <iostream>
#include <execinfo.h>
#include <stdlib.h>

void fun1();
void fun2();
void fun3();
void fun4();
void fun5();
void fun6();
void print_callstack();

static std::string demangle(const char* str) {
    size_t size = 0;
    int status = 0;
    std::string rt;
    rt.resize(256);
    if (1 == sscanf(str, "%*[^(]%*[^_]%255[^)+]", &rt[0])) {
        char* v = abi::__cxa_demangle(&rt[0], nullptr, &size, &status);
        if (v) {
            std::string result(v);
            free(v);
            return result;
        }
    }
    if (1 == sscanf(str, "%255s", &rt[0])) {
        return rt;
    }
    return str;
}

void Backtrace(std::vector<std::string>& bt, int size, int skip) {
    void** array = (void**)malloc((sizeof(void*) * size));
    size_t s = ::backtrace(array, size);

    char** strings = backtrace_symbols(array, s);
    if (strings == NULL) {
        std::cout << "backtrace_symbols error" << std::endl;
        return;
    }

    for (size_t i = skip; i < s; ++i) {
        bt.push_back(demangle(strings[i]));
    }
    
    free(strings);
    free(array);
}

std::string BacktraceToString(int size, int skip, const std::string& prefix) {
    std::vector<std::string> bt;
    Backtrace(bt, size, skip);
    std::stringstream ss;
    for (size_t i = 0; i < bt.size(); ++i) {
        ss << prefix << bt[i] << std::endl;
    }
    return ss.str();
}


int main() {
    std::cout << "Hello world" << std::endl;

    fun6();

    return 0;
}

void fun1() {
    //print_callstack();
    
}

void fun2() {
    fun1();
}

void fun3() {
    fun2();
}

void fun4() {
    fun3();
}

void fun5() {
    fun4();
}

void fun6() {
    fun5();
}

void print_callstack() {
    int size = 32;
    int i;
    void* array[32];
    int stack_num = backtrace(array, size);
    char** stacktrace = NULL;

    printf("%s begin\n", __func__);
    stacktrace = (char**)backtrace_symbols(array, stack_num);

    for (i = 0; i < stack_num; i++) {
        printf("%s\n", stacktrace[i]);
    }
    free(stacktrace);
    printf("%s end\n", __func__);
}


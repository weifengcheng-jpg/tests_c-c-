#define __STDC_WANT_LIB_EXT1__ 1
#include <time.h>
#include <stdio.h>
#include <iostream> 

int main(void) {
/*
    time_t t = time(NULL);
    printf("UTC:   %s", asctime(gmtime(&t)));
    printf("local: %s", asctime(localtime(&t)));
 
#ifdef __STDC_LIB_EXT1__
    struct tm buf;
    char str[26];
    asctime_s(str,sizeof str,gmtime_s(&t, &buf));
    printf("UTC:   %s", str);
    asctime_s(str,sizeof str,localtime_s(&t, &buf)));
    printf("local: %s", str);
#endif
*/
    const std::string& format = "%Y-%m-%d %H:%M:%S";

    struct tm tm;
    const time_t time = 0;

    localtime_r(&time &tm);
    char buf[64];
    strftime(buf, sizeof(buf), format.c_str(), &tm);
    
    std::cout << buf << std::endl;

    return 0;
}


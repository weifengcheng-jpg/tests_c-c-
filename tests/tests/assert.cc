#include <iostream>
#include <assert.h>
#include <stdlib.h>

int main() {
    FILE* fp;

    fp = fopen("./test.txt", "w");
    assert(fp);
    fclose(fp);

    fp = fopen("./test1.txt", "r");
    assert(fp);
    fclose(fp);


    std::cout << "Hello world" << std::endl;
    return 0;
}


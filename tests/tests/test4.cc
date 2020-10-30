#include <iostream>

void basketball() {
    printf("选择篮球");
}

void football() {
    printf("选择足球");
}

void selectball(void (* ball)()) {
    printf("选择什么球?");
    ball();
}

int main() {
    
    selectball(basketball);
    selectball(football);

    std::cout << "Hello world" << std::endl;
    return 0;
}


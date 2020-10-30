#include <iostream>

template<class T>
int BinarySearch(const T* arr, int length, const T& v) {
    int m = 0;
    int begin = 0;
    int end = length - 1;
    while(begin <= end) {
        m = (begin + end) / 2;
        if(v < arr[m]) {
            end = m - 1;
        } else if(arr[m] < v) {
            begin = m + 1;
        } else {
            return m;
        }
    }
    return -begin - 1;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};

    int search = 3;

    std::cout << BinarySearch(array, sizeof(array)/sizeof(int), search) << std::endl;


    std::cout << "Hello world" << std::endl;
    return 0;
}


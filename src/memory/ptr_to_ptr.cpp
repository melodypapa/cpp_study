#include <iostream>

int main(){
    int ** handle = nullptr;
    handle = new int *;
    *handle = new int;
    **handle = 3;
    delete *handle;
    delete handle;

    std::cout << **handle << std::endl;
}
#include <cstring>
#include <iostream>

char * copyString(const char * str){
    char * result = new char[strlen(str)];
    // strcpy(result, str); the buffer size of result is not enough for strcpy action     
    return result;
}

int main(){
    char test[] = "123";
    const char * ptr2 = "hello";
    char ptr[] = R"(Hello "World"!)";
    ptr[1] = 'a';
    std::cout << test << ptr << ptr2 << std::endl;
}
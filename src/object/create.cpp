#include <string>
#include <iostream>

class MyClass {
    private:
        std::string nName;

    public:
        MyClass(){
            std::cout << "Init" << std::endl;
        }
};

int main(){
    MyClass obj;
    return 0;
}
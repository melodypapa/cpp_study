#include <iostream>

class Simple
{
  public:
    Simple()
    {
        std::cout << "Simple constructor called!" << std::endl;
    }
    ~Simple()
    {
        std::cout << "Simple destructor called!" << std::endl;
    }
};

int
main()
{
    Simple * mySimpleArray = new Simple[4];

    delete * mySimpleArray;
    mySimpleArray = nullptr;
}
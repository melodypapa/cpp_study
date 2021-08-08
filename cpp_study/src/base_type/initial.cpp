#include <iostream>

struct PodStruct {
   uint64_t a;
   char     b[256];
   bool     c;
};

struct Taxonomist {
   Taxonomist()
   {
      printf("(no argument)\n");
   }
   Taxonomist(char x)
   {
      printf("char: %c\n", x);
   }
   Taxonomist(int x)
   {
      printf("int: %d\n", x);
   }
   Taxonomist(float x)
   {
      printf("float: %f\n", x);
   }
};

void printArray(const std::string &label, int *intArray, int length)
{
   std::cout << label << ": ";
   for (int idx = 0; idx < length; idx++) {
      std::cout << intArray[idx] << ", ";
   }
   std::cout << std::endl;
}

int main()
{
   int a = 0;
   int b{};
   int c = {};
   int d;
   int e = 42;
   int f{42};
   int g = {42};
   int h(42);

   std::cout << "a = " << a << std::endl;
   std::cout << "b = " << b << std::endl;
   std::cout << "c = " << c << std::endl;
   std::cout << "d = " << d << std::endl;
   std::cout << "e = " << e << std::endl;
   std::cout << "f = " << f << std::endl;
   std::cout << "g = " << g << std::endl;
   std::cout << "h = " << h << std::endl;

   PodStruct initialized_pod1{};                  // All fields zeroed
   PodStruct initialized_pod2 = {};               // All fields zeroed
   PodStruct initialized_pod3{42, "Hello"};       // Fields a & b set; c = 0
   PodStruct initialized_pod4{42, "Hello", true}; // All fields set

   std::cout << "initialized_pod1 = " << initialized_pod1.a << ", " << initialized_pod1.b << ", " << initialized_pod1.c << std::endl;
   std::cout << "initialized_pod2 = " << initialized_pod2.a << ", " << initialized_pod2.b << ", " << initialized_pod2.c << std::endl;
   std::cout << "initialized_pod3 = " << initialized_pod3.a << ", " << initialized_pod3.b << ", " << initialized_pod3.c << std::endl;
   std::cout << "initialized_pod4 = " << initialized_pod4.a << ", " << initialized_pod4.b << ", " << initialized_pod4.c << std::endl;

   // PodStruct initialized_pod5 = { 42, true };   //won't compile
   // PodStruct initialized_pod6(42, "Hello", true); // won't compile

   int array_1[]{1, 2, 3};  // Array of length 3; 1, 2, 3
   int array_2[5]{};        // Array of length 5; 0, 0, 0, 0, 0
   int array_3[5]{1, 2, 3}; // Array of length 5; 1, 2, 3, 0, 0
   int array_4[5];          // Array of length 5; uninitialized values

   printArray("array_1", array_1, 3);
   printArray("array_2", array_2, 5);
   printArray("array_3", array_3, 5);
   printArray("array_4", array_4, 5);

   Taxonomist t1;
   Taxonomist t2{'c'};
   Taxonomist t3{65537};
   Taxonomist t4{6.02e23f};
   Taxonomist t5('g');
   Taxonomist t6 = {'l'};
   Taxonomist t7{};
   Taxonomist t8();
}
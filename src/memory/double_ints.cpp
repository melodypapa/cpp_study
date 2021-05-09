#include <iostream>

void doubleInts(int *theArray, size_t size)
{
   for (size_t i = 0; i < size; i++) {
      theArray[i] *= 2;
   }
}

void printArr(int *theArray, size_t size)
{
   for (size_t i = 0; i < size; i++) {
      std::cout << theArray[i] << " ";
   }
   std::cout << std::endl;
}

int main()
{
   size_t arrSize   = 4;
   int *  heapArray = new int[arrSize]{1, 5, 3, 4};
   printArr(heapArray, arrSize);
   doubleInts(heapArray, arrSize);
   printArr(heapArray, arrSize);
   delete[] heapArray;
   heapArray = nullptr;

   int stackArray[] = {5, 7, 9, 11};
   arrSize          = std::size(stackArray);
   printArr(stackArray, arrSize);
   doubleInts(stackArray, arrSize);
   printArr(stackArray, arrSize);
}
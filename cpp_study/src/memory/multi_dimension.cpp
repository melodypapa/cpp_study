#include <iostream>

char **allocateCharacterBoard(size_t xDimension, size_t yDimension)
{
   char **myArray = new char *[xDimension];
   for (size_t i = 0; i < xDimension; i++) {
      myArray[i] = nullptr;
      myArray[i] = new char[yDimension];
   }
   return myArray;
}

void releaseCharacterBoard(char **myArray, size_t xDimension)
{
   for (size_t i = 0; i < xDimension; i++) {
      delete[] myArray[i];
      myArray[i] = nullptr;
   }
   delete[] myArray;
   myArray = nullptr;
}

/**
 * @brief main entry for the multi dimension
 * How to debug memory to see @docs/vs_code.md
 * @return int 
 */
int main()
{
   char **buffer = allocateCharacterBoard(5, 4);
   releaseCharacterBoard(buffer, 5);
   return 0;
}
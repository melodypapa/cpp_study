#include <cstdio>
#include <iostream>
#include <memory>

void CloseFile(FILE *filePtr)
{
   if (filePtr == nullptr) {
      return;
   }
   fclose(filePtr);
   std::cout << "File closed." << std::endl;
}

int main()
{
   FILE *f = fopen("data.txt", "w");

   std::shared_ptr<FILE> filePtr(f, CloseFile);
   
   if (filePtr == nullptr) {
      std::cerr << "Error opeing file." << std::endl;
   }
   else {
      std::cout << "File opened." << std::endl;
   }
   return 0;
}
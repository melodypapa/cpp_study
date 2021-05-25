#include <cstddef>
#include <cstdio>

int main()
{
   size_t size_b = sizeof(std::byte);
   printf("byte: %zd\n", size_b);
   size_t size_c = sizeof(char);
   printf("char: %zd\n", size_c);
   size_t size_s = sizeof(short);
   printf("short: %zd\n", size_s);
   size_t size_i = sizeof(int);
   printf("int: %zd\n", size_i);
   size_t size_l = sizeof(long);
   printf("long: %zd\n", size_l);
   size_t size_ll = sizeof(long long);
   printf("long long: %zd\n", size_ll);
   size_t size_t = sizeof(std::size_t);
   printf("size_t: %zd\n", size_t);
   return 0;
}
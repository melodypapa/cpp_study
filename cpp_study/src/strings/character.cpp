#include <cstdio>

int main(){
    char x = 'M';
    wchar_t y = L'Z';
    //wchar_t z = L'我';

    //printf("Windows binaries start with %c%lc. not start with %lc. \n", x, y, z);
    printf("Windows binaries start with %c%lc. \n", x, y);
}
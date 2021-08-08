#include <cstdint>
#include <cstdio>
#include <limits>

void print_addr(void* x)
{
    printf("%p\n", x);
}

void trainwreck(const char* read_only){
    auto as_unsigned = (unsigned char *)read_only;
    //auto as_unsigned = reinterpret_cast<unsigned char*>(read_only);
    *as_unsigned = 'b';
}

void case1()
{
    auto    x = 2.7182818284590452353602874713527L;
    uint8_t y = x;
}

void case2()
{
    double      x3 = std::numeric_limits<float>::max();
    long double y3 = std::numeric_limits<double>::max();
    float       z3 = std::numeric_limits<long double>::max();  // Undefined Behavior
    printf("x: %g\ny: %Lg\nz: %g\n", x3, y3, z3);
}

void case3(){
    auto ezra = "Ezra";
    printf("Before trainwreck: %s\n", ezra);
    trainwreck(ezra);
    printf("After trainwreck: %s\n", ezra);
}

int main()
{
    case1();
    case2();
    // case3();

    //uint8_t y1 {x};

    // 0b111111111 = 511
    // uint8_t x2 = 0b111111111;  // 255
    // int8_t  y2 = 0b111111111;  // Implementation defined.
    // printf("x: %u\ny: %d\n", x, y);

    int x4{};
    print_addr(&x4);
    print_addr(nullptr);

    int32_t a = 100;
    int64_t b{a};
    if (a == b) printf("Non-narrowing conversion!\n");

    b = std::numeric_limits<int64_t>::max();
    int32_t c(b);
    if (c != b) printf("Narrowing conversion!\n");
}
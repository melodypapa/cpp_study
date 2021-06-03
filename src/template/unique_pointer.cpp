#include <cstdio>

template<typename T>

struct SimpleUniquePointer {
    SimpleUniquePointer() = default;

    SimpleUniquePointer(T * pointer):pointer{

    }

    ~SimpleUniquePointer(){
        if (pointer) 
    }
}
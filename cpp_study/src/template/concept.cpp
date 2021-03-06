#include <cstddef>
#include <type_traits>

template<typename T>
concept bool Averagable() {
    return std::is_default_constructible<T>::value && requires(T a, T b){
        {a += b} -> T;
        {a / size_t {1}} -> T;
    };
}

int main(){

}
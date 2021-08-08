#include <stdexcept>

class SimpleString {
    private:
        size_t max_size;
        char * buffer;
        size_t length;

    SimpleString(size_t max_size):max_size{max_size},length{}; 
    
}
#include <cstdio>

class ReadOnlyInt {
   public:
    ReadOnlyInt(int val) : val{val} {}
    explicit operator int() const
    {
        return val;
    }

   private:
    const int val;
};

int main()
{
    ReadOnlyInt the_answer{42};
    auto ten_answer = static_cast<int>(the_answer) * 10;
    printf("the_answer = %d \nten_answer = %d \n", the_answer, ten_answer);
}
#include <iostream>
#include <string>
#include <charconv>
#include <array>

void simple_string()
{
    std::string A("12");
    std::string B("34");
    std::string C;

    C = A + B;
    std::cout << C << std::endl;
}

void string_compare()
{
    std::string myString = "hello";
    myString += ", there";
    std::string myOtherString = myString;
    if (myString == myOtherString)
    {
        myOtherString[0] = 'H';
    }
    std::cout << myString << std::endl;
    std::cout << myOtherString.c_str() << std::endl;
}

void string_literals()
{
    using namespace std::string_literals;

    std::string s1 = "abc\0\0def";
    std::string s2 = "abc\0\0def"s;
    std::cout << "s1: " << s1.size() << " \"" << s1 << "\"\n";
    std::cout << "s2: " << s2.size() << " \"" << s2 << "\"\n";
}

void convert_to_string()
{
    long double d = 3.14L;
    std::string s = std::to_string(d);
    std::cout << s << std::endl;
}

void parse_string()
{
    const std::string toParse = "    123USD";
    size_t index = 0;
    int value = stoi(toParse, &index);
    std::cout << "Parsed value: " << value << std::endl;
    std::cout << "First non-parsed character: '" << toParse[index] << "'" << std::endl;

    value = stoi(toParse, nullptr, 16);
    std::cout << "Parsed value: " << value << std::endl;
}

void to_chars()
{
    std::string out(10, ' ');
    auto result = std::to_chars(out.data(), out.data() + out.size(), 12345);
    if (result.ec == std::errc())
    {
        std::cout << out.size() << " \"" << out << "\"" << std::endl;
    }

    std::array<char, 10> str;

    if (auto [ptr, ec] = std::to_chars(str.data(), str.data() + str.size(), 42);
        ec == std::errc())
    {
        std::cout << str.size() << " \"" << std::string_view(str.data(), ptr - str.data()) << "\"" << std::endl;
        // C++17, uses string_view(ptr, length
    }
}

int main()
{
    simple_string();

    string_compare();

    string_literals();

    convert_to_string();

    parse_string();

    to_chars();
}
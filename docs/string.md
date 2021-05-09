- [String](#string)
  - [String literals](#string-literals)
  - [Raw string literal](#raw-string-literal)
  - [Wide string](#wide-string)

# String

## String literals

assign the string literals to a pointer and string content can not be changed

``` C++
const char * ptr = "hello";
```

## Raw string literal

**format**: R"d-char-sequence(r-char-sequence)d-char-sequence"

d-char-sequence could be "(" and ")" and it could also be "-" and "-"

``` C++ 
const char * str = R"(Hello "World"!)";

```

## Wide string

``` C++
const wchat_t * myString = L"Hello, World";
```
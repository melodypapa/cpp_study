- [Class](#class)
  - [Constructor](#constructor)
    - [Delegating constructor](#delegating-constructor)
    - [Explicitly Defaulted Constructors](#explicitly-defaulted-constructors)
    - [Explicitly Deleted Constructors](#explicitly-deleted-constructors)
    - [Constructor Initializers](#constructor-initializers)

# Class

## Constructor

### Delegating constructor

Delegating constructor allow you to call other constructors from the same class from inside the ctor-initialzer.

```C++
SpreadsheetCell::SpreadsheetCell(string_view initialValue)
{
    SpreadsheetCell(stringToDouble(initialValue));
}
```

### Explicitly Defaulted Constructors

To avoid having to write empty default constructors manually, C++ supports the concept of explicitly defaulted constructors.

```C++
class SpreadsheetCell
{
  public:
    SpreadsheetCell() = default;
    SpreadsheetCell(double initialValue);
    SpreadsheetCell(std::string_view initialValue);
    // Remainder of the class definition omitted for brevity
};
```

### Explicitly Deleted Constructors

C++ also supports the concept of explicitly deleted constructors. For example, you can define a class with only static methods (see Chapter 9) for which you do not want to write any constructors and you also do not want the compiler to generate the default constructor. In that case, you need to explicitly delete the default constructor

```C++
class MyClass
{
  public:
    MyClass() = delete;
};
```

### Constructor Initializers

```C++
class SpreadsheetCell
{
  public:
    void setValue(double inValue);
    double getValue() const;
  private:
    double mValue;
};

SpreadsheetCell::SpreadsheetCell(double initialValue)
{
  setValue(initialValue);
}
```

can be written to

```C++
SpreadsheetCell::SpreadsheetCell(double initialValue): mValue(initialValue)
{
}
```
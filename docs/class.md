- [Class](#class)
  - [Constructor](#constructor)
    - [Delegating constructor](#delegating-constructor)

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
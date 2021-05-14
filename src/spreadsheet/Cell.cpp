#include "Cell.h"
#include <string>
#include <iostream>

using namespace std;

/*SpreadsheetCell::SpreadsheetCell(){
   std::cout << "Default Constructor" << std::endl;
   this->value = 1;
}*/

SpreadsheetCell::SpreadsheetCell(double initialValue){
   setValue(initialValue);
}

SpreadsheetCell::SpreadsheetCell(string_view initialValue){
   setString(initialValue);
}

void SpreadsheetCell::setValue(double inValue)
{
   value = inValue;
}

double SpreadsheetCell::getValue() const
{
   return value;
}

void SpreadsheetCell::setString(string_view inString)
{
   value = this->stringToDouble(inString);
}

string SpreadsheetCell::getString() const
{
   return this->doubleToString(value);
}

string SpreadsheetCell::doubleToString(double inValue) const {
    return to_string(inValue);
}

double SpreadsheetCell::stringToDouble(string_view inString) const {
    return strtod(inString.data(), nullptr);
}

SpreadsheetCell::~SpreadsheetCell(){
   std::cout << "Destructor" << std::endl;
}
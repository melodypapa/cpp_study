#include "Cell.h"
#include <string>

using namespace std;

void SpreadSheetCell::setValue(double inValue)
{
   value = inValue;
}

double SpreadSheetCell::getValue() const
{
   return value;
}

void SpreadSheetCell::setString(string_view inString)
{
   value = this->stringToDouble(inString);
}

string SpreadSheetCell::getString() const
{
   return this->doubleToString(value);
}

string SpreadSheetCell::doubleToString(double inValue) const {
    return to_string(inValue);
}

double SpreadSheetCell::stringToDouble(string_view inString) const {
    return strtod(inString.data(), nullptr);
}

#pragma once

#include <string>
#include <string_view>

class SpreadsheetCell {
 private:
   double      value = 0;
   std::string doubleToString(double inValue) const;
   double      stringToDouble(std::string_view inString) const;

 public:
   void        setValue(double inValue);
   double      getValue() const;
   void        setString(std::string_view inString);
   std::string getString() const;

 public:
   SpreadsheetCell() = default;
   SpreadsheetCell(double initialValue);
   SpreadsheetCell(std::string_view initialValue);
   ~SpreadsheetCell();
};

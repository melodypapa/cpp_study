#include <iostream>
#include <memory>
#include "Cell.h"

void printCell(const SpreadsheetCell &cell)
{
   std::cout << cell.getString() << std::endl;
}

int main()
{
   SpreadsheetCell myCell(5), anotherCell(4);

   //myCell.setValue(6);
   //anotherCell.setString("3.2");
   std::cout << "Cell 1: " << myCell.getValue() << std::endl;
   std::cout << "Cell 2: " << anotherCell.getValue() << std::endl;

   SpreadsheetCell *myCellp = new SpreadsheetCell(6);
   //myCellp->setValue(3.7);
   std::cout << "cell 3: " << myCellp->getValue() << " " << myCellp->getString() << std::endl;
   delete myCellp;
   myCellp = nullptr;

   SpreadsheetCell *anotherCellp = nullptr;
   anotherCellp                  = new SpreadsheetCell(10);
   std::cout << "cell 4: " << anotherCellp->getValue() << " " << anotherCellp->getString() << std::endl;
   delete anotherCellp;
   anotherCellp = nullptr;

   auto myCellp2 = std::make_unique<SpreadsheetCell>(7);
   //myCellp2->setValue(3.8);
   std::cout << "cell 4: " << myCellp2->getValue() << " " << myCellp2->getString() << std::endl;

   SpreadsheetCell aThirdCell("test");                                     // Uses string-arg ctor
   SpreadsheetCell aFourthCell(4.4);                                       // Uses double-arg ctor
   auto            aFifthCellp = std::make_unique<SpreadsheetCell>("5.5"); // string-arg ctor
   std::cout << "aThirdCell: " << aThirdCell.getValue() << std::endl;
   std::cout << "aFourthCell: " << aFourthCell.getValue() << std::endl;
   std::cout << "aFifthCellp: " << aFifthCellp->getValue() << std::endl;

   SpreadsheetCell cells[3];
   for (int idx = 0; idx < 3; idx++) {
      std::cout << cells[idx].getValue() << " " << std::endl;
   }

   SpreadsheetCell myCell2;
   myCell2.setValue(6);
   std::cout << "cell 1: " << myCell2.getValue() << std::endl;

   auto smartCellp = std::make_unique<SpreadsheetCell>();

}
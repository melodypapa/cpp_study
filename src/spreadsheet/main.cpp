#include <iostream>
#include <memory>
#include "Cell.h"

void printCell(const SpreadSheetCell &cell)
{
   std::cout << cell.getString() << std::endl;
}

int main()
{
   SpreadSheetCell myCell(5), anotherCell(4);

   //myCell.setValue(6);
   //anotherCell.setString("3.2");
   std::cout << "Cell 1: " << myCell.getValue() << std::endl;
   std::cout << "Cell 2: " << anotherCell.getValue() << std::endl;

   SpreadSheetCell *myCellp = new SpreadSheetCell(6);
   //myCellp->setValue(3.7);
   std::cout << "cell 3: " << myCellp->getValue() << " " << myCellp->getString() << std::endl;
   delete myCellp;
   myCellp = nullptr;

   SpreadSheetCell *anotherCellp = nullptr;
   anotherCellp                  = new SpreadSheetCell(10);
   std::cout << "cell 4: " << anotherCellp->getValue() << " " << anotherCellp->getString() << std::endl;
   delete anotherCellp;
   anotherCellp = nullptr;

   auto myCellp2 = std::make_unique<SpreadSheetCell>(7);
   //myCellp2->setValue(3.8);
   std::cout << "cell 4: " << myCellp2->getValue() << " " << myCellp2->getString() << std::endl;

   SpreadSheetCell aThirdCell("test");                                // Uses string-arg ctor
   SpreadSheetCell aFourthCell(4.4);                                  // Uses double-arg ctor
   auto            aFifthCellp = std::make_unique<SpreadSheetCell>("5.5"); // string-arg ctor
   std::cout << "aThirdCell: " << aThirdCell.getValue() << std::endl;
   std::cout << "aFourthCell: " << aFourthCell.getValue() << std::endl;
   std::cout << "aFifthCellp: " << aFifthCellp->getValue() << std::endl;
}
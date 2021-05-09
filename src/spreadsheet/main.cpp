#include <iostream>
#include "Cell.h"

void printCell(const SpreadSheetCell & cell){
    std::cout << cell.getString() << std::endl;
}

int main(){
    SpreadSheetCell myCell, anotherCell;

    myCell.setValue(6);
    anotherCell.setString("3.2");
    std::cout << "Cell 1: " << myCell.getValue() << std::endl;
    std::cout << "Cell 2: " << anotherCell.getValue() << std::endl;
}
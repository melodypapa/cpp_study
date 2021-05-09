#include <iostream>
#include "Cell.h"

void printCell(const SpreadSheetCell & cell){
    std::cout << cell.getString() << std::endl;
}

int main(){
    SpreadSheetCell * pCell = new SpreadSheetCell();
    printCell(*pCell);
}
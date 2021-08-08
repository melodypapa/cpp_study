#include <iostream>
#include "enum_class.h"

int main()
{
    PieceType piece = PieceType::King;

    //if (piece == 2){
    if (piece == PieceType::King)
    {
        std::cout << "King" << std::endl;
    }
}
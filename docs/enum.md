[TOC]

# Enumerated Types

## const statements

``` C++ {.line-numbers}
const int PieceTypeKing = 0;
const int PieceTypeQueen = 1;
const int PieceTypeRook = 2;
const int PieceTypePawn = 3;
```

but it is meaningless that by adding 1, a king becomes a queen.

## C language style

``` C++
enum PieceType {
    PieceTypeKing = 1,
    PieceTypeQueen = 1;
    PieceTypeRook = 2;
    PieceTypePawn = 3;
}
```

## Strong typed enumeration

``` C++ {.line-numbers}
enum class PieceType
{
    King = 1,
    Queen,
    Rook = 10,
    Pawn
};
```

## Example

Please refer to src/enum_class for more details
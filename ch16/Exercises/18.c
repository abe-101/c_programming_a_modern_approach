#include <stdio.h>

typedef enum {EMPTY, PAWN, ROOK, KNIGHT, BISHOP, QUEEN, KING,} Piece;

typedef enum {WHITE, BLACK} Color;

typedef struct {
    Piece piece;
    Color color;
} Square;



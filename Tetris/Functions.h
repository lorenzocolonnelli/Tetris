#include "raylib.h"

extern int stage[];
extern int deletedLines;

void drawTetromino(const Color currentColor, const int startOffsetX, const int startOffsetY, const int tetrominoStartX, const int tetrominoStartY, const int *tetromino);
void ResetLines(int startLineY);
void DeleteLines(Sound sound);
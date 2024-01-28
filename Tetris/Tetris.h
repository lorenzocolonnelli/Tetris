#define STAGE_WIDTH 12
#define STAGE_HEIGHT 22
#define TILE_SIZE 24
#define TETROMINO_SIZE 4
#define BG_COLOR (Color) {25, 0, 51, 255}
#define STAGE_COLOR (Color) {160, 160, 160, 255}

int CheckCollision(const int tetrominoStartX, const int tetrominoStartY, const int *tetromino);

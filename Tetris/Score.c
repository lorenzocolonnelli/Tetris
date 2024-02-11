#include "Score.h"

void Score()
{
    switch (deletedLines)
    {
        case 1:
            score += 100;
            break;
        case 2:
            score += 300;
            break;
        case 3:
            score += 700;
            break;
        case 4:
            score += 1000;
            break;
        default:
            break;
    }
}
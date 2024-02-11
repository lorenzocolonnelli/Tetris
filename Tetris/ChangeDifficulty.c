#include "ChangeDifficulty.h"

void ChangeDifficulty()
{
   switch (score / 800)
   {
        case 1:
            downTimeMultiplier = 2;
            break;
        case 2: 
            downTimeMultiplier = 3;
            break;
        case 3:
            downTimeMultiplier = 4;
            break;
        case 4:
            downTimeMultiplier = 5;
            break;
        case 5: 
            downTimeMultiplier = 6;
            break;

        default:
        break;
   }

}
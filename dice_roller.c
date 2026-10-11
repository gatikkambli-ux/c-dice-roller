
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice;

    srand(time(0));
    dice = rand() % 6 + 1;

    printf("Dice rolled: %d\n", dice);

    return 0;
}

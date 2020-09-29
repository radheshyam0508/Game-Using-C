// Snake, Water, Gun game. In our childhood everyone has played this game. So Just for fun I decided to develope this game in C programming.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function to select the options

int WaterGunSnake(char You, char Comp)
{

    if (You == Comp)
    {
        return 0;
    }

    if (You == 's' && Comp == 'w')
    {

        return 1;
    }

    else if (You == 'w' && Comp == 's')
    {

        return -1;
    }

    if (You == 'g' && Comp == 's')
    {

        return 1;
    }

    else if (You == 's' && Comp == 'g')
    {

        return -1;
    }

    if (You == 'w' && Comp == 'g')
    {

        return 1;
    }

    else if (You == 'g' && Comp == 'w')
    {

        return -1;
    }
}

int main()
{

    char You, Comp;

    // logic for computer to select the option from 's', 'w' and 'g'.

    srand(time(0));
    int num = rand() % 100 + 1; // to genetate the random number between 1 to 100.

    if (num < 33)
    {

        Comp = 's';
    }

    if (num > 33 && num < 66)
    {

        Comp = 'w';
    }

    else
    {

        Comp = 'g';
    }

    printf("Select 's' for SNAKE, 'w' for WATER and 'g' for GUN.\n");

    scanf("%c", &You);

    int result = WaterGunSnake(You, Comp);

    printf("Computer has selected %c and you have selected %c\n", Comp, You);

    if (result == 0)
    {
        printf("Ohh Game Draw. Do You want To play again???\n");
    }

    if (result == 1)
    {

        printf("Congratulations, You WON !!!!!!!!!");
    }

    if (result == -1)
    {

        printf("Sorry, Computer WON !!!!!!!!!");
    }

    return 0;
}
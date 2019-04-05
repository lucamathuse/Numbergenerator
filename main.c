#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    #define randnum(min, max) \
        ((rand() % (int)(((max) + 1) - (min))) + (min))

int main()
{
    int lowNum, highNum, genNum, i, userChoice = 1;
    srand(time(NULL));
    while(userChoice == 1)
    {
        printf("Lowest Number: ");
        scanf("%d", &lowNum);
        printf("Highest Number: ");
        scanf("%d", &highNum);
        printf("How many numbers do you want to generate?: ");
        scanf("%d", &genNum);

        for(i = 0; i <= genNum; i++)
        {
           printf("%d\n", randnum(lowNum, highNum));
        }
        
        printf("Another round? Yes = 1, No = 0: ");
        scanf("%d", &userChoice);
    }
    return 0;
}
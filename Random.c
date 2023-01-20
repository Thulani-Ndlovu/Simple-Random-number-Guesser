/* Created by: Thulani Ndlovu
    Date: 23/12/2022
    title: Guessing a Randomly generated Number
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Guess_Number();
void Play_Game(int expected_num);

int main()
{
   int Random_number =0;
   srand(time(NULL));
   Random_number = (rand()%10)+1; // Guess number between 1 and 10;
   printf("\n");
   Play_Game(Random_number);
   printf("\n");
    return 0;
}

int Guess_Number()
{   unsigned int num=0;
    printf("Guess the number: ");
    scanf("%u",&num); // The variable in scanf must be referenced.
    
    return num;
}

void Play_Game(int expected_num)
{   
    int Max_Guesses=5;
    int number=Guess_Number();
    int counter=0;

    for(int i=0;i<Max_Guesses;i++)
    {
        if(number==expected_num)
        {
            printf("You Win!!");
            break;
        }
        
        else if(number>expected_num)
        {
            printf("Guess Lower!!\n ");
            number=Guess_Number();
            counter+=1;

        }
        else if(number<expected_num)
        {
            printf("Guess Higher!!\n ");
            number= Guess_Number();
            counter+=1;
        }
    }
    if(counter==Max_Guesses && number!=expected_num)
    {
        printf("You Lose!!");
    }
    
}
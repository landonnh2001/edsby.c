#include <stdio.h>

#include <cs50.h>
int POINTSPOSSIBLE;
int POINTSEARNED;
int ASSIGNMENT;

int main (void){
    int i=ASSIGNMENT;
      ASSIGNMENT=get_int("How many assignments?");// Ask the user for an integer 
    for(i=0;i<ASSIGNMENT;i++){//runs the program as long as the given integer is less than the max number of assignments
    POINTSPOSSIBLE=get_int("How many possible points?");//get another integer from the user to represent the number of possible points
      POINTSPOSSIBLE=POINTSPOSSIBLE+i;
    POINTSEARNED=get_int("How many points earned?");//get a last integer from the user to describe the amount of points earned 
      POINTSEARNED=POINTSEARNED+i;
    int score=POINTSEARNED/POINTSPOSSIBLE;//use score to represent the points earned out of the points possible
        printf("score:%d\n",i);//print the score of each output from line 16
    }
}


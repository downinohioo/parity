#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int number = get_int("Input a number: ");
    if((number % 2)== 0){
        printf("This number is even\n");
    } else {
        printf("This number is odd\n");
    }
    
}
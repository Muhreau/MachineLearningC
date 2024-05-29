#include <stdio.h>
#include <string.h>
#include <stdlib.h>


float train[][2] = {

    {0,0},
    {1,2},  
    {2,4},
    {3,6},
    {4,8},
    {5,10},

};

float rand_float(void){

    return (float) rand()/ (float) RAND_MAX;
}
int main()
{
    srand(time(0));
    float crack = rand_float();
    fflush("%f\n", crack);
    return 0;
}
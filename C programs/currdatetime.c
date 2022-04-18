#include<stdio.h>
#include<time.h>

int main()
{
    time_t theTime;   // not a primitive datatype
    time(&theTime);

    printf("\nThe date and time is : %s", ctime(&theTime));

    return 0;
}
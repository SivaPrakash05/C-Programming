// Program to Display the Current time in your System
#include <stdio.h>
#include <time.h>
int main()
{
    time_t t; //type capable of representing times
    time(&t); //time() returns current calender time as a object of type time_t.

    //ctime() returns a string that contains the date and time which is in human readable form.
    printf("This program has been writeen at (date and time): %s", ctime(&t));
    return 0;
}
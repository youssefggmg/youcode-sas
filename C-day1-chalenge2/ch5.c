#include <stdio.h>

int main (){
    int year,mounts ,days ,hours,minuts,secondes;
    printf("Enter a year: ");
    scanf("%d", &year);
    mounts= year*12;
    days = mounts*30;
    hours = days*24;
    minuts = hours*60;
    secondes = minuts*60;
    printf("The number of seconds in %d years is %d\n", year, secondes);
    return 0;
}
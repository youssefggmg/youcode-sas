#include <stdio.h>

int main (){
    char C;
    printf("Enter a character: ");
    scanf("%c", &C);
    if (C>64||C<91)
    {
        printf("The character is uppercase.");
    }
    else if (C>96||C<123){
        printf("The character is lowercase.");
    }
    
    return 0;
}
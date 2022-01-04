#include<stdio.h>
int main()
{
    char upperchar, lowerchar;
    int ascii;
    printf("Enter an uppercase character: ");
    scanf("%c", &upperchar);
    ascii = upperchar;
    lowerchar = ascii+32;
    printf(" Lowercase = %c", lowerchar);
    return 0;
}

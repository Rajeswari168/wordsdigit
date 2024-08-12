#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number (0 to 99): ");
    scanf("%d", &num);
    if (num < 0 || num > 99)
    {
        printf("Number out of range.");
    }
    else
    {
        printf("In words: ");
    }
    return 0;
}

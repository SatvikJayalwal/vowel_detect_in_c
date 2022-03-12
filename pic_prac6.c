#include<stdio.h>
#include<conio.h>
int main()
{
    char alphabet; int lc,uc;
    printf("\nThis program detects vowel from letter using if statement\n");
    printf("\nEnter an alphabet : ");
    scanf("%c",&alphabet);
    lc=(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u');
    uc=(alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U');
    if (lc||uc)
    {
        printf("\n%c is a vowel and not a consonant\n",alphabet);
    }

    return 0;

}
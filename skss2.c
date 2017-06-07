#include<stdio.h>
int main()
{
int c,x;
printf("enter a character\n");
scanf("%c",&c);
if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
{
printf("the entered character is VOWEL:");
}
else
{
printf("the entered character is CONSONANT:");
}
return 0;
}

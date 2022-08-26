//function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
char palindrome(char*);
int main()
{
   char p[50];
   palindrome(p);
   return 0;
}
char palindrome(char pl[])
{
   int i,j;
   printf("Enter a string :");
   scanf("%s",pl);
   j=strlen(pl);
   for(i=0;i<j/2;i++)
    {
      if(pl[i] != pl[j-1-i])
      {
        printf("%s is not palindrome",pl);
        break;
      }
    }
    if(i==j/2)
    printf("%s is palindrome",pl);
}

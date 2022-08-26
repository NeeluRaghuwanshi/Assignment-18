//function to compare two strings
#include<stdio.h>
char compare(char*,char*);
int main()
{
   char a[50],b[50];
   compare(a,b);
   return 0;
}
char compare(char s1[],char s2[])
{
    int i,flag=0;
    printf("Enter string 1 :");
    scanf("%s",s1);
    printf("Enter string 2 :");
    scanf("%s",s2);
    for(i=0;s1[i]||s2[i];i++)
      {
         if(s1[i] != s2[i])
           flag=1;
           break;
      }
    if(flag=0)
      printf("Strings are same\n");
    else
    printf("Strings are not same\n");

}

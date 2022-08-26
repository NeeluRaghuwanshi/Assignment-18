//function to calculate length of the string
#include<stdio.h>
int length(char*);
int main()
{
   char s[50];
   int len;
   len=length(s);
   printf("Length of string is %d",len);
   return 0;

}
int length(char sl[])
  {
    int i;
    printf("Enter a string:");
    fgets(sl,50,stdin);
    for(i=0;sl[i];i++);
    return i;
  }

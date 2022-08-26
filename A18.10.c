//function to find the repeated character in a given string.
#include<stdio.h>
void repeated(char*);
int main()
{
char a[50];
repeated(a);
return 0;
}
void repeated(char s[])
{
  char freq[150]={0};
  int i;
  printf("Enter a string :");
  fgets(s,50,stdin);
  for(i=0;s[i];)
    freq[s[i++]]++;
  for(i=0;i<150;i++)
  {
    if(freq[i]>1)
    printf("%c is repeated character\n",i);

  }
}

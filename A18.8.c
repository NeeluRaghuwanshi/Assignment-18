//function to count words in a given string
#include<stdio.h>
char countword(char*);
int main()
{
  char cc[50];
  countword(cc);
  return 0;
}
char countword(char c[])
{
    int i,count=1;
    printf("Enter a string  :  ");
    fgets(c,50,stdin);
    for(i=0;c[i];i++)
      {
        if(c[i]==' ' && c[i]!='\0')
           count++;

      }
    printf("Number of words are %d",count);

}

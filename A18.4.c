//function to transform string into uppercase
char upper(char*);
#include<stdio.h>
int main()
{
  char n[20];
  upper(n);
  return 0;
}
char upper(char s[])
  {
    int i;
    printf("Enter a string\n");
    fgets(s,20,stdin);
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
    }
    printf("string in upper case : %s\n",s);
  }

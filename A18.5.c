//function to transform string into lowercase
char lower(char*);
#include<stdio.h>
int main()
{
  char n[20];
  lower(n);
  return 0;
}
char lower(char s[])
  {
    int i;
    printf("Enter a string\n");
    fgets(s,20,stdin);
    for(i=0;s[i];i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
    }
    printf("string in lower case : %s\n",s);
  }

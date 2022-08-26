//function to check whether a given string is an alphanumeric string or not.
#include<stdio.h>
char alphanumeric(char*);
int main()
{
   char an[50];
   alphanumeric(an);
   return 0;
}
char alphanumeric(char s[])
  {
    int i,f1=0,f2=0;
    printf("Enter a string\n");
    fgets(s,50,stdin);
    for(i=0;s[i];i++)

        {
          if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
                f1=1;
          if(s[i]>='0' && s[i]<='9')
                f2=1;
        }

       if(f1==1&&f2==1)
          printf("String is alphanumeric");
        else
          printf("String is not alphanumeric");

  }





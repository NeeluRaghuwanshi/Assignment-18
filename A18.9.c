//function to reverse a string word wise.
#include<stdio.h>
#include<string.h>
void swap(char*,int,int);
void reverse(char*);
int main()
{
  char a[50];
  reverse(a);
  return 0;
}
void swap(char a[],int i,int j)
{
  char temp;
  while(i<=j)
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      i++;
      j--;
    }
}
void reverse(char a[])
{
 printf("Enter a string:");
 fgets(a,50,stdin);
 int i=0,start=0,end=0,flag=0;
 while (a[i] != '\0')
 {
   while(a[i] != ' ')
   {
    if(a[i] == '\0')
      {
        flag = 1;
        break;
      }
      end++;
      i++;

   }
   swap(a,start,end-1);
   if(flag == 1)
   break;
   start = end++;
   i++;
 }
 swap(a,0,i-1);
 printf("%s",a);
}

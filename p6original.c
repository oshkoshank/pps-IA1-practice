#include <stdio.h>
void input_two_strings();
int strcmp();
void output();


int main ()
{
  char a[30],b[30];
  input_two_strings(a,b);
  int result=strcmp(a,b);
  output(a,b,result);
  return 0;
}



void input_two_strings(char*a, char*b)
{
  printf("Enter the fisrt string: ");
  scanf("%s",a);
  printf("Enter the second string: ");
  scanf("%s",b);
}



int strcmp(char *a, char *b)
{       
    int i;
    for(i=0; a[i]!='\0'&& a[i]==b[i]; i++);
    
      return (a[i]-b[i]);
    
}



void output(char *a, char *b, int result)
{
   if(result==0)
   {
     printf("%s is equal to %s ",a,b);
   }
   else
   {
     if(result>0)
     {
     printf(" %s is greater than %s ",a,b);
     }
     else 
     {
       printf(" %s is greater than %s ",b,a);
     }
   }
}
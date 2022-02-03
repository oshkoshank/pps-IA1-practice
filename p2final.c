#include<stdio.h>
int input();
int cmp();
void output();

int main ()
{
  int a,b,c;
  a=input();
  b=input();
  c=input();
  int largest = cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}

int input()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  return a;
}

int cmp(int a, int b , int c)
{
  int larg;
  if(a>=b && a>=c)
  {
    larg = a; 
  }
  else
  {
    if(b>c)
    {
      larg = b;
    }
    else
    {
      larg = c;
    }
  }
  return larg;
}


void output(int a, int b, int c, int largest )
{
  printf("The largest among %d , %d and %d is %d ", a,b,c,largest);
}

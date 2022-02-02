#include<stdio.h>
int input_n();
int sum_n();
void output();

int main()
{
  int n=input_n();
  int sum= sum_n(n);
  output(n,sum);
  return 0;
}

int input_n()
{
  int a;
  printf("Enter the number till which you wish to find the sum upto: ");
  scanf("%d",&a);
  return a;
}

int sum_n(int n)
{
  int sum=0;
  for(int i = 1; i <= n; i++)
  {
    sum=sum+i;
  }
  return sum;
}

void output(int n, int sum)
{
  for(int i = 1; i <= n; i++)
 {
   printf("%d",i);
   if(i!=n)
   printf("+");
 }
 printf(" is %d",sum);
}
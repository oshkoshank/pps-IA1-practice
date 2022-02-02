#include<stdio.h>
void output(float ,float);
float input()
{
  float n ;
  printf("Enter the number ");
  scanf("%f",&n);
  return n;
  }
float my_sqrt(float n)
{
    float x = n;
    float y = n/2;
    float e = 0.000001; 
    while (x - y > e)
    {
    x = (x + y)/2;
    y = n/x;
    }
    return x;
}
 
int main()
{
  float n= input();
  float result=my_sqrt(n);
  output(n,result);
   return 0;
}
void output(float n, float sqrt_result)
{
  printf("Square root of %f is %f", n,x);
}
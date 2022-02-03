#include<stdio.h>
int input_array_size();
void input_array();
int sum_n_arrays();
void out_put();

int main ()
{
    int n= input_array_size();
    int a[n];
    input_array(n,a);
    int sum=sum_n_arrays(n,a);
   out_put(n,a,sum);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Enter the number of elements you wish to add: ");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    printf("Enter the elements: ");
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
}

int sum_n_arrays(int n, int a[n])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

void out_put(int n, int a[n], int sum)
{

    for (int i =0; i < n; i++)
    {
        printf("%d",a[i]);
        if(i!=n-1)
        printf(" + ");
    }
    printf(" is %d ",sum);
}
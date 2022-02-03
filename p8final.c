#include<stdio.h>     
typedef struct Complex
{
    float real;
    float imag;
}Complex;


int get_n();
void input_n_complex();
Complex add_n_complex();
void output();


int main()
{
    int n = get_n();
    Complex c[n];
    input_n_complex(n,c);
    Complex res=add_n_complex(n,c);
    output(n,c,res);
    return 0;
}


int get_n()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    return n;
}


void input_n_complex(int n,Complex c[n] )
{
  for(int i =0; i < n; i++)
 { printf("Enter the real part of Complex number %d : ",i+1);
  scanf("%f",&c[i].real);
  printf("Enter the imiginary part of Complex number %d : ",i+1);
  scanf("%f",&c[i].imag);
}
}


Complex add_n_complex(int n , Complex c[n])
{
    Complex res;
    res.real=0;
    res.imag=0;
    for(int i = 0; i < n;  i++)
    {
        res.real=res.real+c[i].real;
        res.imag=res.imag+c[i].imag;
    }
    return res;
}


void output(int n, Complex c[n], Complex res)
{
    for(int i = 0; i < n; i++)
    {
        printf("%.1f+%.1fi\n  ",c[i].real,c[i].imag);
        if(i!=n-1)
        printf("+");
    }
    printf("is %.1f+%.1fi",res.real,res.imag);
}
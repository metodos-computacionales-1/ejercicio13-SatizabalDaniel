#include <iostream>
float Fibonacci(int N)
{
    int x=1;
    int y=1;
    int b=0;
    for(int i=0;i<n-2;i++)
    {
        b=x+y;
        y=x;
        x=b;
    }
    return b;
}
float FibonacciRecursivo(int N)
{
    int f=0;
    if(N==1)
    {
        f=1;
    }
    else if(N==2)
    {
        f=1;
    }
    else{
        f=FibonacciRecursivo(N-1) FibonacciRecursivo(N-2);
    }
    return f;
}
int main(void)
{
    int test=5;
    std::cout<<"Fibonacci with"<<test<<"gives:"<<FibonacciRecursivo(test)<<"\n";
    std::cout<<"Recursive Fibonacci with"<<test<<"gives:"<<Fibonacci(test)<<"\n";
    return 0;
}
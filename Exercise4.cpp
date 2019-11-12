#include <iostream>
int i1;
int i2;
double d1;
double d2;
int getMaxInt()
{
    int a=0;
    if(i1>i2){
        a=i1;
    }else{
        a=i2;
    }
    return a;
}
double getMaxDouble()
{
    double a=0;
    if(d1>d2){
        a=d1;
    }else{
        a=d2;
    }
    return a;
}
int main()
{
std::cout<<"int 1";std::cin>>i1;std::cout<<"int 2";std::cin>>i2;std::cout<<"double 1";std::cin>>d1;std::cout<<"double 2";std::cin>>d2;
getMaxInt(i1,i2);
getMaxDouble(d1,d2);
return 0;  
}
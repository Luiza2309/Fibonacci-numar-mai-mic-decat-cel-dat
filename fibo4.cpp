#include<iostream>
using namespace std;
unsigned long long f(unsigned long long n)
{
    unsigned long long a=1, b=1, c=0;
    if(n==a)
        return a;
    else
        while(c+a<n)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
}
int main()
{
    unsigned long long n;
    cin>>n;
    cout<<f(n);
}

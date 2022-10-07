#include<iostream>
using namespace std;
#define ll long long
ll fib(int n)
{
    if(n<=1)
        return n;

    return fib(n-1)+fib(n-2);
}
int main()
{
    cout<<fib(6);
}

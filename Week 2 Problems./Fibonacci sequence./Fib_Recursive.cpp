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
 
  /*
     * Fibonacci Sequence : { 0,1,1,2,3,5,8,....... }
     * fib(0) = 0
     * fib(1) = 1
     * fib(n) = fib(n-1) + fib(n-2)
     * Time complexity of this algorithm is O(n^2)
  */
    int idx;
    cin>>idx;
    cout<<fib(idx);
}

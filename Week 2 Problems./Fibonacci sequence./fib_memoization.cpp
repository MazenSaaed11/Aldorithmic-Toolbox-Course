#include<iostream>
#include<vector>
using namespace std;
#define ll long long
vector<ll>fib_val(93,-1);
ll fib(int n)
{
    if(n<=1)
        return n;

    ll ans;
    if(fib_val[n]!=-1)
        ans = fib_val[n];
    else {
         ans = fib(n - 1) + fib(n - 2);
         fib_val[n] = ans;
    }
    return ans;
}
int main()
{
    /*
     * Fibonacci Sequence : { 0,1,1,2,3,5,8,....... }
     * fib(0) = 0
     * fib(1) = 1
     * fib(n) = fib(n-1) + fib(n-2)
     * this algorithm uses memoization to improve the recursion and make it faster
     * Time complexity of this algorithm is O(n)
     */
    fib_val[0]=0;
    fib_val[1]=1;
    int idx;
    cin>>idx;
    cout<<fib(idx);
}

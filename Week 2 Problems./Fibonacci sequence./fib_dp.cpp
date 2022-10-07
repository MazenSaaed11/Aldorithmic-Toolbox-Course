#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main()
{
    /*
     * Fibonacci Sequence : { 0,1,1,2,3,5,8,....... }
     * fib(0) = 0
     * fib(1) = 1
     * fib(n) = fib(n-1) + fib(n-2)
     * Time complexity of this algorithm is O(n)
     */
    int idx;
    cin>>idx;
    if(idx <=1)
        cout<<idx;
    else
    {
        ll first = 0;
        ll second = 1;
        ll ans;
        for(int i=2;i<=idx;i++)
        {
            ans = first+second;
            first = second;
            second = ans;
        }
        cout<<ans;
    }



}

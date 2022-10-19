#include<iostream>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
int fib(int idx)
{
    if(idx <=1)
        return idx;
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
        return ans;
    }
}
int main() {
    Fifo
    int idx;
    cin>>idx;
    cout<<fib(idx);
    return 0;
}

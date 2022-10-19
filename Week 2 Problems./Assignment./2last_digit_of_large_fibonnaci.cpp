#include<iostream>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
int mod = 10;
int fib(int idx)
{
    if (idx <= 1)
        return idx;
    else
    {
        int first = 0;
        int second = 1;
        int ans;
        for (int i = 2; i <= idx; i++)
        {
            ans = (first + second) % mod;
            first = second;
            second = ans;
        }
        return ans;
    }
}
int main() {
    Fifo
    int idx;
    cin >> idx;
    cout << fib(idx);
    return 0;
}

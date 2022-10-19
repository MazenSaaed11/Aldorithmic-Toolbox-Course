#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
vector<int>rep;
int repeated_length(int m=10) {
    int first = 0;
    int second = 1;
    rep.push_back(0);
    rep.push_back(1);
    int ans;
    int dx = 0;
    queue<int>waiting;
    while (true)
    {
        ans = (first + second) % m;
        first = second;
        second = ans;
        if (ans == rep[dx])
        {
            waiting.push(ans);
            if (dx == rep.size() - 1)
                return rep.size();
            dx++;
        }
        else
        {
            dx = 0;
            while (!waiting.empty()) {
                rep.push_back(waiting.front());
                waiting.pop();
            }

            rep.push_back(ans);
        }
    }
}
int fib_mod_10(ll n,int len)
{
    n %= len;
    return rep[n];
}
int main() {
    Fifo

    ll n;
    cin >> n;
    if (n < 2)
        cout << n;
    else
    {
        int len = repeated_length();
        int x = fib_mod_10(n, len);
        int y = fib_mod_10(n - 1, len);
        int z = fib_mod_10(n - 2, len);
        cout << ((((x + y) % 10) * ((y + z) % 10)) % 10);
    }

    return 0;
}

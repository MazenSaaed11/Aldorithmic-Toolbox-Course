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
int summ(ll n,int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum = (rep[i] + sum) % 10;
    int num = n / len;
    int val = (sum * (num % 10)) % 10;
    n %= len;
    for (int i = 0; i <= n; i++)
        val = (val + rep[i]) % 10;

    return val;
}
int main() {
    Fifo

    ll n,m;
    cin >> m>>n;
    int len = repeated_length();
    int sec = 0;
    if (m > 1)
        sec = summ(m - 1, len);

    int f = summ(n, len);

    cout << (f - sec + 10) % 10;
    return 0;
}

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
vector<int>rep;
int repeated_length(int m) {
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
int main() {
    Fifo

    ll n;
    int m;
    cin >> n >> m;
    int len = repeated_length(m);
    n %= len;
    cout << rep[n];


    return 0;
}

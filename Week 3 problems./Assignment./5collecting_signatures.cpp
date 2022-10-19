#include<iostream>
#include<vector>
#include<queue>
#include<iomanip>
#include<algorithm>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
bool by_left(pair<int, int>& p1, pair<int, int>& p2)
{
    return p1.first < p2.first;
}
int main() {
    Fifo
    int n;
    cin >> n;
    vector<pair<int, int>>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), by_left);
    vector<int>ans;
    int s;
    int e;
    for (int i = 0; i < n; i++)
    {
         s = v[i].first;
         e = v[i].second;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j].first > e)
            {
                ans.push_back(e);
                i = j - 1;
                break;
            }
            s = max(s, v[j].first);
            e = min(e, v[j].second);
            if (j == n - 1)
                i = j;
        }
    }
    ans.push_back(e);
    cout << ans.size()<<'\n';
    for (auto x : ans)
        cout << x << ' ';


    return 0;
}

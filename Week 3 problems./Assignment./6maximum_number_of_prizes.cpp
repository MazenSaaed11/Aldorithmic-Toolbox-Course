#include<iostream>
#include<vector>
#include<queue>
#include<iomanip>
#include<algorithm>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long 
int main() {
    Fifo
    int n;
    cin >> n;
    vector<int>ans;
    for (int i = 1; n; i++)
    {
        ans.push_back(i);
        n -= i;
        if (n <= i)
        {
            ans.back() += n;
            n = 0;
        }
    }
    cout << ans.size()<<'\n';
    for (auto x : ans)
        cout << x << ' ';


    return 0;
}

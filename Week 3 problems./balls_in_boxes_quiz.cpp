#include<iostream>
#include<vector>
#include<queue>
#include<iomanip>
#include<algorithm>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
int main() {
    Fifo
    int n;
    cin >> n;
    int last = n-1;
    vector<int>ans(10);
    ans[0]=1;
    int num = 1;
    while (num != 9)
    {
        ans[num] = num + 1;
        last -= (num + 1);
        num++;
    }
    if (last < 0)
        cout << "Impossible\n";
    else
    {
        ans[9] = last;
        for (int x : ans)
            cout << x << " ";
    }

    return 0;
}

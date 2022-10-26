#include<iostream>
#include<vector>
#include<queue>
#include<iomanip>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
int main() {
    Fifo
        // naive iterative algorithm
        // time complexity : O(n^2)
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    for (int i = 0; i < n; i++)
        cin >> a[n - i - 1];
    for (int i = 0; i < n; i++)
        cin >> b[n - i - 1];
    vector<int>ans(2 * n - 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i + j] += a[i] * b[j];
        }
    }
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << " ";


    return 0;
}

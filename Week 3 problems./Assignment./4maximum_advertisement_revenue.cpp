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
    vector<int>a(n);
    vector<int>b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (ll)a[i] * b[i];
    }
 
    cout << sum;


    return 0;
}

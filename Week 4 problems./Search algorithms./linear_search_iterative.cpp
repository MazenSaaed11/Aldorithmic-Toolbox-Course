#include<iostream>
#include<vector>
#include<queue>
#include<iomanip>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long 
int linear_search_iterative(vector<int>& v, int l, int r, int& key)
{
    for (int i = l; i <= r; i++)
    {
        if (v[i] == key)
            return i;
    }
    return -1; // not_found
}
int main() {
    Fifo
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int k = 2;
        cout << linear_search_iterative(v, 0, n - 1, k);
    return 0;
}

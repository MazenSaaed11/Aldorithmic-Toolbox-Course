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
int linear_search_recursive(vector<int>& v, int l, int r, int &key)
{
    if (l > r)
        return -1; // not found

    if (v[l] == key)
        return l;
    
    return linear_search_recursive(v, l + 1, r, key);
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
        cout << linear_search_recursive(v, 0, n - 1, k);
    return 0;
}

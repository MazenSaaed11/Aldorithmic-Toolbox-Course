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
int binary_search_recursive(vector<int>& v, int &key,int l,int r)
{
    if (l > r)
        return -1;

    int mid = l + (r - l) / 2;
    if (v[mid] == key)
        return mid;
    else if (v[mid] > key)
        return binary_search_recursive(v, key, l, mid - 1);
    else
        return binary_search_recursive(v,key, mid + 1, r);
}
int main() {
    Fifo
        int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
        int key; cin >> key;
        cout << binary_search_recursive(v, key, 0, n - 1);

    return 0;
}

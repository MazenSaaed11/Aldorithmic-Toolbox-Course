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
int binary_search_iterative(vector<int>& v,int key)
{
    int l = 0;
    int r = v.size() - 1;
    while (l <= r)
    {
        int middle = l + (r - l) / 2;
        if (key == v[middle])
            return middle;
        else if (key < v[middle])
            r = middle - 1;
        else
            l = middle + 1;
    }
    return -1; // not found
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
    cout << binary_search_iterative(v, key);

    return 0;
}

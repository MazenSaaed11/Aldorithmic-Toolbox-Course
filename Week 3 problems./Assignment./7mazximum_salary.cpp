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
bool is_better(string &x, string &y)
{
    string f = x + y;
    string s = y + x;
        if (f > s)
            return 1;
        else
            return 0;
}
int main() {
    Fifo
    int n;
    cin >> n;
    vector<string>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];


    sort(v.begin(), v.end(), is_better);
    string res = "";
    for (string& x : v)
        res += x;

    cout << res;




    return 0;
}

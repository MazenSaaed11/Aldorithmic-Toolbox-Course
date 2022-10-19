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
    int d, m;
    cin >> d >> m;
    int n;
    cin >> n;
    vector<int>place(n);
    for (int i = 0; i < n; i++)
        cin >> place[i];

    int curr_place = 0;
    int num = 0;
    int last_fueled_at = -1;
    bool flag = 0;
    while (curr_place+m < d)
    {
        int idx = upper_bound(place.begin(), place.end(), curr_place + m) - place.begin();
        idx--;
        if (place[idx] == last_fueled_at)
        {
            cout << -1;
            flag = 1;
            break;
        }
        curr_place = place[idx];
        last_fueled_at = place[idx];
        num++;
    }
    if (!flag)
        cout << num;
    return 0;
}

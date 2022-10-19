#include<iostream>
#include<vector>
#include<queue>
#include<iomanip>
#include<algorithm>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
struct item {
    double cost;
    double weight;
    double avg;
};
bool by_avg(item& f, item& s)
{
    return (f.avg > s.avg);
}
double solve(vector<item>&v,int&n,double W,int idx,double max_sum)
{
    if (W == 0 || idx == n)
        return max_sum;

    double weight = min(v[idx].weight, W);
    solve(v, n, W - weight, idx + 1, max_sum + v[idx].avg * weight);
}
int main() {
    Fifo
    int n;
    double W;
    cin >> n >> W;
    vector<item>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].cost >> v[i].weight;
        v[i].avg = v[i].cost / v[i].weight;
    }
    sort(v.begin(), v.end(), by_avg);
    cout << fixed << setprecision(4);
    cout << solve(v, n, W, 0,0);




    return 0;
}

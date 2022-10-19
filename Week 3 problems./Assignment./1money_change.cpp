#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
int main() {
    Fifo

    int m;
    cin >> m;

    int sum = m / 10;
    m %= 10;
    sum += m / 5;
    m %= 5;
    sum += m;

    cout << sum;

    return 0;
}

#include<iostream>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
int gcd(int a, int b)
{
    int rem = a % b;
    if (rem == 0)
        return b;

    return gcd(b, rem);
}
ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * (ll)b;
}
int main() {
    Fifo
        int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}

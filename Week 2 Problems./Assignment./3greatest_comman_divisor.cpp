#include<iostream>
using namespace std;
#define Fifo ios_base::sync_with_stdio(false); cin.tie(NULL);
int gcd(int a, int b)
{
    int rem = a % b;
    if (rem == 0)
        return b;

    return gcd(b, rem);
}
int main() {
    Fifo
        int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}

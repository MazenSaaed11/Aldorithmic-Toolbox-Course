#include<iostream>
#include<vector>
using namespace std;
#define ll long long
//euclidean algorithm
int gcd(int a,int b)
{
    int rem = a%b;
    if(rem==0)
        return b;

    return gcd(b,rem);
}
int main()
{
    /*
     * gcd(a,b) is the greatest comman divisor between a and b
     * ex : gcd(12,8) = 4
     * Time complexity is O(log(a*b))
     */
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}

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
int lcm(int a,int b)
{
    return (a/gcd(a,b))*b;
}
int main()
{
    /*
     * lcm(a,b) is the least comman multiple between a and b
     * ex : lcm(3,5) = 15
     * we use gcd(a,b) to compute lcm(a,b)
     * Time complexity is O(log(a*b))
     */
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}

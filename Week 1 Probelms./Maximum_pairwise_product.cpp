#include<iostream>
using namespace std;
#define ll long long
int main()
{
 
    int n;
    cin>>n;
    ll max1 = -1;
    ll max2 = -1;
    ll num;
    for(int i=0;i<n;i++) {
        cin>>num;
        if(num>max1)
        {
            max2 = max1;
            max1 = num;
        }
        else if(num>max2)
        {
            max2 = num;
        }
    }
    cout<<max1*max2;
 
}

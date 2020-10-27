#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ull unsigned long long

// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        cout<<"*";
        for(int j=0;j<2*i+1;j++)
        cout<<" ";
        for(int j=0;j<n-i;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=i;j--)
        cout<<"*";
        for(int j=0;j<2*i+1;j++)
        cout<<" ";
        for(int j=n-1;j>=i;j--)
        cout<<"*";
        cout<<endl;
    }
}


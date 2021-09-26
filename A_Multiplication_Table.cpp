#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, x, count =0;
    cin>>n>>x;
    if (x<=n)
    {
        count++;
    }
    
    for (int i = 2; i <= n; i++)
    {
        if (x%i==0 && (x/i)<=n)
        {
            count++;
        }
        
    }
    cout<<count;
    
    return 0;
}
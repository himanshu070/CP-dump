#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin >> n;
    map <ll, ll> mp;
    map<ll, ll>::iterator it ;
    ll x;
    for(int i=1; i<n+1; i++)
    {
        cin>>x;
        mp[x]=i;
    }
    ll a=0, b=0;

    ll m;
    cin>>m;
    ll arr[m];
    for(auto &p:arr) cin>>p;

    for(int i=0; i<m; i++)
    {
        it=mp.find(arr[i]);
        a+=it->second;
        b+=n-(it->second)+1;
    }

    cout << a << " " << b;
    return 0;
}
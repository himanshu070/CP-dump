#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin >> n;
    vector <ll> vec;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        vec.push_back(x);
    }
     
    map <ll, ll> mp;
    for (int i=1; i<=n; i++)
        mp[abs(vec[i]-vec[i-1])] = i;
    mp[abs(vec[0]- vec[n-1])] = 0;


    map <ll, ll> :: iterator itr = mp.begin();
    // for(itr; itr!=mp.end(); itr++)
    // {
    //     cout << itr->first << " " << itr->second << endl;
    // }
    if(itr->second)
    cout << itr->second << " " << itr->second+1; 
    else
    cout << n << " " << 1 << endl;
    return 0;
}
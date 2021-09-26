#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, m, k;
    cin >> n >> m >> k;

    bitset <32> arr[m+1];

    for(int i=0; i<m+1;i++)
    {
        ll x;
        cin >> x;
        arr[i] = x;
    }
    ll ans=0;

    for(int i=0; i<m; i++)
    {
        ll diff=0;
        for(int j=0; j<32; j++)
        {
            if(arr[m][j]!=arr[i][j])
                diff++;
        }
        if(diff<=k) ans++;
    }

    cout << ans << endl;
    
    return 0;
}
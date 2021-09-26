#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll T;
    cin >> T;
    
    while(T--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll c1=0, c2=0;
        if(a==0) c1++;
        else c2++;
        if(b==0) c1++;
        else c2++;
        if(c==0) c1++;
        else c2++;

        if(c1>0 && c2>0) cout << "1" << endl;
        else cout << "0" << endl;
        
    }
    return 0;
}
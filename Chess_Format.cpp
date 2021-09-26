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
        ll a, b;
        cin >> a >> b;
        if(a+b<3) cout << 1 << endl;
        else if(a+b <= 10) cout << 2 << endl;
        else if(a+b <=60) cout << 3 << endl;
        else cout << 4 << endl;
    }
    return 0;
}
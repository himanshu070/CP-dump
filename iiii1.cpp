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
        ll w, l, m , x , y;
        cin >> w >> l >> m >> x >> y;

        if(m-y >= w && m-x>=w)
        cout << "JUMP" << endl;
        else
        cout << "FALL" << endl;

    }
    return 0;
}

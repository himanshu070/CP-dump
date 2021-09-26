#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ld x;
    ll y;
    cin >> x >> y;
    ll maxx = x;
    ll minn = ceil(x/2); 

    for (int i=minn; i<=maxx; i++)
    {
        if(i%y==0)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1;
    return 0;
}


#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
// find 2^n

int find(int n)
{
    if(n==0)
        return 1;
    if(n&1)
    {
        //odd

    }
    else
    {
        //even
        return 2 * 2 * find(n/2);
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin >> n;
    cout << find(n);
    return 0;
}
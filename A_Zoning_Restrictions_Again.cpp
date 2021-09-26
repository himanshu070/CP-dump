#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, h, m;
    ll l, r, x;
    cin >> n >> h >> m;
    ll arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = h;

    for (int i = 0; i < m; i++)
    {
        cin >> l >> r >> x;
        for (int j = l - 1; j < r; j++)
        {
            if (x < arr[j])
            {
                arr[j] = x;
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {

        ans += arr[i] * arr[i];
    }

    cout << ans;
}
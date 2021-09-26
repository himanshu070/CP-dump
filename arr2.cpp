#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n];
    for(auto &a: arr) cin >> a;
    ll min = arr[0];
    ll max = arr[0];

    for(int i=1; i<n; i++)
    {
        if(min>arr[i]) min=arr[i];
        if(max<arr[i]) max=arr[i];

    }

    cout << min << " " << max;
    return 0;
}
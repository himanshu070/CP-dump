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
    for(auto &a: arr) cin>>a;
    ll start = 0;
    ll end = n-1;
    while (start <= end)
    {
        ll x;
        x = arr[start];
        arr[start] = arr[end];
        arr[end] = x;
        start++;
        end--;
    }

     for(auto &a: arr) cout << a << " ";
    return 0;
}
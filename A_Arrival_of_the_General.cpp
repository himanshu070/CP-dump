#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    int a[n];
    int max = INT_MIN, min = INT_MAX;
    int maxind, minind;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i], maxind = i;
        if (a[i] <= min)
            min = a[i], minind = i;
    }

    int count = 0;
    count += n - minind - 1;
    count += maxind;
    // for(int i=0; i<n; i++)
    // {
    //     if(a[i]!=max)
    //         count++;
    //     else
    //         break;
    // }

    // for(int i=n-1; i>=0; i--)
    // {
    //     if(a[i]!=min)
    //         count++;
    //     else
    //         break;
    // }

    if (minind < maxind)
        count--;

    cout << count;

    return 0;
}
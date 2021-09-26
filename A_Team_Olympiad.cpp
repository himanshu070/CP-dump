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
    ll A[n];
    ll freq1 = 0, freq2 = 0, freq3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] == 1)
            freq1++;
        else if (A[i] == 2)
            freq2++;
        else if (A[i] == 3)
            freq3++;
    }
    ll freq = min(freq3, min(freq1, freq2));

    ll a[freq], b[freq], c[freq];
    cout << freq << endl;
    for (int i = 0; i < freq; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[j] == 1)
            {
                a[i] = j + 1;
                A[j] = 4;
                break;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (A[j] == 2)
            {
                b[i] = j + 1;
                A[j] = 4;
                break;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (A[j] == 3)
            {
                c[i] = j + 1;
                A[j] = 4;
                break;
            }
        }
    }
    for (int i = 0; i < freq; i++)
    {
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }

    return 0;
}
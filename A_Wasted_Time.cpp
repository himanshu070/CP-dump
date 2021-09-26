#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;

    double x, y, x0, y0, total=0.0;
    cin >> x0 >> y0;
    while (--n)
    {
        cin >> x >> y;
        total += sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
        x0 = x;
        y0 = y;
    }
    cout << fixed << setprecision(9) << total * k / 50 << endl;
    return 0;
}
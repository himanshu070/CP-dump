#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin >> T;

    while (T--)
    {
        ld finish, distancetoBolt, tigerAcc, boltSpeed, boltTime, tigerTime;
        cin >> finish >> distancetoBolt >> tigerAcc >> boltSpeed;
        boltTime = finish / boltSpeed;
        tigerTime = sqrt((2 * (distancetoBolt + finish)) / tigerAcc);

        if (tigerTime > boltTime)
            cout << "Bolt" << endl;
        else
            cout << "Tiger" << endl;
    }
    return 0;
}
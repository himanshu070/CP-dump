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
        ld a, b;
        cin >> a >> b;
        if(a==b)
        {
            cout << "0" << endl;
            continue;
        }
        else
        {
            ld num1, num2;
            num1 = max(a,b) -1;
            num2 = min(a,b) +1;
            ld ans1 = ceil((b-num1)/2) + ceil((num1-a)/2);
            ld ans2 = ceil((b-num2)/2) + ceil((num2-a)/2);
            cout << max(ans1, ans2) << endl;
        }
    }
    return 0;
}
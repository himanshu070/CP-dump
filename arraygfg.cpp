#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll A[5] = {1,2,3,4,5};

    for(int i=sizeof(A)/ sizeof (ll) - 1; i>=0; i--)
    {
        cout << A[i] << " ";
    }

    return 0;
}
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
        ll N, K;
        cin >> N >> K;
        ll size = pow(2,N);
        ll A[size];
        for (int p=0; p<size; p++) A[p]=p;
        int i = 1;
        while(K--)
        {
            swap(A[i], A[++i]);
        }
        ll sum=0;
        for (int j=0; j<size; j++)
        {
            sum+= (A[j]) ^ j;
        }
        cout << sum << endl;
    }
    return 0;
}
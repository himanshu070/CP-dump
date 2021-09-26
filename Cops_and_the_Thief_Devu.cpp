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
        ll M, x, y;
        ll count=0;
        cin >> M >> x >> y;
        ll A[M];
        for(auto &a: A) cin >> a;
        ll B[100] = {0};
        for(int i=0; i<M; i++)
        {
            ll a = A[i] + x*y;
            ll b = A[i] - x*y;
            if(a>100) a = 100;
            if(b<1) b = 1;

            for(int j=A[i]; j<a; j++)
                B[j-1]=1;
            for (int j = b; j < A[i]+1; j++)
                B[j-1]=1;
            
        }
        for(int i=0; i<100; i++)
            if (B[i] == 1) count ++;
        
        cout << count << endl;
    }
    return 0;
}
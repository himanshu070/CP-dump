#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i][j] == '.')
            {
                if((i+j)&1)
                    cout<<"W";
                else
                    cout<<"B";
                
            }
            else
                cout<<"-";
            
        }
        cout << endl;
    }

    return 0;
}
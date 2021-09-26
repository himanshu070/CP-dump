#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    string s1, s2;

    map <string, string> mp;

    for (int i=0; i<m; i++)
    {
        cin >> s1;
        cin >> s2;

        mp[s1] = s2;
    }

    for(int i=0; i<n; i++)
    {
        cin >> s1;

        auto itr = mp.find(s1);

        if(itr->first.length() <= itr->second.length())
        cout << itr->first << " ";
        else
        cout << itr->second << " ";
        
    }

    return 0;
}






3 5 

#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    //cout << s;

    for(int i = s.length()-1; i>=0; i--)
    {
        cout<<s[i];
        if(s[i-1]!=s[i])
            break;
    }
    return 0;
}
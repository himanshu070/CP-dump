#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define nline "\n"
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define ll long long
#define ld long double
#define sll set<ll>
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define gri greater<long long>()
#define set_bits __builtin_popcountll
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#ifndef himanshu070
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(string t) {cerr << t;}

template <class T> void _print(set <T> v);
template <class T> void _print(vector <T> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::: SOLVE :::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/


int main()
{
#ifndef himanshu070
    freopen("debug.txt", "w", stderr);
#endif
    fastio();
    
    string s, t;
    getline(cin, s);
    getline(cin, t);
    ll hash[52];
    memset(hash, 0, sizeof(hash));

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            hash[s[i]-'a']++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            hash[s[i] - 39]++;
    }



    // for(int i=0; i<52; i++)
    //     cout << hash[i] << " ";

    for(int i=0; i<t.size(); i++)
    {
        if (t[i] >= 'a' && t[i] <= 'z')
        {
            if(hash[t[i]-'a'] > 0)
                hash[t[i] - 'a']--;
            else
            {
                cout << "NO";
                return 0;
            }
        }
        else if (t[i] >= 'A' && t[i] <= 'Z')
        {
            if (hash[t[i] - 39] > 0)
                hash[t[i] - 39]--;
            else
            {
                cout  << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;
}
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
#define no cout << "NO" << nline;
#define set_bits __builtin_popcountll
#define vecin for(auto &a: vec) cin >> a;
#define vecout for(auto &a: vec) cout << a << " ";
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
    ll T;
    cin >> T;
    
    while(T--)
    {
        string s;
        cin >> s;
        ll minn = INT_MAX;

        ll size = s.size();

        // for(int i=0; i<s.size(); i++)
        // {
        //     if(s[i] == '1')
        // }

        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == '5')
            {
                for(int j=i-1; j>=0; j--)
                {
                    if(s[j] == '7' || s[j] == '2')
                        minn = min(minn, size-j-2);
                }
            }
            if(s[i]=='0')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (s[j] == '5' || s[j] == '0')
                        minn = min(minn, size - j - 2);
                }
            }
        }

        cout << minn << nline;

    }
    return 0;
}
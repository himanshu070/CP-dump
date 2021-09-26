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
    ll T;
    cin >> T;
    
    while(T--)
    {
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;

        ll ans=0;
        if(s2[0]=='1')
        {
            if(s1[0]=='0') ans++;
            else{
                if(s1[1]=='1') ans++;
                s1[1]=2;
            }
        }
        for(int i=1; i<n-1; i++)
        {
            if(s2[i]=='1')
            {
                if(s1[i]=='0') ans++;
                else{
                    if(s1[i-1]=='1')
                    {
                        ans++;
                        s1[i-1]=2;
                    }
                    else if (s1[i + 1] == '1')
                    {
                        ans++;
                        s1[i + 1] = 2;
                    }
                }
            }
        }
        
        if(s2[n-1]=='1')
        {
            if(s1[n-2]=='1' || s1[n-1]=='0') ans++;
        }

        cout << ans << nline;
    }
    return 0;
}
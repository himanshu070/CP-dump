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
        ll n;
        cin >> n;

        ll  arr[n];
        // for(auto &a: arr) cin >> a;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //     ll minn = LONG_MAX, minn2 = LONG_MAX;

        // for(int i=0; i<n ; i++) 
        // {
        //     minn = min(minn, arr[i]);
        //     if(minn = arr[i])
        //         continue;
        //     else minn2 = min(minn2, arr[i]);
        // }

        // cout << minn << " " << minn2 << nline;

        sort(arr,arr+n);

        ll gcdd=0;

        for(int i=1; i<n; i++)
        {
            gcdd = __gcd(gcdd, arr[i]-arr[i-1]);            
        }
        if (gcdd == 0)
        {
            cout << -1 << nline;
            goto x;
        }
        cout << gcdd << nline;
        x: gcdd++;

    }
    return 0;
}
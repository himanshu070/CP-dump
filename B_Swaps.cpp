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
        
        vector <pair<ll, ll>> vec1;
        vector <pair<ll, ll>> vec2;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            vec1.push_back({x,i});
        }
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            vec2.push_back({x, i});
        }
        if(vec1[0]<vec2[0])
        {
            cout << 0 <<  nline;
            continue;
        }
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());

        // for(int i=0; i<n; i++)
        // {
        //     cout << vec1[i].first << " " << vec1[i].second << nline;
        // }
        // cout << nline << nline;
        // for(int i=0; i<n; i++)
        // {
        //     cout << vec2[i].first << " " << vec2[i].second << nline;
        // }

        vll indexx(n);
        indexx[n-1] = vec2[n-1].second;
        for(int i=n-2; i>=0; i--)
            indexx[i] = min(indexx[i+1], vec2[i].second);
        
        ll ans=n;
        
        for(int i=0; i<n; i++)
            ans = min(ans, vec1[i].second + indexx[i]);

        cout << ans << nline;

    }

}
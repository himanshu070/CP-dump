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
        string S;
        cin >> S;
        ll size = S.size();

        // if(S[0]=='M' && S[1]== 'U')
        // {
        //     cout << "YES" << nline;
        //     break;
        // }
        // else if(S[size-1]=='U' && S[size-2]=='M')
        // {
        //     cout << "YES"<< nline;
        //     break;
        // }
        // else
        // {

        // }

        string P = S;
        string Q = S;
        for(int i=0; i<size; i++)
        {
            if(P[i]=='?')
                P[i]='M';
        }
        for(int i=0; i<size; i++)
        {
            if(Q[i]=='?')
                Q[i]='U';
        }

        bool a=false, b=false;

        for(int i=0; i<size-1; i++)
        {
            if(P[i]=='M' && P[i+1]=='U')
            {
                a=true;
                break;
            }
        }

        for(int i=0; i<size-1; i++)
        {
            if(Q[i]=='M' && Q[i+1]=='U')
            {
                b=true;
                break;
            }
        }

        if(a&&b)
            cout << "YES" << nline;
        else
            cout << "NO" << nline;

    }

    return 0;
}
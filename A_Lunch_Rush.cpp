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
#define precision cout.precision(numeric_limits<ld>::max_digits10);
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
        string s;
        cin >> s;
        ll two=0;
        for(int i=0; i<n;  i++)
        {
            if(s[i]=='2')
                two++;
        }
        if(two==2 || two == 1)
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            cout << "YES\n";
        }
        char arr [n][n];
        for(int i=0; i<n; i++)
        {
            ll flag = 0;
            for(int j=i; j<n; j++)
            {
                if(j==i)
                {
                    arr[i][j]='X';
                    continue;
                }
                if(s[i]=='1')
                {
                    arr[i][j] = '=';
                    arr[j][i] = '=';
                }
                else
                {
                    if(s[j]=='1')
                    {
                        arr[i][j] = '=';
                        arr[j][i] = '=';
                    }
                    else
                    {
                        if(flag==0)
                        {
                            arr[i][j] = '+';
                            arr[j][i] = '-';
                            flag = 1;
                        }
                        else
                        {
                            arr[i][j] = '-';
                            arr[j][i] = '+';
                        }
                    }
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)

            {

                cout << arr[i][j];
            }
            cout << nline;
        }
    }
    return 0;
}
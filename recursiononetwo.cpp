#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
// to print one two three if the input is 123

void output(int n, string str[])
{
    if(n==0)
        return;

    output(n/10, str);

    cout << str[n%10] << endl;

}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin >> n;
    string str[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    output(n, str);
}



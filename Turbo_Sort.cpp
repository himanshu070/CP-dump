#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x;

    int arr[t];
    for (int i = 0; i < t; i++)
        cin >> arr[i];

    for(int i=0; i<t-1; i++)
    {
        for(int j=i+1; j<t; j++)
        {
            if(arr[i]<arr[j])
            {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }

    for (int i = 0; i < t; i++)
        cout << arr[i] << endl;
}
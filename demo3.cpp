#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string temp;
    if (s[8] == 'A')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            temp.push_back('0');
            temp.push_back('0');
            for (int i = 2; i <= 7; i++)
            {
                temp.push_back(s[i]);
                
            }
           goto p;
        }
        else
        {
            for (int i = 0; i <= 7; i++)
            {
                temp.push_back(s[i]);
            }
            goto p;
        }
    }
    else
    {
        if (s[0] == '1' && s[1] == '2')
        {
            for (int i = 0; i <= 7; i++)
            {
                temp.push_back(s[i]);
            }
            goto p;
        }
        else
        {
            string temp2, temp3;
            temp2[0] = s[0];
            temp2[1] = s[1];
            int x = stoi(temp2);
            x += 12;
            temp3 = to_string(x);
            temp.push_back(temp3[0]);
            temp.push_back(temp3[1]);
            for (int i = 2; i <= 7; i++)
            {
                temp.push_back(s[i]);
            }
            goto p;
        }
    }
    p:
    
    return temp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";



    fout.close();

    return 0;
}

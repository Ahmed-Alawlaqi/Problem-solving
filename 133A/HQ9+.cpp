#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Ahmed                      \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define endl "\n";
int main()
{
    Ahmed;
    string s;
    cin >> s;
    int co = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 33 && s[i] <= 126)
        {
            if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' )
            {
                co = 1;
            }
        }
    }
    if (co)
    {
        cout << "YES";
    }
    else
        cout << "NO";
 
    return 0;
}
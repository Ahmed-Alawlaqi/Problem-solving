#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                      \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define endl "\n";
int main()
{
    fast;
    int t;
    cin >> t;
 
    while (t--)
    {
        string s;
        cin >> s;
        int n = int(s[0] + s[1] + s[2]);
        int m = int(s[3] + s[4] + s[5]);
        if (n == m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
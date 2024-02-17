#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define fast                     \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define endl "\n";
 
 
   int main() {
    fast;
 
    int n; cin>>n;
    int arr[n]; 
    int ans = 0;
    while (n--)
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
            if(arr[i] == 1){
                 count+=1;
            }
        }
        if(count >= 2){
            ans++;
        }
        
    }
    cout<<ans;
 
    
    
    return 0;
}
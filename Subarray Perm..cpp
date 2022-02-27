
#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define endl        '\n'



signed main(){
   
    
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {

        ll n, k;
        cin >> n >> k;

        if(n == 1){
            cout << 1 << endl; continue;
           
        }

        if(k == 1){
           
            cout << -1 << endl; continue;
           
        }

        for(int i = 1; i <= k-1; i++){
            cout << i << " ";
           
        }
        for(int i = n; i >= k; i--){
           
            cout << i << " ";
        }
       
        cout << endl;




       


        
    }

    return 0;
}
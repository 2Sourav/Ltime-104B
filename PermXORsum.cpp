#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>
using namespace std;
#define ll          long long
#define endl        '\n'

#define vi          vector<int>

ll ans=0;
void solve(ll n)
{
   
  if (n <= 1)
    return;

  if( (n && (!(n & (n - 1))))!=1)
  {
     
     
   ll t1= log2(n);
  
     t1++;
     ll y=1ll<<t1;
    
     y--;

     if(y==n)
     {
      solve(n-1);
     
     }
     else
     {
        
      ll n1= y^n;
      ans += (n-n1+1)*y;
     
      solve(n1-1);
     } 
    
  }
  else
  {
     
       ll t1= log2(n);
      
     t1++;
     ll y=1ll<<t1;
    
     y--;
     ans+=2*y;
    
     solve(n-2);

  }


}

int main()

{
     int tc = 0, tt = 1;
    cin >> tt;
   
    while (tc++ < tt)
    {


  ll n; cin >> n;

solve(n);


cout<<ans<<endl;

ans=0;
}


}
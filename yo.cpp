#include <bits/stdc++.h>
#define nline "\n"
#define ll long long int
#define ld long double
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(), c.end()
#define mp(x, y) make_pair(x, y)
#define mem(a, val) memset(a, val, sizeof(a))
#define eb emplace_back
#define f first
// #define s second
 
using namespace std;


int main()
{
  int n,k;
  cin >> n >> k;

  ll num=0;
  ll lo=1,hi=n,mid=0;
  ll ans=n;
  if (n==1)
  {
    cout << "? " << 1 << ' ' << 1 << nline;
    fflush(stdout);
    ll sum=0;
    cin >> sum;
    if (sum==0)
    {
      cout << "! " << 1 << nline;
      fflush(stdout);
    }
  }
  while(lo<hi)
  {
    // cout << lo << hi << nline;
    mid=(lo+hi)/2;
    ll sum;
    cout << "? " << lo << ' ' << mid << nline;
    fflush(stdout);
    
    cin >> sum;
    // cout << sum << nline;
    if ((mid-lo+1)-sum+num>=k)
    {
      ans=mid;
      hi=mid;
    }
    else
    {
      num+=(mid-lo+1)-sum;
      lo=mid+1;
      
    }

    if (lo==hi)
    {
      cout << "! " << ans << nline;
      fflush(stdout);
    }
  }

  

  return 0;
} 


// [1,0,1,1,0,1]

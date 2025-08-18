// https://leetcode.com/problems/count-good-numbers/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
class Solution {
public:
    ll power(ll a,ll b){
      ll res=1;
      while(b>0){
        if(b&1)
            res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
      }
      return res%mod;
    }
    int countGoodNumbers(long long n) {
      ll even=(n+1)/2;
      ll odd=n/2;
      ll ans=(power(5,even)%mod*power(4,odd)%mod)%mod;
      return ans;
    }
};
// https://leetcode.com/problems/super-pow/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long power(long long a,long long b){
        long long res=1;
        while(b>0){
            if(b&1)
                res=(res*a)%1337;
            a=((a%1337)*(a%1337))%1337;
            b=b>>1;
        }
        return res%1337;
    }
    int superPow(int a, vector<int>& b) {
        int res=1,n=b.size();
        for(int i=0;i<n;i++){
            res=(power(a,b[i])%1337 * power(res,10)%1337)%1337;
            // a=2 b=254
            // res=2^2*1^10=2^2
            // res=2^5*(2^2)^10=2^5+2^20=2^25
            // res=2^4*(2^25)*10=2^254        
        }
        return res%1337;
    }
};
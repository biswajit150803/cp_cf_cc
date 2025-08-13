// https://leetcode.com/problems/maximum-good-people-based-on-statements/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGood(vector<vector<int>>& statements) {
        int n=statements.size(),ans=0;
        for(int mask=0;mask<(1<<n);mask++){
            bool flag=true;
            for(int i=0;i<n;i++){
                // if he is a bad person in that combination
                if((mask & (1<<i))==0)
                    continue;
                // if he is a good person, consider all his statements
                for(int j=0;j<n;j++){
                    // if he is a good person in the assumed combination
                    int good=((mask & (1<<j))?1:0);
                    // if there are contradicting statements
                    if((statements[i][j]==0 && good==1) || (statements[i][j]==1 && good==0)){
                        flag=false;
                        break;
                    }
                }
                if(flag==false) break;
            }
            if(flag){
                ans=max(ans,__builtin_popcount(mask));
            }
        }
        return ans;
    }
};
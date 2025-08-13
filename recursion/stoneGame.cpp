// https://leetcode.com/problems/stone-game/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int f(int i,int j,vector<int>&piles,vector<vector<int>>&dp){
        if(i>j)
            return 0;
        if(dp[i][j]!=-1)    return dp[i][j];
        int start=piles[i]+min(f(i+2,j,piles,dp),f(i+1,j-1,piles,dp));
        int end=piles[j]+min(f(i,j-2,piles,dp),f(i+1,j-1,piles,dp));
        return dp[i][j]=max(start,end);
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int alice=f(0,n-1,piles,dp);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=piles[i];
        }
        int bob=sum-alice;
        return (alice>=bob);
    }
};  
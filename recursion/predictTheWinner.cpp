// https://leetcode.com/problems/predict-the-winner/description/

// https://www.youtube.com/watch?v=ak3DkeUBo-c

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int f(int i,int j,vector<int>&nums){
        if(i>j)
            return 0;
        if(i==j)    return nums[i];
        int playStart=nums[i]+min(f(i+2,j,nums),f(i+1,j-1,nums));
        int playEnd=nums[j]+min(f(i+1,j-1,nums),f(i,j-2,nums));
        return max(playStart,playEnd);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int p1=f(0,n-1,nums);
        int sum=0;
        for(int i=0;i<n;i++)    sum+=nums[i];
        int p2=sum-p1;
        if(p1>=p2)  return true;
        return false;
    }
};
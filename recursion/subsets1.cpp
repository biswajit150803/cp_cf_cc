// https://leetcode.com/problems/subsets/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void f(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        f(ind+1,nums,ds,ans);
        ds.pop_back();
        f(ind+1,nums,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums){
        vector<int>ds;
        vector<vector<int>>ans;
        f(0,nums,ds,ans);
        return ans;
    }
    // OR 
    vector<vector<int>>subset(vector<int>&nums){
        vector<vector<int>>ans;
        int n=nums.size();
        for(int mask=0;mask<(1<<n);mask++){
            vector<int>ds;
            for(int i=0;i<n;i++){
                if(mask&(1<<i)){
                    ds.push_back(nums[i]);
                }
            }
            ans.push_back(ds);
        }
        return ans;
    }
};
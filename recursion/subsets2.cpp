// https://leetcode.com/problems/subsets-ii/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void f(int ind,vector<int>&nums,vector<int>&ds,set<vector<int>>&ans){
        if(ind==nums.size()){
            ans.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        f(ind+1,nums,ds,ans);
        ds.pop_back();
        f(ind+1,nums,ds,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        vector<int>ds;
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        f(0,nums,ds,ans);
        vector<vector<int>>res(ans.begin(),ans.end());
        return res;
    }
};
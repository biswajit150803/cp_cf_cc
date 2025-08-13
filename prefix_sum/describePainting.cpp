// https://leetcode.com/problems/describe-the-painting/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        int n=segments.size();
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(segments[i][0]);
            st.insert(segments[i][1]);
        }
        map<int,int>mp;
        int idx=0;
        for(auto it:st){
            mp[it]=idx;
            idx++;
        }
        vector<long long>diff(idx,0);
        for(int i=0;i<n;i++){
            int ind1=mp[segments[i][0]],ind2=mp[segments[i][1]];
            diff[ind1]+=segments[i][2];
            diff[ind2]-=segments[i][2];
        }
        for(int i=1;i<idx;i++){
            diff[i]+=diff[i-1];
        }
        vector<int>v(st.begin(),st.end());
        vector<vector<long long>>ans;
        for(int i=1;i<idx;i++){
            long long start=v[i-1];
            long long end=v[i];
            long long mix=diff[i-1];
            if(mix==0) continue;
            ans.push_back({start,end,mix});
        }
        return ans;
    }
};
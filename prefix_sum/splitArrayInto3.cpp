// https://leetcode.com/problems/ways-to-split-array-into-three-subarrays/description/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
public:
    const int mod=1e9+7;
    int waysToSplit(vector<int>& nums) {
        int n=nums.size();
        vector<ll> pref(n);
        // calculate prefix sum
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
        }
        ll ans=0;
        for(int i=0;i<n-2;i++){
            ll leftSum=pref[i];
            int minj=lower_bound(pref.begin(),pref.end(),2*leftSum)-pref.begin();
            minj=max(minj,i+1);
            if(minj>=n) break;
            int low=minj , high=n-2, last=-1;
            while(low<=high){
                int mid=(low+high)/2;
                int right=pref[n-1]-pref[mid],middle=pref[mid]-pref[i];
                if(right>=middle){
                    last=mid;
                    low=mid+1;
                }
                else high=mid-1;
            }
            
            if(last!=-1) ans=(ans + (last-minj+1))%mod;
        }
        return (int)ans;

    }
};
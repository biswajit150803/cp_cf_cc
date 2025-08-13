// https://leetcode.com/problems/palindrome-partitioning/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalin(string &str,int s,int e){
        while(s<=e){
            if(str[s]!=str[e])
                return false;
            s++;
            e--;
        }
        return true;
    }
    void f(int ind,string &s,vector<string>&path,vector<vector<string>>&res){
        if(ind==s.size()){
            res.push_back(path);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPalin(s,ind,i)){
                path.push_back(s.substr(ind,i-ind+1));
                f(i+1,s,path,res);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>path;
        vector<vector<string>>ans;
        f(0,s,path,ans);
        return ans;
    }
};
// https://atcoder.jp/contests/abc096/tasks/abc096_d

// https://www.youtube.com/watch?v=QulHTAPTgfQ


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    for(int i=2;i<=55555;i++){
        int c=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==0 && i%5==1){
            if(cnt==n){
                break;
            }
            cout<<i<<" ";
            cnt++;
        }
    }
    cout<<endl;
}
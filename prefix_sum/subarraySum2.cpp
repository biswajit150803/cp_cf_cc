#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,x;
    cin>>n>>x;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    map<long long int,long long int> m;
    // m[0]=1;
    long long int preSum=0,cnt=0;
    for(int i=0;i<n;i++){
        preSum+=a[i];
        if(m.find(preSum-x)!=m.end())
            cnt+=m[preSum-x];
        if(preSum==x)
            cnt++;
        m[preSum]++;
    }
    cout<<cnt<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long ans=0;
    for(int i=0;i<32;i++){
        if(n&(1<<i))
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}

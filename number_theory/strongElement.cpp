// https://www.codechef.com/practice/course/number-theory/INTNT01/problems/STRNG?tab=statement
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int prefix[n],suffix[n];
    prefix[0]=arr[0];
    suffix[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        prefix[i]=__gcd(prefix[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        suffix[i]=__gcd(suffix[i+1],arr[i]);
    }
    int c=0;
    for(int i=1;i<n-1;i++){
        if(__gcd(prefix[i-1],suffix[i+1])!=1){
            c++;
        }
    }
    if(suffix[1]!=1)    c++;
    if(prefix[n-2]!=1)     c++;
    cout<<c<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}

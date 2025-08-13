// https://codeforces.com/contest/271/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> primes;
vector<bool> isPrime(1000001, true);
void sieve(int N) {
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=N;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=N;j+=i){
                if(isPrime[j]) {
                    isPrime[j] = false;
                }
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(isPrime[i]) {
            primes.push_back(i);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    sieve(1000000);
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            int nextPrime=*lower_bound(primes.begin(),primes.end(), matrix[i][j]);
            cnt += (nextPrime - matrix[i][j]);
        }
        ans = min(ans, cnt);
    }
    for(int j=0;j<m;j++){
        int cnt=0;
        for(int i=0;i<n;i++){
            int nextPrime=*lower_bound(primes.begin(),primes.end(), matrix[i][j]);
            cnt += (nextPrime - matrix[i][j]);
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int ans(int n, vector<int>& dp){
    if(n == 0 || n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = ans(n-1,dp) + ans(n-2,dp);
}

int climbStairs(int n) {
    vector<int> dp(n+1, -1);
    dp[0]=1;
    dp[1]=1;
    return ans(n,dp);
}


int main(void){
    cout<<climbStairs(45);
}
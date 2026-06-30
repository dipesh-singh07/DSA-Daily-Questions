#include<bits/stdc++.h>
using namespace std;

int main(){
	long long coins, target;
	cin>>coins>>target;
	vector<long long>arr(coins);
	for(int i=0;i<coins;i++)cin>>arr[i];

	vector<long long>dp(target+1, target + 1);
	dp[0] = 0;

	for(long long i=1;i<=target;i++){
		for(auto x : arr){
			if(i-x>=0){
				dp[i] = min(dp[i],dp[i-x] + 1);
			}
		}
	}
	if(dp[target] > target)cout<<-1;
	else cout<<dp[target]<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;

	vector<int>h(n);
	for(int i=0;i<n;i++)cin>>h[i];

	vector<int>dp(n);
	
	dp[0] = 0;

	for(int i = 1;i<n;i++){
		int minSteps = INT_MAX;
		for(int j = 1;j<=k;j++){
			if(i - j>=0)
				minSteps = min(minSteps,dp[i-j] + abs(h[i]-h[i - j]));
		}
		dp[i] = minSteps;
	}

	cout<<dp[n-1]<<endl;
}
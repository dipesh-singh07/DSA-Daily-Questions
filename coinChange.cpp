#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,target;
	cin>>n>>target;
	vector<int>v(n);
	for(int i=0;i<n;i++)cin>>v[i];

	const int INF = 1e9;
	vector<int>dp(target+1,INF);

	dp[0]=0;
	for(int i=1;i<=target;i++){
		for(auto x:v){
			if(i-x>=0){
				dp[i] = min(dp[i],dp[i-x]+1);
			}
		}
	}
	if(dp[target]==INF)cout<<"no";
	else cout<<dp[target];	
}
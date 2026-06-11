#include<bits/stdc++.h>
using namespace std;

vector<int>stockSpan(vector<int>& arr){
    int n = arr.size();
    vector<int>ans(n);
    stack<int>st;

    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.empty())ans[i] = i + 1;
        else ans[i] = i - st.top();

        st.push(i);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    vector<int>ans = stockSpan(v);
    for(auto x : ans)cout<<x<<" ";
}
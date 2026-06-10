//Stack works on LIFO principle → Last In, First Out
//time complexity - O(1);
//Main functions:-
//push(x),pop(),top(),empty();
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        st.push(a);
    }

    cout<<"Last Element : "<<st.top()<<endl;
    st.pop();
    cout<<"Size:"<<st.size()<<endl;

    //print
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
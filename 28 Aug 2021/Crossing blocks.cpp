#include <iostream>
#include<vector>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int f=0;
	    int A[n];
	    for(int i=0;i<n;i++){  //elements input
	    cin>>A[i];
	    
	    if(i>0 && A[i]>A[0]){ //possibilities of all the first jumps will be marked by f=1
	        f=1;
	    }
	   }
	   if(f==1)
	   cout<<-1<<endl;
	   else if(n==1)
	   cout<<0<<endl;
	   
	   else{
	       vector<int>L(n,-1);
	       stack<int>st;
	       
	       st.push(n-1);
	       
	       for(int i=n-2;i>=0;i--)
	       {
	           while(!st.empty() && A[st.top()]<A[i]){
	               L[st.top()]=i;
	               st.pop();
	           }
	           st.push(i);
	       }
	       while(!st.empty())
	       {
	           L[st.top()]=-1;
	           st.pop();
	       }
	       int ind=n-1;
	       int ans=0;
	       if(L[n-1]==-1)
	       {
	           cout<<1<<endl;
	       }
	       else{
	           while(ind!=0){
	               ans++;
	               if(ind==-1)
	               {
	                   ans--;
	                   break;
	               }
	               ind=L[ind];
	           }
	           cout<<ans<<endl;
	       }
	   }
	    
	    
	}
	return 0;
}

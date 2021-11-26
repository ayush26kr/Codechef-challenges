#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    int temp=0,res=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='W'){
	            int j=i+1;
	            while(j<n && s[j]==s[i])
	            j++;
	            temp+=j;
	        }
	        else if(i>0 && s[i]!=s[i-1]){
	            res++;
	            int k=i+1;
	            while(k<n && s[k]==s[i])
	            k++;
	            temp+=k;
	        }
	        else{
	            int k=i+1;
	            while(k<n && s[k]==s[i])
	            k++;
	            temp+=k;
	        }
	    }
	    if(temp)
	    cout<<res<<endl;
	    else
	    cout<<0<<endl;
	}
}

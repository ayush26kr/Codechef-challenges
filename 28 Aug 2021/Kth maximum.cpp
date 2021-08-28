#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    long long int maxi=-1;
	    long long int arr[n];
	    
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        maxi=max(maxi,arr[i]);
	    }
	    
	    long long int res=0;
	    
	    for(int i=k-1;i<n;i++)
	    {
	        if(arr[i]==maxi)
	        {
	            res+=(n-i);
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}

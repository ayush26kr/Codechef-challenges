#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	  
	    int e=0,o=0;  //number of evens and odds till n
	    int ea=0,oa=0; //number of evens and odds in array
	    
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    e=n/2;
	    o=n/2+n%2;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2==0)
	        ea++;
	        else
	        oa++;
	    }
	    
	    int x=0;
	    
	    if(ea-o>0)
	    x=ea-o;  //here x will carry number of zeroes
	    if(oa-e>0)
	    x=oa-e; 
	    
	    //so in array of size n there will be x 0's and remaining ie.(n-x) 1's
	    
	    cout<<n-x<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int x,y;
	    cin>>x>>y;
	    if(x==0){
	        if(y%2==0)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else if(x%2==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	   }
	return 0;
}

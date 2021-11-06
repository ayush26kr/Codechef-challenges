#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b,k;
	    cin>>x>>y>>a>>b>>k;
	    int pet=x+a*k;
	    int die=y+b*k;
	    if(pet>die)
	    cout<<"DIESEL"<<endl;
	    else if(die>pet)
	    cout<<"PETROL"<<endl;
	    else
	    cout<<"SAME PRICE"<<endl;
	}
	return 0;
}

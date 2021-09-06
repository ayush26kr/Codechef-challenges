//I have to traverse through the string if 0 inter district A time if 1 inter state  B time
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N,A,B;
	    string S;
	    cin>>N>>A>>B;
	    cin>>S;
	    
	    int count1=0;
	    int count0=0;
	    for(int i=0;i<N;i++)
	    {
	        if(S[i]=='0')
	        count0++;
	        else
	        count1++;
	    }
	    cout<<count0*A+count1*B<<endl;
	}
	
	return 0;
}

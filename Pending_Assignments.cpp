Problem--
Chef has finally decided to complete all of his pending assignments.

There are X assignments where each assignment takes 
Y minutes to complete.
Find whether Chef would be able to complete all the assignments in 
Z days.

My Code---
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    double k= x*y;
	    double z1= z*(1.0);
	    k= k/1440;
	    if(k<=z1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	}
	return 0;
}

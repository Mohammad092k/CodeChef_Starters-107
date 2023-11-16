Problem---
Chef and Chefina are playing the famous game of Rock, Paper, Scissors.
The game consists of 
N rounds. In each round, both players choose one of the three moves: Rock, Paper, or Scissors, denoted by R, P, and S respectively.

If both players play the same move, the current round ends in a draw and neither of them gets a point.
If one of the players plays Rock and the other plays Scissors, the player who played Rock wins the round and gets a point.
If one of the players plays Scissors and the other plays Paper, the player who played Scissors wins the round and gets a point.
If one of the players plays Paper and the other plays Rock, the player who played Paper wins the round and gets a point.
The winner of the game is the player who gets the maximum number of points after playing all the rounds. If both players have the same number of points, then the game ends in a draw.

You are given two strings 
�
A and 
�
B, each of length 
�
N, consisting of uppercase English letters R, P, and S, where 
Ai denotes the move made by Chef in the 
ith round and 
Bi denotes the move made by Chefina in the 
ith round.

Find the minimum number of rounds Chef should have played differently to have won the game.


My Code---
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    int c1=0,c2=0,d=0; // to count no. of rounds win by chef , chefina and no. of draw rounds
	    for(int i=0;i<n;i++){
	        char ch1= a[i];
	        char ch2 = b[i];
	        
	        if(ch1==ch2) d++;
	        else if(ch1=='R' and ch2=='P') c2++;
	        else if(ch1=='P' and ch2=='R') c1++;
	        else if(ch1=='R' and ch2=='S') c1++;
	        else if(ch1=='S' and ch2=='R') c2++;
	        else if(ch1=='P' and ch2=='S') c2++;
	        else if(ch1=='S' and ch2=='P') c1++;
	    }
	    if(c1>c2)  cout<<0<<endl;
	    else if(c1==c2) cout<<1<<endl;
	    else {
	        int k=0;
	        while(c2){
	            c1++;
	            c2--;
	            k++;
	            if(c1==c2){
	                cout<<k+1<<endl;
	                break;
	            }
	            if(c1>=c2){
	               cout<<k<<endl;
	               break;
	            }
	        }
	       
	        
	    }
	}
	return 0;
}

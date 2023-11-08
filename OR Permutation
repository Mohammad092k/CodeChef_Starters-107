Problem--
Given an integer N, find a permutation of size N such that:
Ai != Ai−1 | Ai-2;
for all 3≤i≤N
It is guaranteed that such permutation always exists. If multiple such permutations exist, you may print any.
Note that a permutation of size 

My Code---

#include <bits/stdc++.h>
using namespace std;
vector<int> findPermutation(int N) {
   
    
    std::vector<int> P(N);
    for (int i = 0; i < N; i++) {
        P[i] = i + 1;
    }

    for (int i = 2; i < N; i += 2) {
        // Swap P[i] and P[i-2]
        swap(P[i], P[i - 2]);
    }
     return P;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	   vector<int> perm = findPermutation(n);
	   for (int i = 0; i < n; i++) {
            cout << perm[i] << " ";
        }
        cout <<endl;
	}
	return 0;
}

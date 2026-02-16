//sum of first N no using recursion
#include<iostream>
using namespace std;

class Solution{	
	public:
		int NnumbersSum(int N){
			//main logic
			if (N == 0) return 0;
			return N + NnumbersSum(N-1);
		}
};

int main(){
    int N;
    cin>>N;
    Solution sol; // create object
    cout<<sol.NnumbersSum(N);
}
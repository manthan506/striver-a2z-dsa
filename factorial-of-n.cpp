#include<iostream>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        //main logic
        if(n<=0) return 1;
        return n * factorial(n - 1);
    }
};

int main(){
    int n;
    cin>>n;
    
    //create object
    Solution sol;
    cout<<sol.factorial(n);
}
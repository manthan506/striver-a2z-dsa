#include<iostream>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int n, int i){
        if(i >= n/2) return;
        swap(arr[i], arr[n-i-1]);
        reverse(arr, n, i+1);
    }
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    //input
    for(int i=0; i<n; i++){cin>>arr[i];}

    Solution sol;
    int i=0;
    sol.reverse(arr,n,i);

    //output
    for(int i=0; i<n; i++){cout<<arr[i]<<" ";}
}
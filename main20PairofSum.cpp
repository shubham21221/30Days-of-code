#include<iostream>

#include<vector>

using namespace std;

int main(){
    //input
    vector<int> arr={1,3,5,7,2,4,6};
    // int n = 7;
    // int arr[n] = {1,3,5,7,2,4,6};
    int sum=9;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                // break;
              cout<<arr[i]<<arr[j]<<endl;
            }
        }
    }
}
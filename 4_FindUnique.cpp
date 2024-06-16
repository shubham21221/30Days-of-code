#include<iostream>
using namespace std;

// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

int FindUnique(int arr[], int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[7] = {2,3,1,6,3,6,2};

    int ans = FindUnique(arr,7);
    cout<<ans;
    // printArray(arr,7);
}
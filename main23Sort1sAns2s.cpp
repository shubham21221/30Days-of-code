#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,0,0,1,1,0};

    int s =0;
    int e= arr.size()-1;
    int i=0;
    while(s<=e){
        if(arr[i]==0){
            swap(arr[s],arr[i]);
            i++;
            s--;
        }
        if(arr[i]==1){
            swap(arr[e],arr[i]);
            e--;
        }
    }
    for(auto value: arr){
        cout<<arr[i];
    }
}
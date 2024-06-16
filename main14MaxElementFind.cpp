#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int arr[5]={3,1,2,5,4};
    // int maxi = INT_MIN;
    int maxi = 000001;
    for(int i=0;i<5;i++){
        if(arr[i]>maxi){
            maxi= arr[i];
        }
    }
    cout<<"maximum number"<<maxi;
}
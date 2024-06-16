#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int start=0;
    int end=4;

    while(start<=end){
        if(start==end){
            cout<<arr[start]<<" ";
            break;
        }
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        start++;
        end++;
    }
}
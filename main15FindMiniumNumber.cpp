#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[5] = {4,6,8,2,1};
    int mini = INT_MAX;
    for(int i=0;i<5;i++){
    if(mini>arr[i]){
        mini = arr[i];
        }
    }
        cout<<"minimum number of array"<<mini;
}
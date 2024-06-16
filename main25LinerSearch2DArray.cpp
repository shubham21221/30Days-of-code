#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int traget, int row, int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==traget){
                return 1;
            }
        }
        return 0;
}
}

int main(){
    int arr[3][4];

    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
        cout<<endl;
    }
    cout<<"Enter the element to search"<<endl;
    int traget;
    cin>>traget;

    if(isPresent(arr,traget,3,4)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}
#include<iosteam>
using namespace std;

void marge(int arr1, int n, int arr2 , int m, int arr[3]){

    int i=0;
    int j=0
    int k=0;

    while(i<n && i<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
        }
        else{
            arr3[k] = arr2[i];
            k++;
        }
    }
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<n){
        arr2[k] = arr[j];
        k++;
        j++;
    }
}

int main(){
    int arr1[5] = {1,2,3,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};

    marge(arr1, 5, arr2, 3,arr3);

    print(arr3, 8);

    return 0;
}
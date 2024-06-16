#include<iostream>
#include<vector>
using namespace std;

vector<int> sorting(vector<int> arr){
    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

void print(vector<int> arr){
    // for(auto value: arr){
    //     cout<<value<<" ";
    // }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr{1,0,0,1,1,0};
// @2nd is solve the proble in the funcion
    vector<int> ans = sorting(arr);
    print(ans);

// 1st methrod int simple form
    // vector<int> ans;
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]==0){
    //         ans.push_back(arr[i]);
    //     }
    // }
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]!=0){
    //         ans.push_back(arr[i]);
    //     }
    // }
    // for(auto value : ans){
    //     cout<<value<<" ";
    // }
}



// 3rd mothrd

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> sorting(vector<int> arr){
//     int s=0;
//     int e=arr.size();

//     while(s<=e){
//         if(arr[s]==0) {
//             s++;
//         }
//         if(arr[e]==1){
//             e--;
//         if(arr[s]==1 && arr[e]==0){
//             swap(arr[s],arr[e]);
//             s++;
//             e--;
//         }

//     }
//     return arr;
// }
// }

// void print(vector<int> arr){
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     vector<int> arr{1,0,0,1,1,0};

//     vector<int> ans = sorting(arr);
//     // vector<int> ans = sorting(arr);
    
//     print(ans);


// }
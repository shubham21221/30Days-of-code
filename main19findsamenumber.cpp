#include<iostream>
#include<vector>
using namespace std;

int main(){
    // deffind the 1st vector
    vector<int> arr1 = {1,2,3,4,5};
    // deffind 2nd vecotr
    vector<int> arr2 = {2,6,7,1};
    //we are deffind the ans vector 
    vector<int> ans;

    // trvers the verctor
    for(int i=0;i<arr1.size();i++){
        //treverse the secound arr
        for(int j=0;j<arr2.size();j++){
            // give a condition int the problem
            // compair the arr1 and arr2 
            if(arr1[i]==arr2[j]){
                //intcude int the element int the 3rd vector that name is the vector of ans
                ans.push_back(arr1[i]);
            }
        }
    }
    for(auto value : ans){
        cout<<value<<" ";
    }

}

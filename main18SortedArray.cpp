
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr1[]={1,3,5,7,9};
    int sizea=5;
    int arr2[]={2,4,6,8};
    int sizeb=4;
    vector<int> ans;

    for(int i=0;i<sizea;i++){
        ans.push_back(arr1[i]);
    }
    for(int j=0;j<sizeb;j++){
        ans.push_back(arr2[j]);
    }
    for(int i=0;i<ans.size();i++){
        sort(ans.begin(),ans.end());
        cout<<ans[i];
    }
    
}
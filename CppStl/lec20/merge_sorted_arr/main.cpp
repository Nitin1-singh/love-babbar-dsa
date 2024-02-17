#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int> arr, int n) {
    for (int i:arr)
    {
        cout<<i<<endl;
    }
    return;
}
vector<int> merge_sorted_arr(vector<int> &arr1,vector<int> &arr2, int n1, int n2) {
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
        }
        if(arr2[j]<=arr1[i]) {
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while (j<n2)
    {
        ans.push_back(arr2[j]);
        j++;
    }
    while (i<n2)
    {
        ans.push_back(arr1[i]);
        i++;
    }
    
    return ans;
}
int main(){
    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {2,4,6};

    vector<int> ans = merge_sorted_arr(arr1,arr2,arr1.size(),arr2.size());
    printArr(ans,ans.size());

    return 0;
}
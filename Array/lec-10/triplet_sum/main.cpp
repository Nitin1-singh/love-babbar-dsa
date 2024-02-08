#include<iostream>
#include <vector>
using namespace std;
// void print Array
void print_array(vector<vector<int>> arr, int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
            
        }
        
    }
    cout<<endl;
    return;
}
// pair sum array
vector<vector<int>> pair_sum(vector<int> arr, int n, int s) {
    vector<vector<int>> ans;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if(arr[i]+arr[j] == s) {
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            ans.push_back(temp);
            temp.pop_back();
            temp.pop_back();

           }
        }
        
    }
    return ans;
    
}
int main() {
    vector<int>arr = {3,2,1,4};
    int num = 5;
    vector<vector<int>> ans = pair_sum(arr,arr.size(),num);
    print_array(ans,ans.size());
    return 0;
}
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
void RevArr(vector<int> &arr, int s ,int n) {
    s  = s+1;
    int e = n-1;
    while (s<e)
    {
        swap(arr[s],arr[e]);
        s++; e--;
    }
    return ;
    
}
int main(){
    vector<int> arr = {1,2,3,4};
    cout<<"Before Reverse"<<endl;
    printArr(arr,arr.size());
    RevArr(arr,1,arr.size());
    cout<<"After Reverse"<<endl;
    printArr(arr,arr.size());
    return 0;
}
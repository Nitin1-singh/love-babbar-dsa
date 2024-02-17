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
void moveZeros(vector<int> &arr, int n)  {
    for(int i =0 ; i<n; i++) {
        if(arr[i]!=0) {
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    return;
}
int main(){
    vector<int> arr = {0,1,3,0,7,9};
    moveZeros(arr,arr.size());
    printArr(arr,arr.size());

    return 0;
}
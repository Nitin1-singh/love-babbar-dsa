#include<iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr, int n) {
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void BubbleSort(vector<int> &arr,int n) {
    for(int i = 1; i<n; i++) {
        for(int j = 0; j<n-i; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {6,1,7,9,10,14};
    cout<<"Before Sort"<<endl;
    printArr(arr,arr.size());

    BubbleSort(arr,arr.size());

    cout<<"After Sort"<<endl;
    printArr(arr,arr.size());
    return 0;
}
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
int j = 0;
void InsertionSort(vector<int> &arr,int n) {
    for(int i = 1; i<n; i++) {
        int temp  = arr[i];
        for(j = i-1; j>=0; j--) {
            if(arr[j]>temp) {
                arr[j+1]  = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main() {
    vector<int> arr = {6,1,7,9,10,14};
    cout<<"Before Sort"<<endl;
    printArr(arr,arr.size());

    InsertionSort(arr,arr.size());

    cout<<"After Sort"<<endl;
    printArr(arr,arr.size());
    return 0;
}
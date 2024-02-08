#include<iostream>
#include <vector>
using namespace std;
// void print Array
void print_array(vector<int> arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
// Binary Search 
int peak_element(vector<int> arr, int n) {
    int srt = 0, end = n-1;
    int mid = (srt+end)/2; 
    while (srt<end)
    {
        if(arr[mid] < arr[mid+1]) {
            srt = mid + 1;
        }
        else {
            end = mid;
        }
        mid = (srt+end)/2;
        // for more optimization
        // s + (e-s)/2
    }
    return srt;
}
int main() {
    vector<int>arr = {10,12,14,19,27,1,-1};
    cout<<"index = "<<peak_element(arr,arr.size());
    return 0;
}
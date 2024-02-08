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
void Binary_Search(vector<int> arr, int n, int key) {
    int srt = 0, end = n-1;
    int mid = (srt+end)/2; 
    while (srt<=end)
    {
        if(arr[mid] == key) {
            cout<<key<<" found at "<<mid<<endl;
            return;
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        else if(arr[mid] < key) {
            srt = mid + 1;
        }
        mid = (srt+end)/2;
        // for more optimization
        // s + (e-s)/2
    }
    cout<<key<<" Key Not Found"<<endl;
    
}
int main() {
    vector<int>arr = {10,12,14,19,27};
    Binary_Search(arr,arr.size(),27);
    return 0;
}
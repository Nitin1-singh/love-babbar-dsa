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
// sort 01 
void sort_01(vector<int> arr, int n) {
    int i = 0;
    int j = n-1;
    while (i<j)
    {
        if (arr[i] == 0) i++;
        if (arr[j] == 1) j--;
        if (arr[i] == 0 && arr[j] == 1 && i<j) {
            swap(arr[i],arr[j]); 
            i++; j--;
        }

    }
    return;
    
}
int main() {
    vector<int>arr = {1,0,1,1,0,1,1,0,0};
    sort_01(arr,arr.size());
    print_array(arr,arr.size());
    return 0;
}
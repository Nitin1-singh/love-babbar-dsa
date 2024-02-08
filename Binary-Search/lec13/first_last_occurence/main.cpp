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
// first and last  occurence
int first_Occurence(vector<int> arr, int n, int key) {
    int srt = 0, end = n-1;
    int mid = (srt+end)/2; 
    int ans = -1;
    while (srt<=end)
    {
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        else if(arr[mid] < key) {
            srt = mid + 1;
        }
        mid = (srt+end)/2;
    }
    return mid;    
}

int last_Occurence(vector<int> arr, int n, int key) {
    int srt = 0, end = n-1;
    int mid = (srt+end)/2; 
    int ans = -1;
    while (srt<=end)
    {
        if(arr[mid] == key) {
            ans = mid;
            srt = mid + 1;
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        else if(arr[mid] < key) {
            srt = mid + 1;
        }
        mid = (srt+end)/2;
    }
    return ans;    
}


int main() {
    vector<int>arr = {1,2,3,3,3,3,3,3,3,3,3,4};
    int first = first_Occurence(arr,arr.size(),3);
    int last = last_Occurence(arr,arr.size(),3);
    cout<<first<<" "<<last<<endl;
    return 0;
}
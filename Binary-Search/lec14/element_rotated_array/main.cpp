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
// find pivot Search 
int find_pivot(vector<int> arr, int n) {
    int srt = 0, end = n-1;
    int mid = (end + ((srt-end)/2)); 
    while (srt<end)
    {
        if(arr[mid] >= arr[0]) {
            srt = mid + 1;
        }
        else {
            end = mid;
        }
        mid = (end + ((srt-end)/2));
    }
    return srt;
}
// find element in sorted rotated array 
int Binary_Search(vector<int> arr, int srt, int end, int target) {
    int mid = (end + ((srt-end)/2)); 
    while (srt<end)
    {
        if(arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            end = mid - 1;
        }
        else {
            srt = mid+1;
        }
        mid = (end + ((srt-end)/2));
    }
    return srt;
}
void solve_arr(vector<int> arr, int key) {
    int pivot = find_pivot(arr,arr.size());
    int n = arr.size();
    if (key>=arr[pivot] && key<=arr[n-1]) {
        int ans = Binary_Search(arr,pivot,n-1,key);
        cout<<"index = "<<ans<<endl;
        return;
    }
    else {
        int ans = Binary_Search(arr,0,pivot,key);
        cout<<"index = "<<ans<<endl;
        return;
    }
}

int main() {
    vector<int>arr = {7,8,1,3,5};
    solve_arr(arr,1);
    return 0;
}
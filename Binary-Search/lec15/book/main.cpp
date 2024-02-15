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
int sumArr(vector<int> arr, int n) {
    int sum = 0;
    for(auto item:arr) {
        sum+=item;
    }
    return sum;
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
int isPossible(vector<int> arr, int n, int m, int target) {
    int studentCnt = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] + pageSum <= target) {
            pageSum+=arr[i];
        }
        else {
            studentCnt++;
            if(studentCnt > m || arr[i] > target) return 0;
            pageSum = arr[i];
        }
    }
    return true;
    
}
int Book_Allocation(vector<int> arr, int n, int m) {
    int s = 0;
    int e = sumArr(arr, arr.size());
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            ans = mid;
            e =  mid-1 ;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    vector<int>arr = {12,34,67,90};
    cout<<"Ans = "<<Book_Allocation(arr,arr.size(),2)<<endl;
    return 0;
}
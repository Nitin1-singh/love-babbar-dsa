#include<iostream>
#include <vector>
#include <numeric>

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

// find element in sorted rotated array 
int Binary_Search(vector<int> arr, int srt, int end, int target) {
    int mid = (end + ((srt-end)/2)); 
    while (srt<end)
    {
        if(mid*mid == target) {
            return mid;
        }
        else if (mid*mid > target) {
            end = mid - 1;
        }
        else {
            srt = mid+1;
        }
        mid = (end + ((srt-end)/2));
    }
    return mid;
}
// square root using binary search
void sqaure_root(int num) {
    vector<int> arr(num);
    iota(arr.begin(),arr.end(),1);
    cout<<"ans = :"<<Binary_Search(arr,0,arr.size()-1,num)<<endl;
}
int main() {
    sqaure_root(9);
    return 0;
}
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
vector<int> MinMax(vector<int> arr, int n) {
    int min = -1;
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<=min) min = arr[i];
        if(arr[i]>=max) max = arr[i];
    }
    vector<int> ans;
    ans.push_back(min);
    ans.push_back(max);
    return ans;
}

// find element in sorted rotated array 
int isPossible(vector<int> arr, int n, int m, int target) {
    int cowCnt = 1;
    int lasPos = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]-lasPos>=target) {
            cowCnt++;
            if(cowCnt == m) return 1;
            lasPos = arr[i];
        }
    }
    return 0;
    
}
int Aggresive_Cows(vector<int> arr, int n, int m) {
    vector<int> minMax = MinMax(arr,n);
    int ans = -1;
    int s = minMax[0];
    int e = minMax[1];
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            ans = mid;
            s =  mid+1 ;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    vector<int>arr = {12,34,67,90};
    cout<<"Ans = "<<Aggresive_Cows(arr,arr.size(),2)<<endl;
    return 0;
}
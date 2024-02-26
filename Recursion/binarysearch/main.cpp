#include<iostream>
#include <vector>
using namespace std;
// binary search
bool binaeySearch(int a[], int n, int s, int e,int k) {
    if(s>e) return false;
    int mid = (s+e)/2;
    if(a[mid] == k) return true;
    else if (a[mid]<k) return binaeySearch(a,n,mid+1,e,k);
    else return binaeySearch(a,n,s,mid-1,k);

}

// linear search
bool linearSearch(int a[], int n, int k) {
    if(n == 0) return false;
    if(a[0] == k) return true;
    return linearSearch(a+1,n-1,k);

}

// is sorted search
bool isSorted(int a[], int size) {
    if(size == 0 || size == 1) return 1;
    if(a[0]>a[1]) return false;
    else {
        return isSorted(a+1,size-1);
    }
    
}
int main() {
    int arr[4] = {1,2,3,4};
    cout<<"Ans = "<<isSorted(arr,4);
    cout<<"key = "<<linearSearch(arr,4,11);
    cout<<"key = "<<binaeySearch(arr,4,0,3,1);

    return 0;
} 
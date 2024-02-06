#include<iostream>
using namespace std;
// void print Array
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
// find unique
void find_unique(int arr[], int n) {
    int ans = 0;
    for (int i = 0; i<n; i+=2) {
        ans = ans^arr[i];
    }
    cout<<"Unique Element = "<<ans<<endl;
    return;
}
int main() {
    int arr[5] = {2,3,1,3,2};
    find_unique(arr,5);
    return 0;
}
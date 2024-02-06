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
// duplicate array
void duplicate_array(int arr[], int n) {
    int sum_arr = 0; 
    for (int i = 0; i<n; i++) {
        sum_arr += arr[i];
    }
    int sum_n = (n*(n-1))/2;
    cout<<"Duplicate number = "<<abs(sum_arr-sum_n)<<endl;
    return;
}
int main() {
    int arr[4] = {1,2,3,3};
    duplicate_array(arr,4);
    return 0;
}
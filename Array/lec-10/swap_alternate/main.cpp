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
// swap alternate
void swap_alternate(int arr[], int n) {
    for (int i = 0; i<n; i+=2) {
        if(i+1 < n) {
            swap(arr[i],arr[i+1]);
        }
    }
    return;
}
int main() {
    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[9] = {5,2,9,4,7,6,1,0,1};

    cout<<"Print Before Swap!"<<endl;
    print_array(even,8);
    print_array(odd,9);

    swap_alternate(even,8);
    swap_alternate(odd,9);


    cout<<"Print After Swap!"<<endl;
    print_array(even,8);
    print_array(odd,9);

    return 0;
}
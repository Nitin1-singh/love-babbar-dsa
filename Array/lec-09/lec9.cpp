#include <iostream>
using namespace std;
// function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<"Arr["<<i<<"]"<<" = "<<arr[i]<<endl;
    }
    return;
    
}

int main() {
    // Array Declaration
    // Array initialization
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printArray(arr,10);
    return 0;
}
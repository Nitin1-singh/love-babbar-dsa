#include<iostream>
#include <vector>
using namespace std;
// print Array
void print_array(vector<int> arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
// sorted array intersection
vector<int> intersection_array(int arr1[],int arr2[], int s1,int s2) {
    vector<int> ans;
    int n1 = 0;
    int n2 = 0;
    for (int i = 0; i < s1; i++)
    {
        if(i >= s1 || i >= s2) return ans;
        else if (arr1[n1] > arr2[n2]) n2 +=1;
        else if (arr2[n2] > arr1[n1]) n1 += 1;
        else if (arr1[n1] == arr2[n2]) {
            ans.push_back(arr1[n1]);
            n1++;
            n2++;
        }
    }
    return ans;
    
}
int main() {
    int arr1[4] = {1,2,3,4};
    int arr2[5] = {1,2,4,6,7};
    vector<int> ans =  intersection_array(arr1,arr2,4,5);
    print_array(ans,ans.size());
    return 0;
}
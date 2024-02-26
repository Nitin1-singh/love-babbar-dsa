#include<iostream>
using namespace std;
// fibonnaci
int stairs(int n) {
    if(n<0) return 0;
    if(n == 0) return 1;
    return stairs(n-1) + stairs(n-2);
}
int main() {
    int n = 4;
    cout<<stairs(n)<<endl;
    return 0;
} 
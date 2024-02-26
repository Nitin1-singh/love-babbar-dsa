#include<iostream>
using namespace std;
// fibonnaci
void sayDigit(int n) {
    if(n == 0) return;
    int digit = n%10;
    cout<<digit<<" ";
    sayDigit(n/10);
}
int main() {
    int n = 812;
    sayDigit(n);
    return 0;
} 
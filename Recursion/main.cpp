#include<iostream>
using namespace std;
// counting
void counting(int n) {
    if(n == 0) return;
    cout<<n<<" ";
    return counting(--n);
}
// power
int power(int n,int m) {
    if(m==0) return 1;
    return n*power(n,--m);
}
// factorial
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n*factorial(n-1);
}
int main() {
    int n = 5;
    int m = 2;
    cout<<n<<"! = "<<factorial(n)<<endl;
    cout<<n<<"^"<<m<<" = "<<power(n,m)<<endl;
    counting(n);
    return 0;
} 
#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    // Write your code here
if(n==0)
    return 0;
    
 int t=n%10;
    
    return t+sumOfDigits(n/10);
}

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}

#include<iostream>
using namespace std;

int multiplyNumbers(int m, int n) {
    // Write your code here
    if(m<=0)
        return 0;
    
 return( n+ multiplyNumbers(m-1,n));
    
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}

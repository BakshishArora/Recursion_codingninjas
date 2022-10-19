#include<iostream>
using namespace std;

int helper(int n)
{ 
    if(n==0)
    return 0;
 
 if(n%10==0)
     return helper(n/10)+1;
 
 return helper(n/10);
}

int countZeros(int n) {
    // Write your code here


    if (n==0 )
        return 1;
   
    return helper(n);
    
}
int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}

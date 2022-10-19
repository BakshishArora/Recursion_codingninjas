#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double geometricSum(int k) {
   
if(k==0)
    return 1 ;
    
double sum =0 ;
sum= sum + pow(0.5,k);
return sum + geometricSum(k-1);
}

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}

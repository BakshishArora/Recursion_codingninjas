#include<iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
  
if(size<1)
    return false;
    
else if(x==input[size-1])
return true;

else    
return checkNumber(input, size-1, x);
}
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

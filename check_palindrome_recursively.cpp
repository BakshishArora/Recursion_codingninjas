#include<iostream>
using namespace std;

int strlen(char input[])
{ 
    int len=0;
 for (int i=0; input[i]!='\0'; i++)
     len++;
 
 return len;
 }

bool helper(char input[], int front , int back)
{ 
    if (front == back )
    return true;
 
 
if(input[front]!=input[back])
    return false;
else if (front<back-1)
 helper(input, front+1, back-1);
    
}

bool checkPalindrome(char input[]) {
    // Write your code here
if(strlen(input)==1)
    return true;
    
    int front = 0 ;
    int back = strlen(input);
    
    bool ans = helper(input, front , back-1);
    
    return ans;
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

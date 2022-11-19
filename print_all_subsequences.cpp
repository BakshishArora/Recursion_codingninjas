#include<bits/stdc++.h>
using namespace std;

void print_all_subsequences(string input, string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return ;
    }

    print_all_subsequences(input.substr(1), output);
    print_all_subsequences(input.substr(1), output+input[0]);
}

int main()
{
    string input;
    cin>>input;
    string output="";
    print_all_subsequences(input,output);

    return 0;

}
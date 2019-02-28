#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    int i;
    string s;
    cin>>i;
    if('\n')
    getline(cin, s);
    for(int j=0; j<i; j++){
        for(int k=0; k<j;k++){
            cout<<" ";
        }
        cout<<s<<endl;
    }
}

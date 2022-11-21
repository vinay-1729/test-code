#include <bits/stdc++.h>
using namespace std ;
int main() {
    string s1,s2;
    getline(cin >> ws, s1);
    getline(cin >> ws, s2);
    int n = s2.length();
    char ch = s2[n-1];
    int count = 0;
    for(int i=0;i<n;i++){
        if(s1[i]==ch){
            count++;
        }
    }
    cout<<count<<endl;
}

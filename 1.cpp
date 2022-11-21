#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n;
    cin>>n;
    vector<int> v;
    while(n>=3){
        v.push_back(n%3);
        n/=3;
    }
    v.push_back(n);
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
}

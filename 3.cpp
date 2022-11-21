#include <bits/stdc++.h>
using namespace std ;
vector<int> v={0,1,2,5,6,8,9};
bool isValid(int n){
    string s1 = to_string(n);
    for(int i=0;i<s1.length();i++){
        if(find(v.begin(), v.end(), s1[i]-'0') == v.end()){
            return false;
        }
    }
    return true;
}
int main() {
    int n,res=0;
    cin>>n;
    if(n<8){
        res = v[n-1];
    }
    else{
        int c=7,i=10;
        while(c <= n){
            if(isValid(i)){
                res = i;
                c++;
            }
            i++;
        }
    }
    cout<<res;
}

#include <bits/stdc++.h>
using namespace std ;
int r,c;
int main() {
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cin>>arr[i][j];
    }
    int r1=0,c1=0,r2=0,c2=0,r3=0,c3=0,r4=0,c4=0;
    bool flag=true;
    for(int i=0;i<r && flag;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                r1=i;c1=j;
                r2=i;c2=j;
                for(int k=j+1;k<c;k++){
                    if(arr[i][k]==0) c2=k;
                }
                flag=!flag;
                break;
            }
        }
    }
    c3=258;
    for(int i=r1;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                r3=i;
                c3=min(c3,j);
                r4=i;
                c4=max(c4,j);
                for(int k=j+1;k<c;k++){
                    if(arr[i][k]==0) c4=max(c4,k);
                }
            }
        }
    }
    if(c1 < c3){
        c3=c1;
    }
    else{
        c1=c3;
    }
    if(c2 > c4){
        c4=c2;
    }
    else{
        c2=c4;
    }
    if(c3 < 0)
    c3=0;
    cout<<"("<<r1<<","<<c1<<"),("<<r2<<","<<c2<<"),";
    cout<<"("<<r3<<","<<c3<<"),("<<r4<<","<<c4<<")";
}

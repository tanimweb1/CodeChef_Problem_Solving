#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
int a[100];





for(int i = 0;i<x;i++){
   a[i] = y*(i+1);
    }

for(int i = 0;i<x;i++){
    if(a[i]==z){
        cout<<"YES"<<endl;
        return 0;
    }

    
}
cout<<"NO"<<endl;





    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int r1,r2,r3,r4;
cin>>r1>>r2>>r3>>r4;

int count = 0;
if(r1==0){
    count++;
}
if(r2==0){
    count++;
}
if(r3==0){
    count++;
}
if(r4==0){
    count++;
}

if(count == 4){
    cout<<"IN"<<endl;
}
else{
    cout<<"OUT"<<endl;
}
}






    return 0;
}
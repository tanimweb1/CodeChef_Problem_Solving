#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int b1,b2,b3;
cin>>b1>>b2>>b3;
int b1c=0;
if(b1 ==0){
b1c++;
}
if(b2== 0){
    b1c++;
}
if(b3==0){
    b1c++;
}

if(b1c++>=2){
    cout<<"Water filling time"<<endl;
}
else{
    cout<<"Not now"<<endl;
}


}






    return 0;
}
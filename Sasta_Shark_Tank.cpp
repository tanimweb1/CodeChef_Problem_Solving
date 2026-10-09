#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int asol = a*10;

int bsol = b/2;
int total = bsol *10;

if(asol>total){
    cout<<"FIRST"<<endl;
}
else if(total>asol){
    cout<<"SECOND"<<endl;
}
else{
    cout<<"ANY"<<endl;
}





}






    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int tmp = a;
// if(tmp%2!=0){
//     tmp = ceil(tmp/2.0);
// }else{
tmp = tmp/2;


if(b==0){
    cout<<0<<endl;
}
else if(a==b){
    cout<<0<<endl;
}
else if(tmp<b){
    cout<<a/2<<endl;
}
else if(tmp<b){
    cout<<b-tmp<<endl;
}
else if(tmp>b){
    cout<<b<<endl;
}
else if(tmp==b){
    cout<<b<<endl;
}



}






    return 0;
}
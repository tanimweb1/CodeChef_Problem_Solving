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

if(b==0){
    cout<<0<<endl;
}
else if(tmp==b){
    cout<<0<<endl;
}
else if(tmp/2==b){
    cout<<b<<endl;
}
else if(tmp/2>b){
    cout<<b<<endl;
}
else if(tmp/2==b){
    cout<<b<<endl;
}
// else if(a-b==1){
//     cout<<1<<endl;
// }
// else if(a-b==2){
//     cout<<2<<endl;
// }
else if(tmp/2<b){
    cout<<a-b<<endl;
}



}






    return 0;
}

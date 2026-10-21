#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,s;
cin>>n>>s;

if(s==0){
    cout<<0<<endl;
}
else if(s%4==0){
    cout<<s/4<<endl;
}
else if(n==1 && s<4){
    cout<<-1<<endl;
}
else if(n==1 && s>4){
    cout<<-1<<endl;
}
else {
int ans = ceil(s/4.0);
int ans1 = ans*4;
int ans2 = ans1-s;
int finalans = ans+ans2;
cout<<finalans<<endl;


}





}






    return 0;
}
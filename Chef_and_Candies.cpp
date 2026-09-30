#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,a;
cin>>n>>a;
if(n>a){
    int lgbe = n-a;
    double ans = lgbe /4.0;
    int ans1 = ceil(ans);
    cout<<ans1<<endl;
}
else{
    cout<<0<<endl;
}






}






    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,x;
cin>>n>>x;
if(n==x){
    cout<<"YES"<<endl;
}
else if(n>x){
    cout<<"NO"<<endl;
}
else if(n<x && x%n==0){
    cout<<"YES"<<endl;
}
else if(n<x && x%n!=0){
    cout<<"NO"<<endl;
}



}


//this the important onee



    return 0;
}

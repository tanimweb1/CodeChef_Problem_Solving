#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int x,y,z;
cin>>x>>y>>z;

double ts= x*y;

double parcent = z/ts*100;

if(parcent >50){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

 }






    return 0;
}
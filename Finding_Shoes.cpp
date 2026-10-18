#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;


if(a<b){
    //int rightslgbe = a;
    cout<<a<<endl;
}
else if(a==b){
    cout<<b<<endl;
}
else if(a>b){
    int jutalagbe = a*2;
    int rs = jutalagbe/2;
    int ls = a-b;
    int motshoe = rs + ls;
    cout<<motshoe<<endl;
}
// int nedd = ans-b;
// cout<<nedd<<endl;


}






    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int x,y;
cin>>x>>y;

int step = x*y;

if(step>=100){
    int ans = step/100;
    cout<<ans<<endl;
}

else{
    cout<<0<<endl;;
}

}






    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){

int T;
cin>>T;
while(T--){


int s,t;
cin>>s>>t;
if(s>t){
    int ans = s-t;
    cout<<ans<<endl;
}
else if(t>s){
cout<<0<<endl;
}
else {
    cout<<0<<endl;
}
}




    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

int a,b,c,d;
cin>>a>>b>>c>>d;

int ans = max({a,b,c,d});

int mono=0;
if(a==ans){
    mono = b+c+d;
    if(a>mono){
        cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
}
}
else if(b==ans){
    mono = a+c+d;
    if(b>mono){
        cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
}
}
else if(c==ans){
    mono = b+a+d;
    if(c>mono){
        cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
}
}
else if(d==ans){
    mono = b+c+a;
    if(d>mono){
        cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
}
}


}






    return 0;
}
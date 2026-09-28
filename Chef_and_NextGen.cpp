#include<bits/stdc++.h>
using namespace std;
int main(){


int t;
cin>>t;
while(t--){
int a,b,x,y;
cin>>a>>b>>x>>y;

int lan = a*b;
int mood = x*y;
if(mood>=lan){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

}

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;

int max=0,second=0;

if(b>a && b>c){
max = b;
if(a>c){
    second = a;
}
else{
    second = c;
}

}
else if(a>b && a>c){
max = a;
if(b>c){
    second = b;
}
else{
    second = c;
}

}

else if(c>a && c>b){
max = c;
if(a>b){
    second = a;
}
else{
    second = b;
}

}

cout<<second<<endl;

}







    return 0;
}
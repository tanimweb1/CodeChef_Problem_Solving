#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
int ans = c*2;
int tp = ans+b;
if(tp>=a)
{
    cout<<"Qualify"<<endl;
}
else{
cout<<"NotQualify"<<endl;
}

}






    return 0;
}
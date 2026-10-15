#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a;
cin>>a;
if(a>=1 && a<=10){
    cout<<"Lower Double"<<endl;
}
 else if(a>=11 && a<=15){
        cout<<"Lower Single"<<endl;
    }
 else if(a>=16 && a<=25){
        cout<<"Upper Double"<<endl;
    }
 else if(a>=26 && a<=30){
        cout<<"Upper Single"<<endl;
    }
}






    return 0;
}
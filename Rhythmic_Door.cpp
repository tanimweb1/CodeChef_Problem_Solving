#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string a;
cin>>a;
//int ln = a.size();
int count=0;
for(int i = 0;i<a.size();i++){
    if(a[i]==a[i+1] && a[i+1]==a[i+2]){
        count++;
    }
}

cout<<count<<endl;

}






    return 0;
}
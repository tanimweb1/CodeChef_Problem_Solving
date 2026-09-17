#include<bits/stdc++.h>
using namespace std;
int main(){

char s[100];
cin>>s;

int count = 0;
for(int i = 0;s[i]!='\0';i++){
    
    count++;

    if(count==7){
        cout<<s[6]<<endl;
    }
    }




    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){

int rain,clude;
cin>>rain>>clude;
int clear;
int sum = rain+clude;
if(sum==7){
    cout<<"0";

}
else if(sum<7){
    clear = 7 -sum;
    cout<<clear<<endl;
}




    return 0;
}
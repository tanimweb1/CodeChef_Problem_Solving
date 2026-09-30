#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
 int n;
 cin>>n;

int gun = n*50;

double sc = gun *0.20;
double salt = gun * 0.20;
double rent =gun  * 0.30;

int profit = gun -(sc+salt+rent);
cout<<profit<<endl;
}





    return 0;
}
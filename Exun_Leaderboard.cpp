#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int ans1= max(a,b);
int ans2 = min(a,b);

int ans3 = ans1-ans2;
int ans4 = ans3-1;
cout<<ans4<<endl;







    return 0;
}
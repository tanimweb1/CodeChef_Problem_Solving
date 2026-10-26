#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;

int ans = 2000*n;
int sol = ans/500;
cout<<sol<<endl;





    return 0;
}


//string neew problem
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
if(a==b){
    cout<<"YES"<<endl;
}
else if(a>b){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}



}






    return 0;
}













#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

};

int main()
{

    Node a,b,c;
    a.value = 10;
    b.value = 20;
    c.value = 30; 
 a.next = &b;
b.next = &c;
c.next = NULL;



cout<<a.value<<" "<<a.next->value<<" "<<a.next->next->value<<endl;



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int x,y;
cin>>x>>y;

int nday = x*4;
 int total = nday + y;
cout<<total<<endl;

}






    return 0;
}






// reversing

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int i=0;
int j=n-1;
int temp;
while(i<j){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}

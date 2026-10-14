#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        int a1 = a[n-2] - a[0];
        int a2 = a[n-1] - a[1];

        int ans;
        if (a1 < a2) {
            ans = a1;
        } else {
            ans = a2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
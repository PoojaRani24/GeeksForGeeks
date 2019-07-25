#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int start,int end){
    while(start<end){
        a[start]=a[start]+a[end];
        a[end]=a[start]-a[end];
        a[start]=a[start]-a[end];
        start++;
        end--;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int d;
        cin>>d;
        reverse(a,0,d-1);
        reverse(a,d,n-1);
        reverse(a,0,n-1);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

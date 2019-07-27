//Pythagorean triplet
//Complexity:O(n^2)
//Meet in the middle algorithm

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    int a[n];
	    long long int temp;
	    for(long int i=0;i<n;i++){
	    cin>>temp;
	    a[i]=temp*temp;
	    }
	    sort(a,a+n);
	    long int l,r,flag=0;
	    for(long int i=n-1;i>1;i--){
	        l=0;
	        r=i-1;
	        while(l<r){
	            if(a[l]+a[r]>a[i])
	            r--;
	            else if(a[l]+a[r]<a[i])
	            l++;
	            else
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag==1){
	        cout<<"Yes"<<endl;
	        break;
	        }
	    }
	    if(flag==0)
	    cout<<"No"<<endl;
	    
	}
	return 0;
}

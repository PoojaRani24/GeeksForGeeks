#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		long long int k;
		cin>>n;
		cin>>k;
		long long int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		long long int b[3][n];
		int i,j;
		for( i=0;i<3;i++){
			for( j=0;j<n/2;j++){
				if(i==0){
					b[i][j]=a[j]^a[n-j-1];
					b[i][n-j-1]=a[j];
				}
				else{
					b[i][j]=b[i-1][j]^b[i-1][n-j-1];
					b[i][n-j-1]=b[i-1][j];
				}
			}
			if(n%2==1)
			b[i][j]=0;
		}
		
		for(int i=0;i<3;i++){
			for(int j=0;j<n;j++){
				cout<<b[i][j]<<" ";
			} cout<<endl;
		}
		if(k>=n){
			k--;
		int r,c;
		r=(k%(n*3))/n;
		c=(k%(n*3))%n;
		//cout<<"uo"<<k%(n*3)<<" "<<r<<" "<<c<<endl;
		//cout<<b[r][c]<<endl;
		int p=0;
		int index=(n*r)+c;
		//cout<<index<<endl;
		while(p!=n){
			p++;
			//cout<<"po"<<index<<" "<<index%n<<" "<<r<<" "<<c<<endl;
			a[index%n]=b[r][c];
			index--;
			if(r>=0 && c>0)
			c--;
			else if(c==0){
			c=n-1;
			r--;
			}
			else if(r==0 && c==0){
				c=n-1;
				r=2;
			}
	   }
	}
	else{
		for(int i=0;i<k;i++)
		a[i]=b[0][i];
	}
	   for(int i=0;i<n;i++)
	   cout<<a[i]<<" ";
	   cout<<endl;
	}
	return 0;
}

/*
1
5 1
5 6 8 9 4*/

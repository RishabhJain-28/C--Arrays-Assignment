#include<iostream>

using namespace std;

int main(){
	
	int n=3;
	cout<<"Enter the size of the matrix:\n";
	cin>>n;
	int a[n][n];
	int m=1;
	cout<<"Enter the matrix:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			
		}
	
	}
	cout<<"Upper left triangle:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<=n-i-1;j++){
			cout<<a[i][j]<<" ";
		
		}
		cout<<endl;
	}
	cout<<"Upper right triangle:\n";
	for(int i=0;i<n;i++){
		for(int sp=0;sp<i;sp++)
		cout<<"  ";
		for(int j=i;j<n;j++){
		
			cout<<a[i][j]<<" ";
		
		}
		cout<<endl;
	}
	cout<<"Lower left triangle:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<a[i][j]<<" ";
		
		}
		cout<<endl;
	}
	
	cout<<"Lower right triangle:\n";
	for(int i=0;i<n;i++){
		for(int sp=n-i-1;sp>0;sp--)
		cout<<"  ";
		for(int j=n-i-1;j<n;j++){
			cout<<a[i][j]<<" ";
		
		}
		cout<<endl;
	}
	return 0;
}

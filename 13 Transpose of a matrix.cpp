#include<iostream>

using namespace std;

int main(){
	
	int n=3;
	cout<<"Enter the size of the matrix:\n";
	cin>>n;
	
	int a[n][n];
	int z=1;

	cout<<"Enter the matrix:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		//	a[i][j]=z++;
			cin>>a[i][j];
		//cout<<a[i][j]<<" ";
			
			
		}
//	cout<<endl;
	}
	cout<<"Transpose:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			cout<<a[j][i]<<" ";
		
		}
	cout<<endl;
	}
	
	
	

	
	return 0;
}

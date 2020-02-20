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
		//	cout<<a[i][j]<<" ";
			
			
		}
//	cout<<endl;
	}
	int f=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			if(a[j][i]!=a[i][j]){
			f=0;	
			}
		
		}
	cout<<endl;
	}
	if(f){
		cout<<"Symmetric\n";
	}else{
		cout<<"Not Symmetric\n";
	}	
	
	

	
	return 0;
}

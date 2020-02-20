#include<iostream>

using namespace std;

int main(){
	
	int na=2,ma=3,nb=3,mb=2;
	
	cout<<"Enter the size of the matrix A:\n";
	cin>>na>>ma;
	int a[na][ma];
	int l=1;
	
	cout<<"Enter the matrix A:\n";
	for(int i=0;i<na;i++){
		
		for(int j=0;j<ma;j++){
			
			cin>>a[i][j];
			//a[i][j]=l++;
			//cout<<a[i][j]<<" ";	
		}
	//cout<<endl;
	}
	cout<<"Enter the size of the matrix B:\n";
	cin>>nb>>mb;
	int b[nb][mb];
	
	
	cout<<"Enter the matrix B:\n";
	for(int i=0;i<nb;i++){
		for(int j=0;j<mb;j++){
			
			cin>>b[i][j];
			//b[i][j]=l++;
			//cout<<b[i][j]<<" ";	
		}
	//cout<<endl;
	}
	
	if(ma!=nb){
		cout<<"Cant calculate product\n";
		
	}else{
	
	int c[na][mb];
	int sum=0;
	for(int x=0;x<na;x++){
		for(int y=0;y<mb;y++){
			for(int j=0;j<ma;j++)
			{
				sum+=a[x][j]*b[j][y];
			}
			c[x][y]=sum;
			sum=0;
		}
	}
	
	cout<<"Product of A and B :\n";
	for(int i=0;i<na;i++){
		for(int j=0;j<mb;j++){
			cout<<c[i][j]<<" ";
		}
	cout<<endl;
	}
	
	}
	return 0;
}

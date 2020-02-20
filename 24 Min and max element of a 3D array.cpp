#include<iostream>

using namespace std;

int main(){
	
	int x=3,y=3,z=3;
	cout<<"Enter the size of the matrix(x,y,z):\n";
	cin>>x>>y>>z;
	int a[x][y][z];
	int m=1;
	int max=INT_MIN , min=INT_MAX;

	cout<<"Enter the matrix:\n";
	for(int i=0;i<x;i++){
		//cout<<"{";
		
		for(int j=0;j<y;j++){
			for(int k=0;k<z;k++){
			//	a[i][j][k]=m++;
				cin>>a[i][j][k];
				//cout<<a[i][j][k]<<" ";
				
				if(max<a[i][j][k])
					max=a[i][j][k];	
				if(min>a[i][j][k])
					min=a[i][j][k];	
		}
			//cout<<endl;
			}
			//cout<<"}";
		
//	cout<<endl;
	}
	cout<<"Min element="<<min<<endl;
	cout<<"Max element="<<max<<endl;
	

	

	
	return 0;
}

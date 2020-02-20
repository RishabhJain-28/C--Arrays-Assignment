#include<iostream>

using namespace std;

int main(){
	
	int n=3,m=3;
	cout<<"Enter the size of the matrix(r,c):\n";
	cin>>n>>m;
	int a[n][m];
	//int z=1;
	cout<<"Enter the matrix:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		//	a[i][j]=z++;
			cin>>a[i][j];
		// cout<<a[i][j]<<" ";
		
		}
	//cout<<endl;
	}

	int rsum=0,csum=0;
	for(int i=0;i<n;i++){
		
		for( int j=0;j<m;j++){
			rsum+=a[i][j];
			csum+=a[j][i];
		}
		cout<<"Sum of row "<<i<<":"<<rsum<<endl;
		rsum=0;
		cout<<"Sum of col "<<i<<":"<<csum<<endl;
		csum=0;
	}

	
	return 0;
}

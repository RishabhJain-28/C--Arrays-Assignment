#include<iostream>

using namespace std;

int main(){
	
	int n=3;//,m=3;
	cout<<"Enter the size of the matrix(r,c):\n";
	cin>>n;//m
	int a[n][n];///m
//	int z=1;
	int msum=0,osum=0;
	cout<<"Enter the matrix:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){//m
			//a[i][j]=z++;
			cin>>a[i][j];
			//cout<<a[i][j]<<" ";
			
			if(i==j)
			msum+=a[i][j];
			if(i==n-j-1)//m
			osum+=a[i][j];
			
		}
	//cout<<endl;
	}
	cout<<"Sum of main diagonal="<<msum<<endl;
	cout<<"Sum of opp diagonal="<<osum<<endl;
	

	

	
	return 0;
}

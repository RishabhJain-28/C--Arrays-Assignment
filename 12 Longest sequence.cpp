#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter the length of the array:";
	cin>>n;
	int a[n];
	cout<<"Enter elements of the array:";
	for(int i=0;i<n;i++){
		
		cin>>a[i];
	}
	
	int l=0,lmax=-1;
	
	for(int i=0;i<n-1;i++){
	
		if(a[i]==a[i+1]-1 )
		{
			l++;
			
		}else{
		
			l=0;
		}
			if(lmax<l)
				lmax=l;
		
	}
	if(lmax)lmax++;
	
	cout<<"Length of longest consecutive sequence:"<<lmax;
	return 0;
}

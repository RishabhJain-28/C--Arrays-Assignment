#include<iostream>

using namespace std;

int main(){
	int f=0,n,z;
	
	cout<<"Enter the length of the array:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the element to be found:";
	cin>>z;
	for(int i=0;i<n;i++){
		if(a[i]==z){
			cout<<"Element is found at position:"<<i+1<<endl;
		f=1;
		break;
		}	
	}
		
	
	if(f==0)
	cout<<"Element not found\n";
	
	return 0;
}

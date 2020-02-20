#include<iostream>

using namespace std;

int main(){
	int f=0,n,z;
	cout<<"Enter the length of the array:";
	cin>>n;
	int a[n];
	cout<<"Enter elements of the sorted array:";
	for(int i=0;i<n;i++){
		
		cin>>a[i];
	}
	cout<<"Enter the element to be found:";
	cin>>z;
	int s=0,e=n,mid;
	
	for(;s<=e;){
		mid=(s+e)/2;
	
		if(a[mid]==z){
			cout<<"Element is found at pos:"<<mid+1<<endl;
			f=1;
			break;
		
		
		}else if(a[mid]>z){
			e=mid-1;
		}else{
			s=mid+1;
		
		}
		
	}
		

if(f==0){
	cout<<"Element not found\n";
}



	return 0;
}

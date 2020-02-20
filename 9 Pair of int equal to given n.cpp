#include<iostream>


using namespace std;

int bsearch(int n ,int *a,int z){
		int s=0,e=n,mid;
	int f=0;
	for(;s<=e;){
		mid=(s+e)/2;
	
		if(a[mid]==z){
			//cout<<"Element is found at pos:"<<mid+1<<endl;
			f=1;
			break;
		
		
		}else if(a[mid]>z){
			e=mid-1;
		}else{
			s=mid+1;
		
		}
		
	}
		

if(f==0){
	//cout<<"Element not found\n";
	return -1;
}else{
	return mid+1;
}
}


int main(){
	int n;
	cout<<"enter the length of the array:";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum;
	cout<<"Sum=";
	cin>>sum;
	int pos;
	for(int i=0;i<n;i++){
		pos=bsearch(n,a,sum- a[i]);
		if( pos !=-1 && pos-1!=i) 
		{
				cout<<"("<<a[i]<<","<<a[pos-1]<<")"<<endl;
			
		
		}
			
		
	}


	
	return 0;
}

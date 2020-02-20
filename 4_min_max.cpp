#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter the length of the array:";
	cin>>n;
	int a[n],min,max;
	cout<<"Enter elements of the array:";
	for(int i=0;i<n;i++){
		
		cin>>a[i];
	}
	
	max=a[0];
	min=a[0];
	
	for(int i=1;i<n;i++){
		
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	
	}
		
	cout<<"Max:"<<max<<"\nMin:"<<min;

	return 0;
}

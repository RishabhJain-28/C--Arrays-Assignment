#include<iostream>


using namespace std;

int main(){
	int n;
	cout<<"enter the length of the array:";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int temp;
	for(int i=0;i<n/2;i++){
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
		
	}
	
	cout<<"Reversed array:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}

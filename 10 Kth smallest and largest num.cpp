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
	int k;
	cout<<"Enter k:";
	cin>>k;
	int temp;
	for (int i=0; i<n-1; i++) { 
     for (int j=0; j<n-i-1; j++){ 
        if (a[j] > a[j+1]){ 
           temp=a[j] ;
		   a[j]=a[j+1];
		   a[j+1] =temp;
           
       	 } 
     	} 
 	}
  
	cout<<endl;
	 cout<<"Kth smallest element:"<<a[k-1]<<endl;
	cout<<"Kth largest element:"<<a[n-k];
	return 0;
}

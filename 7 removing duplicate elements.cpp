#include<iostream>


using namespace std;

int main(){
	int n;
	cout<<"enter the length of the array:";
	cin>>n;
	int a[n],z,size=n;
	
	cout<<"Enter the elements of the array:";
	for(int i=0;i<n;i++){
		
		cin>>a[i];
		
		for(int j=0 ; j<i && i!=0 ; j++){
		
			if(a[j]==a[i]){
				n--;
				i--;
			}
		}
		
		
	}
	
	
	cout<<"Array after removing duplicates:\n";
	for(int i=0;i<n;i++ ){
		cout<<a[i]<<" ";
		
	}
	
	
	
	
	return 0;
}

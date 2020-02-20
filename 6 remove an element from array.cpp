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
	int z,f=1;
	cout<<"Enter the element to be removed:";
	cin>>z;
	int size=n;
	for(int i=0;i<size;i++){
		if(a[i]==z){
			for(int j=i;j<size;j++){
				a[j]=a[j+1];
				f=0;
				i--;
			}
			n--;
			
		}
	}
	if(f){
		cout<<"No such element in the array\n";
	}else{
		cout<<"Array after deleting the element:\n";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
			
		}
	}
	
	return 0;
}

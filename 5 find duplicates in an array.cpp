#include<iostream>


using namespace std;

int main(){
	int n;
	cout<<"enter the length of the array:";
	cin>>n;
	int a[n],b[n]={0},z,size=n,f=1;
	
	cout<<"Enter the elements of the array:";
	for(int i=0;i<n;i++){
		
		f=1;
		cin>>a[i];
		for(int j=0 ; j<i && i!=0 ; j++){
			if(a[j]==a[i]){
				n--;
				i--;
				b[j]++;
				f=0;	
			break;
			}
		}
		if(f){
		b[i]++;		
			
		}
		
	//	cout<<"i="<<i<<"\tA="<<a[i]<<"\tB="<<b[i]<<endl;
		
	}
	
	
	//cout<<"N="<<n<<endl;
	for(int i=0;i<n;i++ ){
		if(b[i]>1){
			cout<<"Element:"<<a[i]<<"\ncount:"<<b[i]<<endl;
	//	cout<<"i="<<i<<"\tA="<<a[i]<<"\tB="<<b[i]<<endl;
		}
	}
	
	
	
	
	return 0;
}

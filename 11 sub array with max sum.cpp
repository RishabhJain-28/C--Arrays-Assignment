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
	int sum=0,msum=INT_MIN,s,k=0,e;
	for(int i=0;i<n;i++){
		
		
		sum+=a[i];
		
		if(sum<0){
			k=i+1;
			sum=0;
			//cout<<"re\n";
		}
		if(msum<sum){
			//cout<<"Msum:"<<msum;
			msum=sum;
			s=k;
			e=i;
			//cout<<"\nSum:"<<sum<<"\ns:"<<s<<"\ne:"<<e<<endl;
		}
		
	}
	//cout<<"Max sum:"<<msum<<endl;
	
	cout<<"Max sum subarray:\n";
	for(int i=s;i<=e;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

#include<iostream>
#include<math.h>


using namespace std;


int main(){
int n,d,sum=0,c=0;
cout<<"Enter binary number:";
cin>>n;

while(n){
	d=n%10;
	
	sum+=d*pow(2,c);
	c++;
	n=n/10;
}
cout<<"Decimal:"<<sum;


return 0;
}

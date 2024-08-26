#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int r, sum=0;
	int temp=n;
	while(n>0){
		r=n%10;
		sum=sum+pow(r,3);
		n=n/10;
	}
	if(temp==sum){
		cout<<"Armstrong"<<endl;
	}else{
		cout<<"Not Armstrong"<<endl;
	}
}

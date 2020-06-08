#include<iostream>
using namespace std;
int Nstair(int n,int k){
	//base case
	if(n==0){
		return 1;
	}
	//recursive case
	if(n<0){
		return 0;
	}
	int sum=0;
	for(int i=1;i<=k;i++){
		  sum+=Nstair(n-i,k);
	}
	return sum;
}
int main(){
	int n,k;
	cin>>n;
	cin>>k;
	cout<<Nstair(n,k);
	return 0;
}

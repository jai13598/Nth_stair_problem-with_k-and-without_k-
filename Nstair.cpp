#include<iostream>
using namespace std;
int Nstair(int n){
	//base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	//recursive case
	return(Nstair(n-1)+Nstair(n-2)+Nstair(n-3));
}
int main(){
	int n;
	cin>>n;
	cout<<Nstair(n);
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	int t,n,count,i;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		count=0;
		int j=5;
		while(n>=j){
			count+=n/j;
			j*=5;
			     }cout<<count<<endl;
			    }
			 return 0;
			 }   

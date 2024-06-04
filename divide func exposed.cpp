#include <iostream>
using namespace std;

int caller(int n,int d){
	int r = 0;
	int c = 0;
	bool flag = false;
		if(n==d+1){
			c = 1;
			return c;
		}
	for(int i = 1; i <= n; i++){
		r = d * i;
		c = i;
		if(r > n || r == n){
			if(r==n){
				flag = true;	
			} 
			break;
		}	
	}	
	if(flag== false) {
		c = c-1;
	}
	return c;	
}
void divide(int n,int d){
	int np = n;//6
	int x = caller(n,d);//1
	int r2 = x*d;//5
	n = (n - r2);// 6->1
	if(n == 0){
		cout <<d <<"|"<<np<<"|"<<x;	
	}
	
	else{
		n=n*10;//1->10
		cout <<d <<"|"<<np<<"|"<<x<<"."<<caller(n,d);	
	}
}
int main(){
	int num1 = 1;
	int num2 = 2;
	divide(num1,num2);
	
	
}

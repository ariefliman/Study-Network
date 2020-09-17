#include<stdio.h>

int memo[100];

int fibo(int n){
	
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else if(memo[n] != -1) return memo[n];
	
	memo[n] = fibo(n-1)+fibo(n-2);
	return memo[n];
}


int main(){
	for(int i = 0; i  < 100; i++){
		memo[i] = -1;
	}
	printf("%d\n", fibo(5));
	printf("%d\n", fibo(6));
}

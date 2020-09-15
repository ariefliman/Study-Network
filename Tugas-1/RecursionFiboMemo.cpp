#include<stdio.h>

int memo[100];

int fibo(int n){
	
	if(n == 0) return 0;
	else if(n == 1 || n == 2) return 1;
	memo[n] = fibo(n-1)+fibo(n-2);
	return memo[n];
}


int printFibo(int n){
	return(memo[n] != -1) ? memo[n]:fibo(n);
}

int main(){
	for(int i = 0; i  < 100; i++){
		memo[i] = -1;
	}
	
	memo[1] = 1;
	memo[2] = 1;
	
	
	printf("%d\n", printFibo(5));
	printf("%d\n", printFibo(6));
}

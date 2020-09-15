#include<stdio.h>

int main(){
	
	int minus2 = 0, minus1 = 1, sum = 0;
	
	int n = 5;
	
	for(int i = 0; i  < n ; i++){
		minus2 = minus1;
		minus1 = sum;
		printf("%d %d\n", minus1, minus2);
		sum = minus1 + minus2;
	}
	
	printf("%d\n", sum);
	
}

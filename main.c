#include <stdio.h>
int add(int a, int b){
	return a+b;
}

int main(){
	int input;
	int a;
	int b;
	printf("Option:");
	scanf("%d", &input);
	switch(input){
		case 1:
			printf("Input value a and b:");
			scanf("%d %d", &a, &b);
			printf("%d\n", add(a,b));
			break;
		default:
			printf("Option not correct\n");
			return -1;
	}
}

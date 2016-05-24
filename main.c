#include <stdio.h>

int main(){
	int input;
	int a;
	int b;
	printf("Option:");
	scanf("%d", &input);
	switch(input){
		case 1:
			printf("TODO: add operation\n");
			break;
		default:
			printf("Option not correct\n");
			return -1;
	}
}

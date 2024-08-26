#include <stdio.h>

int main(){
	int c = 'a';
	
	printf("--- ABECEDARIO ---\n");
	
	do {
		printf("%c\n", c);
		c++;
	} while (c <= 'z');
	
	return 0;
}
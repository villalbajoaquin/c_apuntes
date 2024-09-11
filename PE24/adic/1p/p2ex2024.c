#include <stdio.h>

void comprimo(char *);

int main(){
	char cad[500];
	puts("Texto: ");
	gets(cad);
	
	comprimo(cad);
	
	return 0;
}

void comprimo(char *cadOr){
	int i = 0, c = 1;
	
	while(*(cadOr+i) != '\0'){
		if(*(cadOr+i+1) != *(cadOr+i)){
			printf("%c", *(cadOr+i));
			printf("%d", c);
			c = 1;
		} else {
			c++;
		}
		
		i++;
	}
}
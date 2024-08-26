// for que corta

#include <stdio.h>

int main(){
	int i;
	
	for(i=0;i<10;i++){
		printf("%d\n", i+1);
		if(i == 4){
			i = 10;
		}
	}
	
	printf("Corto antes.");
	
	return 0;
}
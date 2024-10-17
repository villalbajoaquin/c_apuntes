#include <stdio.h>
#include <stdlib.h>

int main() {
    long long cuil, a, b, c, d, e, f;
    float cbu, cvu;
    
    a = 20000000000;
    b = 20999999999;
    c = 23000000000;
    d = 24999999999;
    e = 27000000000;
    f = 27999999999;
    
    printf("\nIngrese su nro. de CUIL: ");
    scanf("%lld", &cuil);
    while(cuil < a || (cuil > b && cuil < c) || (cuil > d && cuil < e) || cuil > f){
    	system("cls");
    	
    	if(cuil < a){
    		printf("\nERROR. Es menor a 20-XX.XXX.XXX-X, ingrese nuevamente: ");
		} else if(cuil > b && cuil < c){
			printf("\nERROR. Es mayor a 21-XX.XXX.XXX-X y menor a 23-XX.XXX.XXX-X, ingrese nuevamente: ");
		} else if(cuil > d && cuil < e){
			printf("\nERROR. Es mayor a 25-XX.XXX.XXX-X y menor a 27-XX.XXX.XXX-X, ingrese nuevamente: ");
		} else {
			printf("\nERROR. Es mayor a 28-XX.XXX.XXX-X, ingrese nuevamente: ");
		}
    	
		scanf("%lld", &cuil);
	}

    cbu = ((float)cuil * 100000000000) + (float)cuil;
    cvu = cbu + 123456789123456789;
    
    printf("\nCUIL: %lld-%lld-%lld", cuil / 1000000000, (cuil % 1000000000) / 10, cuil % 10);
    printf("\n CBU: %.f", cbu);
    printf("\n CVU: %.f", cvu);
    return 0;
}

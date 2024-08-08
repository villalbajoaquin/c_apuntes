// 3. Todos los lunes, miercoles y viernes, una persona corre la misma 
// ruta y cronometra los tiempos obtenidos. Realice un algoritmo que
// permita determinar el tiempo promedio que la persona tarda en recorrer
// la ruta en una semana cualquiera.

#include <stdio.h>

int main(){

    int hLun, mLun, hMie, mMie, hVie, mVie, ht, mt, hProm, mProm;

    mt = 0, ht = 0;
    
    printf("Ingrese duracion en orden: \n");
    printf("Horas Lunes: \n");
    scanf("%d", &hLun);
    printf("Minutos Lunes: \n");
    scanf("%d", &mLun);
    printf("Horas Miercoles: \n");
    scanf("%d", &hMie);
    printf("Minutos Miercoles: \n");
    scanf("%d", &mMie);
    printf("Horas Viernes: \n");
    scanf("%d", &hVie);
    printf("Minutos Viernes: \n");
    scanf("%d", &mVie);

    mt = mLun + mMie + mVie;
    if(mt > 59){
        mt -= 60;
        ht += 1;
    }

    ht += hLun + hMie + hVie;
    
    mt += ht * 60;
    mt /= 3;

    hProm = mt / 60;
    mProm = mt % 60;

    printf("Marca del lunes: %dh %dm\n", hLun, mLun);
    printf("Marca del miercoles: %dh %dm\n", hMie, mMie);
    printf("Marca del viernes: %dh %dm\n", hVie, mVie);
    printf("Marca promedio semanal: %dh %dm\n", hProm, mProm);
    
    return 0;
}
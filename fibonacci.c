#include <stdio.h>
#include <time.h>

int main(){
    clock_t inicio, fin;
    double tiempo_cpu;
    int n; // Integrar valores numericos al sistema
    printf("Ingresa el valor numerico:"); // Printear primer mensaje
    scanf("%d", &n); // scanf lee los datos ingresados y los agrega al stack como variables
    int a=1 ,b=1 ,sum=1; // Definir A como 1, B como 1 y SUM como 1;
    inicio = clock();
    for(int i=1;i<=(n-2);i++){ // Declara I como 1, I sera el resultado de Input substraido por 2 para luego adicionar por 1 representado por ++ para evitar bucle

    sum=a+b; // sum es igual a iteracion 1 , a es igual iteracion 2 y b es igual a iteracion 3
    a=b; // se copia el valor de a en b
    b=sum; // sum es el resultado final de la operacion
    }

    fin = clock();
    tiempo_cpu = ((double)fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f segundos" , tiempo_cpu);
    printf(" / ");
    printf("El numero Fibonacci de %d es: %d" ,n ,sum); // Se utilizan 2 %d para representar valores cuyas variable estan al final en orden "n" y "sum"
return 0;
}


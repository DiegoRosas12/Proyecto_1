//
//  main.c
//  Proyecto_1
//
//  Universidad de Guanajuato
//  Division de Ingenieriaas campus Irapuato Salamanca
//  Diego Eduardo Rosas Gonzalez
//  Jonathan Joel Corona Ortega
//  Ivan Alejandro Rocha Ríos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float ln2(int n){
    int i, signo = 1;
    float f = 0.0;
    for (i=0; i<n; i++, signo*=(-1))
        f += ((float)signo)/((float)i+1);
    return f;
}

float pi4(int n){
    int i, signo = 1;
    float f = 0.0;
    for (i=0; i<n; i+=2, signo*=(-1))
        f += ((float)signo)/((float)i+1);
    return f;
}

float pi6(int n){
    int i;
    float f = 0.0;
    for (i=0; i<n; i++)
        f += (1) / ((float)i+1*((float)i+1));
    return f;
}

float medio(int n){
    int i, j;
    float f = 0.0;
    for (i=1, j=3; i<=n;i+=2,j+=2)
        f += (1) / ((float)i*j);
    return f;
}

int main() {
    int a, n;
    printf("Seleccione la operación a realizar\n");
    printf("1) ln(2)\n2) \u03C0/4\n3) \u03C0\u00B2/6\n4) \n5) 1/2\n6) \n");
    scanf("%i",&a);
    switch (a) {
        case 1:
            printf("ln(2)\n");
            printf("Ingrese el numero de iteraciones\n");
            scanf("%i",&n);
            printf("El resultado es: %f\n",ln2(n));
            break;
        case 2:
            printf("\u03C0/4\n");
            printf("Ingrese el numero de iteraciones\n");
            scanf("%i",&n);
            printf("El resultado es: %f\n",pi4(n));
            break;
        case 3:
            printf("\u03C0\u00B2/6\n");
            printf("Ingrese el numero de iteraciones\n");
            scanf("%i",&n);
            printf("El resultado es: %f\n",pi6(n));
            break;
        //Falta la funcion 4
        case 5:
            printf("1/2\n");
            printf("Ingrese el numero de iteraciones\n");
            scanf("%i",&n);
            printf("El resultado es: %f\n",medio(n));
            break;

        default:
            break;
    }
    
    return 0;
}

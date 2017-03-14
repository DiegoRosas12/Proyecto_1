//
//  main.c
//  Proyecto_1
//
//  Universidad de Guanajuato
//  Division de Ingenierias Campus Irapuato Salamanca
//  Diego Eduardo Rosas Gonzalez
//  Jonathan Joel Corona Ortega
//  Ivan Alejandro Rocha Ríos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int factorial(int n){
    if (n == 1) {
        return 1;
    }else{
    return n *factorial(n-1);
    }
}

float uno(int n){
    int i, signo = 1;
    float f = 0.0;
    for (i=0; i<n; i++, signo*=(-1))
        f += ((float)signo)/((float)i+1);
    return f;
}

float dos(int n){
    int i, signo = 1;
    float f = 0.0;
    for (i=0; i<n; i+=2, signo*=(-1))
        f += ((float)signo)/((float)i+1);
    return f;
}

float tres(int n){
    int i;
    float f = 0.0;
    for (i=0; i<n; i++)
        f += (1) / ((float)i+1*((float)i+1));
    return f;
}

float cinco(int n){
    int i, j;
    float f = 0.0;
    for (i=1, j=3; i<=n;i+=2,j+=2)
        f += (1) / ((float)i*j);
    return f;
}
float once(int n, float x){
    int i = 0;
    float f;
    if (x >= 1/2){
    do{
        i++;
        //printf("%f",pow(((x-1)/x),i+1)*(1/(i+1)));
        f += (powf((x-1)/x,i)) * (1/i);
    }while(i < n);
    }else{
        printf("X debe ser mayor a 1/2\n");
    }
    return f;
}
float doce(int n, float x, float a){
    int i = 0;
    float f = 0.0;
    do {
    if (i == 0){
        f = 1;
    }else{
        f += (powf(x*(once(n, a)),i)) / (2 * 1 + 1);
    }
    }while(i < n);
    return f;
}
float diezy6(int n, float x){
    float sx, fc;
    int i, sg;
    for (i = 0, sx = 0, sg = 1, fc = x; i < n; i++, sg*=(-1))
    {
        sx += (sg*fc);
        fc *= ((x / (2 * i + 2))*(x / (2 * i + 3)));
    }
    return sx;
}

int main() {
    int a, n;
    float x;
    printf("Seleccione la operación a realizar\n");
    printf("1) ln(2)\n2) \u03C0/4\n3) \u03C0\u00B2/6\n4) \n5) 1/2\n6) \n11) ln(x)\n");
    scanf("%i",&a);
    switch (a) {
        case 1:
            printf("1) ln(2)\n");
            printf("Ingrese el numero de iteraciones\n");
            scanf("%i",&n);
            printf("El resultado es: %f\n",uno(n));
            break;
        case 2:
            printf("2) \u03C0/4\n");
            printf("Ingrese el numero de iteraciones\n");
            scanf("%i",&n);
            printf("El resultado es: %f\n",dos(n));
            break;
        case 3:
            printf("3\u03C0\u00B2/6\n");
            printf("Ingrese el numero de iteraciones\n");
            scanf("%i",&n);
            printf("El resultado es: %f\n",tres(n));
            break;
        //Falta la funcion 4
        case 5:
            printf("1/2\n");
            printf("Ingrese el numero de iteraciones\n");
            scanf("%i",&n);
            printf("El resultado es: %f\n",cinco(n));
            break;
        case 11:
            printf("ln(x)\n");
            printf("Ingrese el numero de iteraciones\n");
            scanf("%i",&n);
            printf("Ingrese el valor de x\n");
            scanf("%f",&x);
            printf("El resultado es: %f\n",once(n,x));
            break;

        default:
            break;
    }
    
    return 0;
}



#include <iostream>

using namespace std;


void calcula(double lado1, double lado2, double *a, double *p){
    *a = lado1 * lado2;
    *p = (lado1 + lado2) * 2;
}

int main(){

    double lado1, lado2, a, p;

    scanf("%lf %lf", &lado1, &lado2);

    calcula(lado1, lado2, &a, &p);

    cout << a << p;


    /*int a = 10;
    int *p; // criando uma variavel do tipo ponteiro  *nomeDaVariavel;


    // & guarda o endereco da variavel
    // * acessa o valor da variavel

    printf("%d\n", p);
    printf("%d\n", *p);


    int v[5] = {1, 2, 3, 4, 5};
    p = v;

    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);*/

    return 0;
}


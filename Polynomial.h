#ifndef POLYNOMIAL_H_INCLUDED
#define POLYNOMIAL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

 struct Monomial{
        int coef;
        int deg;
        struct Monomial* next;
    }Monomial;
struct Polynomial{
        string nom;
        int deg;
        struct Monomial* first;
    }Polynomial;

void display_menu1();
void display_menu2();
Monomial* initialize_monomial(int coef, int deg);
void display_polynomial(Polynomial p);
Polynomial* initialize_polynomial(string nom,Monomial m);
int get_degree(Polynomial p)



#endif // POLYNOMIAL_H_INCLUDED

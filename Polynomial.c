#include "Polynomial.h"
void display_menu1(){
    printf("\n");
    printf("*MENU*\n");
    printf("1: Enter a Polynomial\n");
    printf("0: Quit the program\n");
}
void display_menu2(){
    printf("Enter the number for your operation\n");
    printf("*MENU*\n");
    printf("1: DISPLAY\n");
    printf("2: ADD\n");
    printf("3: SUBTRACT\n");
    printf("4: MULTIPLY\n");
    printf("5: DIVIDE\n");
    printf("6: ROOT\n");
    printf("0: Quit the program")
}
Monomial* initialize_monomial(int coef, int deg){
    Monomial m;
    m.coef = coef;
    m.deg = deg;
    m.next = NULL;
    return &m;
}
int get_degree(Polynomial p){
    Monomial* m_addr = p.first;
    int gr = 0;

    while(m_addr!= NULL){
        if(gr < m_addr->deg){
            gr = m_addr->deg;
        }
        m_addr = m_addr->next;
    }
    return gr;
}
Polynomial* initialize_polynomial(string nom,Monomial m){
    Polynomial p;
    p.nom = nom;
    p.first = &m;
    if(p.first == NULL){
        p.deg = 0;
    }else{
        p.deg = get_degree(p);
    }
    if(p.deg<m.deg){
        p.deg = m.deg;
    }
    return ;

}
Polynomial* arrange_polynomial(Polynomial p){
    Monomial* m1 = p.first;
    Monomial* m2;
    Monomial* m3;
    Monomial* m4 = p.first;
    while(m1!= NULL){
        while(m4!=m1)
        {
            m4 = m4->next;
        }
            m2 = m1->next ;
        while(m2!= NULL){
            if(m1->deg < m2->deg){
               m3 = m2->next;
               m1->next = m3;
               m2->next = m1;
               m4->next = m2;

            }
            if(m1->deg == m2->deg){
                m3 = initialize_monomial(m1->coef+m2->coef,m1->deg);
                m3->next = m2->next;
                m4->next = m3;
            }
        }

    }
}


}
void display_polynomial(Polynomial p){

}

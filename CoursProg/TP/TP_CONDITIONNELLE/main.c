#include <stdio.h>

void is_positive(int a);
int max_3 (int a, int b, int c);
void week(int a);
void week_if(int a);
int is_even(int a);
void is_divided_by_3(int a);
void max();
//TODO


int main() {
    printf("Hello, World!\n");
    //TODO : test des fonctions
    printf("Exercice 1 \n");
    is_positive(3);
    is_positive(-3);
    is_positive(0);

    printf("Exercice 2 \n");
    return 0;
}

//EXERCICE 1
void is_positive(int a){
    if(a < 0){
        printf("%d est negatif \n", a);
    }
    else if (a == 0){
        printf("%d est nul \n", a);
    }
    else
        printf("%d est possitif \n", a);
}

//EXERCICE 2
int max_3 (int a, int b, int c){
    //TODO
}

//EXERCICE 3
void week(int a){
    //TODO
}

//EXERCICE 4
void week_if(int a){
    //TODO
}

//EXERCICE 5
int is_even(int a){
    //TODO
}

//Exercice 6
void is_divided_by_3(int a){
    //TODO
}

//Exercice 7
void max(){
    //TODO
}

//Exercice 8
int profitable(int fabri, int vente,int montant){
    //TODO
}

//Exercice 9
int calculator(int a, char c, int b){
    //TODO
}


//Exercice 10
void is_consonant(char c){
    //TODO
}

//Exercice 11
void bissextile(int a){
    //TODO
}
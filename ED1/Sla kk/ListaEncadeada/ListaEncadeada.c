#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
}noLista;

noLista *criarLista(){
    return NULL;
}

int estaVazia(noLista **l){
    return(*l == NULL);
}

void insereElemento(noLista **l, int v){
    noLista *n = malloc(sizeof(noLista));

    if(n != NULL){
        n->info = v;
        n->prox = *l;
        *l = n;
    } else{
        printf(" Não foi possível alocar memoria. ");
    }
}

void imprimeLista(noLista **l){
    if(!estaVazia(l)){
        for(noLista *p = *l; p !=NULL; p = p->prox){
            printf("%d\n", p->info);
        }
    }
}

noLista *buscaLista(noLista **l, int v){
    noLista *p;
    for(p = *l; p != NULL; p = p->prox)
        if(p->info == v)
            return p;
    return NULL;
}

void removeItem(noLista **l, int v){
    noLista *p, *ant = NULL;
    for(p = *l; p != NULL && p->info != v; p = p->prox)
        ant = p;
    if(ant == NULL)
        *l = p->prox;
    else
        ant->prox = p->prox;
    free(p);
}

// void libera(noLista **l){
//     if(!estaVazia()){
//         for(noLista *p = *l; p != NULL; p = temp)
//             temp = p->prox;
//             free(p);
//     }
//     *l = NULL;
// }

void insereOrdenado(noLista **l, int v){
    noLista *p, *ant = NULL;
    noLista *n = (noLista*)malloc(sizeof(noLista));

    if(n != NULL){
        n->info = v;
        p = *l;
        while( p != NULL && p->info < v){
            ant = p;
            p = p->prox;
        }
        if(ant == NULL){
            *l = n;
        } else{
            ant->prox = n;
        }
        n->prox = p;
    }
}

int tamanhoLista(noLista **l){
int cont = 0;

if(!estaVazia(l)){
    for(noLista *p = *l; p != NULL; p = p->prox ){ // p recebe conteúdo de l
        x++;
    }
} else{
    return x;
}
}

noLista *ultima(noLista **l){
   if(!estaVazia(l)){
       for(noLista *p = *l; p != NULL; p = p->prox)
        if(p->prox == NULL)
            return p;
   }
    return NULL;
}

int main(){
noLista *lista;
lista = criarLista();
int val;

    insereOrdenado(&lista, 14);
    insereOrdenado(&lista, 16);
    insereOrdenado(&lista, 15);
    insereOrdenado(&lista,20);
    insereOrdenado(&lista,30);
    insereOrdenado(&lista,10);
system("cls");

    imprimeLista(&lista);

    printf("Informe o valor que deseja remover da lista:\n");
        scanf("%d",&val);
    removeItem(&lista, val);
system("cls");
    printf(" ----- Lista atualizada -----\n\n");
    imprimeLista(&lista);

    return 0;
}
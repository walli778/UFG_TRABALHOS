#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct dataNode{
    int id;
}DataNode;

typedef struct node{
    DataNode data;
    struct node* next;
    struct node* previous;
}Node;

typedef struct list{
    int size;
    Node* head;
    Node* fool;
}List;

List* createList(); ///CRIA UMA LISTA
void push(List* list, DataNode data); ///ADICIONA NO COMEÇO
void pull(List* list,DataNode data); ///ADICIONA NO FINAL
void StartprintList(List* list); ///IMPRIMI NO COMEÇO
void LastprintList(List* list); ///IMPRIMI NO FINAL
bool isEmpty(List* list); ///RETORNA SE TA VAZIA OU NAO

List* createList(){

    List* list = (List*) malloc(sizeof(List));

    list->size = 0;
    list->head = NULL;
    list->fool = NULL;

    return list;

}

void push(List* list,DataNode data){

    /// COMO ESTA INSERINDO NO COMEÇO O PRIMEIRO ELEMENTO SERA O ULTIMO SENDO ASSIM SO PRECISA
    /// DO list->fool uma unica vez sempre apontando pro cara que inicia a lista
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->previous = NULL;
    newNode->next = NULL;

    if(list->head == NULL){ ///se a lista estiver vazia
        list->head = newNode;
        list->fool = newNode;
    }else{

        list->head->previous = newNode; ///[O NO DA ATUAL CABEÇA IRA APONTAR PARA O NÓ NEW]
        newNode->next = list->head; /// o nó apontara para a onde a cabeça ta apontando
        list->head = newNode; ///a cabeça vai aponta pro novo no
    }

    list->size++;

}

void pull(List* list,DataNode data){

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->previous = NULL;
    newNode->next = NULL;

    if(list->head == NULL){ ///se a lista estiver vazia
        list->head = newNode;
        list->fool = newNode;
    }else{
        list->fool->next = newNode;
        newNode->previous = list->fool;
        list->fool = newNode;
    }

    list->size++;
}

void StartprintList(List* list){

    if(isEmpty(list)){
        printf(" --- LIST EMPTY ---");
        return;
    }

    Node* pointer = list->head;

    while(pointer != NULL){
        printf("%d ", pointer->data.id);
        pointer = pointer->next;
    }
}

void LastprintList(List* list){

    if(isEmpty(list)){
        printf(" --- LIST EMPTY ---");
        return;
    }

    Node* pointer = list->fool;

    while(pointer != NULL){
        printf("%d ",pointer->data.id);
        pointer = pointer->previous;
    }
}

bool isEmpty(List* list){
    return (list->size == 0);
}

int main(){
    List* list = createList(list);

    DataNode data;
    data.id = 1;
    pull(list,data);

    data.id = 2;
    pull(list,data);

    data.id = 3;
    pull(list,data);

    data.id = 4;
    pull(list,data);

   StartprintList(list);
   printf("\n");
   LastprintList(list);
}

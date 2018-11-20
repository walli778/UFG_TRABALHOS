#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct dataNode{
    int id;
} DataNode;

typedef struct node{
    DataNode data;
    struct node* next;
} Node;

typedef struct list{
    int size;
    Node* head;
} List;

List* createList(); ///CRIA LISTA
void push(List* list, DataNode data); ///INSERE NO COMEÇO
void pull(List* list, DataNode data); ///INSERE NO FINAL
void pullindex(List* list, DataNode data); ///INSERE NO FINAL por Index
void printList(List* list);///PRINTA A LISTA
void pop(List* list);///EXCLUI NO COMEÇO
bool isEmpty(List* list);///RETORNA SE A LISTA ESTA VAZIA OU NAO
Node* atPos(List* list, int index);///DADO UM INDEX RETORNA O NÓ
int indexOf(List* list, Node* node);///DADO UM NÓ RETORNA UM INDEX
void erase(List* list, int index); ///DADO UM INDEX EXCLUI O NÓ
void insert(List* list, DataNode data ,int index);///DADO UM INDEX ADICIONA UM NÓ
void xchgNodes(List* list, Node* nodeA, Node* nodeB); ///DADO DOIS NÓS TROCA DE POSIÇÃO

List* createList(){  ///CRIA LISTA
    List* list = (List*)malloc(sizeof(List));

    list->size = 0;
    list->head = NULL;

    return list;
}

void push(List* list, DataNode data){ ///INSERE NO COMEÇO
    Node* node = (Node*)malloc(sizeof(Node));

    node->data = data; ///pega o dado
    node->next = list->head; ///next aponta pra onde a cabeça aponta
    list->head = node; ///a cabeça aponta pro no
    list->size++; /// aumenta +1 no tamanho da lista

}

void pull(List* list, DataNode data){ ///INSERE NO FINAL


    if(isEmpty(list)){
        push(list,data);
    }else{
        Node* node = (Node*) malloc(sizeof(Node));
        Node* pointer;

        node->data = data;
        node->next = NULL;

        pointer = list->head;

        while(pointer->next != NULL)
            pointer = pointer->next;
        pointer->next = node;
        list->size++;
    }
}

void pullindex(List* list, DataNode data){ ///INSERE NO FINAL por Index

    if(isEmpty(list)){
        push(list,data);
    }else{
        Node* previous = atPos(list, list->size-1); ///Pega o Node final da Lista

        Node* newNode = (Node*) malloc(sizeof(Node));
        newNode->data = data;

        previous->next = newNode;
        newNode->next = NULL;
        list->size++;
    }
}

void printList(List* list){ ///PRINTA A LISTA

    if(isEmpty(list)){
        printf(" --- LIST EMPTY");
        return;
    }

    Node* pointer = list->head;

    while(pointer != NULL){
        printf("%d ", pointer->data.id);
        pointer = pointer->next;
    }

}

bool isEmpty(List* list){ ///RETORNA SE A LISTA ESTA VAZIA OU NAO
    return (list->size == 0);
}

void pop(List* list){ ///EXCLUI NO COMEÇO

    if(!isEmpty(list)){
        Node* pointer = list->head;

        list->head = pointer->next;
        free(pointer);
        list->size--;
    }
}

Node* atPos(List* list, int index){ ///DADO UM INDEX RETORNA O NÓ

    if((index >= 0) && (index < list->size)){
        Node* node = list->head;

        for(int i=0; i < index; i++)
            node = node->next;

        return node;
    }
    printf("\n\n Wrong Indice \n");
    return NULL;

}

int indexOf(List* list, Node* node){ ///DADO UM NÓ RETORNA UM INDEX

    if(node != NULL){
        Node* pointer = list->head;
        int index = 0;

        while(pointer != node && pointer != NULL){
            pointer = pointer->next;
            index++;
        }
        if(pointer != NULL){
            return index;
        }
    }

    printf("No Nao pertence a lista");
    return -1;
}

void erase(List* list, int index){ ///DADO UM INDEX EXCLUI O NÓ

    if(index == 0)
        pop(list);

    else{
        Node* current = atPos(list,index);

        if(current != NULL){
            Node* previous = atPos(list,index-1);
            previous->next = current->next;

            free(current);
            list->size--;
        }
    }
}

void insert(List* list, DataNode data ,int index){ ///DADO UM INDEX ADICIONA UM NÓ
    if(index == 0)
        push(list,data);

    else{
        Node* current = atPos(list,index);

        if(current != NULL){
            Node* previous = atPos(list,index-1);

            Node* newNode = (Node*) malloc(sizeof(Node));
            newNode->data = data;

            previous->next = newNode;
            newNode->next = current;
            list->size++;

        }
    }

}

void xchgNodes(List* list, Node* nodeA, Node* nodeB){ ///TROCA DOIS NÓS DE POSIÇÃO

    if(nodeA == nodeB)
        return;

    int indexA = indexOf(list,nodeA);
    int indexB = indexOf(list,nodeB);

    if(indexA > indexB){
        nodeA = nodeB;
        nodeB = atPos(list,indexA);

        indexA = indexB;
        indexB = indexOf(list,nodeB);
    }

    Node* pb = atPos(list,indexB-1);

    if(nodeA == list->head){
        list->head = nodeB;
    }

    else{
        Node* pa = atPos(list,indexA-1);
        pa->next = nodeB;
    }

    pb->next = nodeA;

    Node* pointer = nodeA->next;
    nodeA->next = nodeB->next;
    nodeB->next = pointer;

}

int main(){
    List* lista = createList();

    DataNode data;

    for(int i=1; i < 7; i++){
         data.id=i;
        pull(lista,data);
    }
    printList(lista);
    xchgNodes(lista, atPos(lista,5),atPos(lista,2));
    printList(lista);
   // pull("\n%d", indexOf(lista, lista->head));
}

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;

}*NODE;

NODE create_node(int data){
    NODE temp = (NODE) malloc (sizeof(NODE));
    if(temp != NULL){
        temp->data = data;
        temp->link = NULL;
    }
    else{
        printf("\nmemory was not allocated");
    }
    return temp;
}

void display(NODE head){
    if(head == NULL){
        printf("Empty list");
    }
    else{
        printf("\n head -> ");
        for(NODE temp = head;temp != NULL;temp=temp->link){
            printf(" %d ",temp->data);
        }
        printf(" NULL \n");
    }
}

NODE ins_front(NODE head,int data){
    NODE new_node = create_node(data);
    if(new_node != NULL){
        new_node->link = head;
        head = new_node;
    }
    return new_node;
}

NODE del_front(NODE head){
    NODE temp;
    if(head == NULL)
        printf("\t\n Empty list");
    else
    {
        temp = head;
        head->link;
        printf("\n Deleting %d ",temp->data);
        free(temp);
    }
    return head;
}

NODE ins_last(NODE head,int data){

    NODE temp,new_node = create_node(data);
    if(new_node != NULL){
        if(head = NULL)
            return new_node;
        for(temp = head;temp->link != NULL;temp=temp->link);
        temp->link=new_node;
    }
    return head;
}

NODE del_last(NODE head){
    if(head == NULL){
        printf("\n\t Empty list");
        return NULL;
    }
    if(head->link == NULL){
        printf("\n\t deleted node %d ",head->data);
        free(head);
        return NULL;
    }
    NODE curr = head;
    while (curr->link->link != NULL)
    {
        curr = curr->link;
    }
    printf("deleted node %d",curr->link->data);
    free(curr->link);
    curr->link=NULL;
    return head;
}

NODE inset_postion(NODE head,int data,int pos){
    NODE curr = head,new_node;
    int i = 0;
    if(new_node == NULL){
        return head;
    }
    if(pos == 0 ||  head== NULL){
        new_node->link = head;
        return new_node;
    }
    for(;curr != NULL && i < pos -1 ;i++){
        if(curr == NULL){
            printf("out of range");
            return head;
        }
        new_node = create_node(data);
        if(new_node != NULL){
            new_node->link = curr->link;
        }

    }

}

int main(){

    int choice;
    do
    {
        printf("Enter a choiceing operation number :-");
        scanf("%d",&choice);
        printf("1.display linked list");
        printf("2.insert element in last posion");
        printf("3.insert element in frist postion");
        printf("4.insert element in n number of postion");
        printf("5.insert element in sorted linked list postion");
        printf("6.delete first element in lisked list");
        printf("7.delete last element in lisked list");

        switch (choice)
        {
        case 1:
        {
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            break;
        }
        case 5:
        {
            break;
        }
        case 6:
        {
            break;
        }
        case 7:
        {
            break;
        }
        default:
            printf("value is invalid");
            break;
        }
    } while (choice > 0 || choice < 8);
    return 0;

}
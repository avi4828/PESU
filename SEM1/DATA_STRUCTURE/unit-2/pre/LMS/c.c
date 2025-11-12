#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int t_no;
    struct node *next, *prev;
} *NODE;

NODE create_node(int t_no){
    NODE new_node = (NODE)malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("\nMemory allocation failed!\n");
        return NULL;
    }
    new_node->t_no = t_no;
    new_node->next = new_node->prev = new_node;
    return new_node;
}

NODE insert_front(NODE head, int t_no){
    NODE new_node = create_node(t_no);
    if(head == NULL){
        return new_node;
    }
    NODE tail = head->prev;
    
    new_node->next = head;
    new_node->prev = tail;
    tail->next = new_node;
    head->prev = new_node;
    return new_node;
}

NODE insert_rear(NODE head,int t_no){
    NODE new_node = create_node(t_no);
    if(head == NULL){
        return new_node;
    }
    NODE tail = head->prev;
    new_node->next = head;
    new_node->prev = tail;
    tail->next = new_node;
    head->prev = new_node;
    return head;
}

NODE delete_front(NODE head){
    if(head==NULL){
        printf("\nlinklist is empty!\n");
        return NULL;
    }
    NODE tail = head->prev;
    
    if(head->next == head){
        printf("deleted ticket:%d\n",head->t_no);
        free(head);
        return NULL;
    }
    
    NODE temp = head;
    head = head->next;
    head->prev = tail;
    tail->next = head;
    
    printf("delted ticket: %d\n",temp->t_no);
    free(temp);
    return head;
}

NODE delete_rear(NODE head){
    if(head == NULL){
        printf("\nlinklist id empty!\n");
        return NULL;
    }
    NODE tail = head->prev;
    
    if(head->next == head){
        printf("deleted ticket: %d\n",head->t_no);
        free(head);
        return NULL;
    }
    
    NODE new_tail = tail->prev;
    new_tail->next = head;
    head->prev = new_tail;
    
    printf("delted ticket: %d\n",tail->t_no);
    free(tail);
    return head;
}

void display_forward(NODE head){
    if(head == NULL){
        printf("\nlinklist is empty!\n");
        return;
    }
    NODE temp = head;
    printf("\nlinklist: ");
    do{
        printf("[%d] -> ",temp->t_no);
        temp = temp->next;
    } while (temp != head);
}

void display_reverse(NODE head){
    if(head == NULL){
        printf("\nlinklist is empty!\n");
        return;
    }
    
    NODE tail = head->prev;
    NODE temp = tail;
    
    printf("\nlinklist: ");
    do {
        printf("[%d] -> ",temp->t_no);
        temp = temp->prev;
    }while(temp != tail);
}

void search_ticket(NODE head,int t_no){
    if(head == NULL){
        printf("\nlinklist is empty!\n");
        return; 
    }
    
    NODE temp = head;
    int pos = 1;
    do {
        if(temp->t_no == t_no){
            printf("\nticket %d found at position %d in linklist \n",t_no,pos);
            return;
        }
        temp = temp->next;
        pos++;
    } while(temp != head);
    printf("\nticket %d not found in the linklist",t_no);
}

int main(){
    NODE head = NULL;
    int choice,t_no;
    
    while(1){
        printf("\n--- Ticket counter linklist ---");
        printf("\n1. Add ticket at front");
        printf("\n2. Add ticket at rear");
        printf("\n3. delete ticket at front");
        printf("\n4. delete ticket at rear");
        printf("\n5. display forward");
        printf("\n6. display reverse");
        printf("\n7. search for ticket");
        printf("\n0. exit");
        printf("\nenter your choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("enter ticket number: ");
                scanf("%d",&t_no);
                head = insert_front(head,t_no);
                break;
            case 2:
                printf("enter ticket number: ");
                scanf("%d",&t_no);
                head = insert_rear(head,t_no);
                break;
            case 3:
                head = delete_front(head);
                break;
            case 4:
                head = delete_rear(head);
                break;
            case 5:
                display_forward(head);
                break;
            case 6:
                display_reverse(head);
                break;
            case 7:
                printf("enter ticket nunber to search: ");
                scanf("%d",&t_no);
                search_ticket(head,t_no);
                break;
            case 0:
                printf("\nExiting...\n");
                exit(0);
            default:
                printf("\ninvalid choice! try again.\n");
        }
    }
    return 0;
}


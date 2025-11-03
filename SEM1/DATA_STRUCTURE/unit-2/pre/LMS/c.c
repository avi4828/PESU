#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next, *perv;
} *NODE;

NODE create_node(int data){
    NODE new_node = (NODE)malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("\nMemory alloction failed\n");
        return NULL;
    }
    new_node->data = data;
    new_node->perv = NULL;
    new_node->next = NULL;
    return new_node;
}

void display(NODE head){
    NODE curr;
    if(head == NULL){
        printf("\n Empty list\n");
        return;
    }
    printf("\n\nHead ->");
    for(curr = head;curr != NULL; curr = curr->next){
        printf("[%d] -> ",curr->data);
    }
    printf("NULL\n\n");
}

NODE insert_front(NODE head,int data){
    NODE new_node = create_node(data);
    if(new_node == NULL){
        return head;
    }
    if(head != NULL){
        new_node->next = head;
        head->perv = new_node;
    }
    return new_node;
}

NODE insert_last(NODE head,int data){
    NODE new_node = create_node(data);
    if(new_node == NULL){
        return NULL;
    }
    if(head == NULL){
        return new_node;
    }
    NODE curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = new_node;
    new_node->perv = curr;
    return head;
}

NODE insert_pos(NODE head, int data, int pos){
    NODE new_node = create_node(data);
    if(new_node == NULL){
        return head;
    }
    if(pos <= 1 || head == NULL){
        new_node->next = head;
        head->perv = new_node;
        head = new_node;
        return head;
    }
    NODE curr = head;
    int curr_pos = 1;
    while(curr->next != NULL && curr_pos < (pos-1)){
        curr = curr->next;
        curr_pos++;
    }
    new_node->next = curr->next;
    new_node->perv = curr;
    curr->next->perv = new_node;
    curr->next = new_node;
    return head;
}

NODE delete_frist(NODE head){
    NODE temp;
    if(head == NULL){
        printf("\nEmpty List!!\n");
        return NULL;
    }
    if(head->next == NULL){
        printf("deleted Node: %d\n",head->data);
        free(head);
        return NULL;
    }
    temp = head;
    head = head->next;
    head->perv = NULL;
    printf("deleted node: %d\n",temp->data);
    free(temp);
    return head;
}

NODE delete_last(NODE head){
    NODE temp;
    if(head == NULL){
        printf("\nEmpty List!!\n");
        return head;
    }
    if(head->next == NULL){
        printf("deleted node %d\n",head->data);
        free(head);
        return NULL;
    }
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    printf("deleted node %d:\n",temp->data);
    temp->perv->next = NULL;
    free(temp);
    return head;
}

NODE reverse_list(NODE head){
    NODE temp = NULL;
    NODE curr = head;
    if(head == NULL){
        printf("\nEmpty List!\n");
        return NULL;
    }
    while(curr != NULL){
        temp = curr->perv;
        curr->perv = curr->next;
        curr->next = temp;
        curr = curr->perv;
    }
    if(temp != NULL){
        head = temp->perv;
    }
    printf("\nlist reverded successfully!\n");
    return head;
}


int main()
{
    NODE head = NULL;
    int choice, data, pos;
    
    while(1){
        printf("\n---- Double Linked list ----");
        printf("\n1. insert front");
        printf("\n2. insert last");
        printf("\n3. insert position");
        printf("\n4. delete front");
        printf("\n5. delete last");
        printf("\n6. reverse list");
        printf("\n7. display");
        printf("\n0. exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("enter data: ");
                scanf("%d",&data);
                head = insert_front(head,data);
                break;
            case 2:
                printf("enter data: ");
                scanf("%d",&data);
                head = insert_last(head,data);
                break;
            case 3:
                printf("Enter position:");
                scanf("%d",&pos);
                printf("\nenter data: ");
                scanf("%d",&data);
                head = insert_pos(head,data,pos);
                break;
            case 4:
                head = delete_frist(head);
                break;
            case 5:
                head = delete_last(head);
                break;
            case 6:
                head = reverse_list(head);
                break;
            case 7:
                display(head);
                break;
            case 0:
                printf("\nExiting...\n");
                exit(0);
            default:
                printf("\nInvalid choice!\n");
        }
    }
    return 0;
}

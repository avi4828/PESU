#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;

} *NODE;

NODE create_node(int data)
{
    NODE temp = (NODE)malloc(sizeof(NODE));
    if (temp != NULL)
    {
        temp->data = data;
        temp->link = NULL;
    }
    else
    {
        printf("\nmemory was not allocated");
    }
    return temp;
}

void display(NODE* head)
{
    if (head == NULL)
    {
        printf("Empty list");
    }
    else
    {
        printf("\n head -> ");
        for (NODE temp = head; temp != NULL; temp = temp->link)
        {
            printf(" %d ", temp->data);
        }
        printf(" NULL \n");
    }
}

NODE ins_front(NODE head, int data)
{
    NODE new_node = create_node(data);
    if (new_node != NULL)
    {
        new_node->link = head;
        head = new_node;
    }
    return new_node;
}

NODE del_front(NODE head)
{
    NODE temp;
    if (head == NULL)
        printf("\t\n Empty list");
    else
    {
        temp = head;
        head->link;
        printf("\n Deleting %d ", temp->data);
        free(temp);
    }
    return head;
}

void ins_last(NODE head, int data)
{

    NODE new_node = create_node(data);
    NODE temp = NULL;
    if (new_node != NULL)
    {
        if (head == NULL)
            head = new_node;
        for (temp = head; temp->link != NULL; temp = temp->link);
        temp->link = new_node;
    }
    printf("%d",head->data);

}

NODE del_last(NODE head)
{
    if (head == NULL)
    {
        printf("\n\t Empty list");
        return NULL;
    }
    if (head->link == NULL)
    {
        printf("\n\t deleted node %d ", head->data);
        free(head);
        return NULL;
    }
    NODE curr = head;
    while (curr->link->link != NULL)
    {
        curr = curr->link;
    }
    printf("deleted node %d", curr->link->data);
    free(curr->link);
    curr->link = NULL;
    return head;
}

NODE inset_postion(NODE head, int data, int pos)
{
    NODE curr = head, new_node;
    int i = 0;
    if (new_node == NULL)
    {
        return head;
    }
    if (pos == 0 || head == NULL)
    {
        new_node->link = head;
        return new_node;
    }
    for (; curr != NULL && i < pos - 1; i++)
    {
        if (curr == NULL)
        {
            printf("out of range");
            return head;
        }
        new_node = create_node(data);
        if (new_node != NULL)
        {
            new_node->link = curr->link;
        }
    }
}

NODE insert_in_sorted_list(NODE head,int data){
    NODE curr = head;
    NODE new_node = create_node(data);
    if(new_node == NULL){
        return head;
    }
    if(head == NULL || head->data >= data){
        new_node->link = head;
        return new_node;
    }

    while(curr->link != NULL && curr->link->data < data){
        curr = curr->link;
    }
    new_node->link = curr->link;
    curr->link = new_node;
    return head;
}


NODE delete_posion(NODE head,int pos){
    if(head == NULL){
        printf("\n\tEmpty list");
        return NULL;
    }
    if(pos == 0){
        NODE temp = head;
        head = head->link;
        printf("\n\t deteled node %d",temp->data);
        free(temp);
        return head;
    }
    NODE curr = head;
    for(int i = 0;curr->link != NULL && i <pos-1;i++){
        curr = curr->link;
    }
    if(curr->link == NULL){
        print("\n\tout of range");
        return head;
    }
    NODE temp = curr->link;
    curr->link = temp->link;
    printf("\n\tdeleted node %d",temp->data);
    free(temp);
    return head;
}


NODE search_and_return_pervious(NODE head,int key){
    if(head == NULL || head->data == key){
        return NULL;
    }
    NODE curr = head;
    while (curr->link != NULL && curr->link->data != key){
        curr = curr->link;
    }
    return ((curr->link == NULL) ? NULL : curr);
}

NODE delete_by_content(NODE head,int key){
    if(head == NULL){
        printf("\n\t Empty list");
        return NULL;
    }

    if(head->data == key){
        NODE temp = head;
        head = head->link;
        printf("deleted node %d",temp->data);
        free(temp);
        return head;
    }
    NODE prev = search_and_return_pervious(head,key);
    if(prev == NULL){
        printf("\n\t Node with key %d not found",key);
        return head;
    }
    NODE temp = prev->link;
    prev->link = temp->link;
    printf("\n\t delted node id %d",temp->data);
    free(temp);
    return head;
}


int main()
{

    return 0;
}
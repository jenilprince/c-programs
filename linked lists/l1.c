#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void insbeg(int newdata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
}
void insend(int newdata){
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->next=NULL;
    struct Node *temp=head;
    if (head==NULL){
        head=newnode;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    if (temp->next==NULL){
        temp->next=newnode;
    }
}
void delete(int value){
    struct Node *temp=head;
    if (head==NULL){
        printf("Invalid");
        return;
    }
    if (head->data==value){
        head=head->next;
        
    }
    while(temp!=NULL && temp->data!=value){
        temp=temp->next;
    }
    if (temp->data==value){
        temp=temp->next;
    }

    
}
void display(){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main(){
    insbeg(20);
    insbeg(80);
    insbeg(70);
    insend(50);
    insend(30);
    delete(20);
    display();
    return 0;
}

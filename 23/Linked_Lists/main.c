#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NULL 0

struct list_element{
    char item[40];
    struct list_element *next;
};

typedef struct list_element node;

int menu(void);
void create(node *pt);
node *insert(node *pt);
node *remov(node *pt);
void display(node *pt);

int main(){
    node *start;
    int choice;
    do{
        choice=menu();
        switch(choice){
    case 1:
        start=(node*)malloc(sizeof(node));
        fflush(stdin);
        create(start);
        printf("\n");
        display(start);
        continue;
    case 2:
        fflush(stdin);
        start=insert(start);
        printf("\n");
        display(start);
        continue;
    case 3:
        fflush(stdin);
        start=remov(start);
        printf("\n");
        display(start);
        continue;
    default:
        printf("End of computation\n");
        }
    }while(choice!=4);
return 0;
}

int menu(void){
    int choice;
    do{
        printf("\nMain menu:\n");
        printf("1: Create the linked list\n");
        printf("2: Add a component\n");
        printf("3: Delete a component\n");
        printf("4: End\n");
        printf("Please enter your choice: ");
        scanf("%d",&choice);
        if(choice<1 || choice>4)
            printf("\nERROR-Please try again\n");
    }while(choice<1 || choice>4);
    printf("\n");
    return(choice);
}

void create(node *record){
    printf("Data item (type \'END\' when finished): ");
    gets(record->item);

    if (strcmp(record->item,"END")==0){
        record->next=NULL;}
    else{
        record->next=(node*)malloc(sizeof(node));
        create(record->next);
}
return;
}

void display(node *record){
    if(record->next != NULL){
        printf("%s\n",record->item);
        display(record->next);
    }
    return;
}

node *insert(node *first){
    node *locate(node*,char[]);
    node *newrecord;
    node *tag;
    char newitem[40];
    char target[40];
    printf("New data item: ");
    gets(newitem);
    printf("Place before (type \'END\' if last): ");
    gets(target);

    if (strcmp(first->item,target)==0){
        newrecord=(node*)malloc(sizeof(node));
        strcpy(newrecord->item,newitem);
        newrecord->next=first;
        first=newrecord;
    }
    else{
            tag=locate(first,target);
    if(tag==NULL)
        printf("\nMatch not found - Please try again\n");
    else{
        newrecord=(node*)malloc(sizeof(node));
        strcpy(newrecord->item,newitem);
        newrecord->next=tag->next;
        tag->next=newrecord;
    }
    }
    return(first);
}

node *locate(node *record,char target[]){
    if(strcmp(record->next->item,target)==0)
        return(record);
    else
        if(record->next->item==NULL)
            return(NULL);
        else
            locate(record->next,target);

}

node *remov(node *first){
    node *locate(node*,char[]);
    node *tag;
    node *temp;
    char target[40];
    printf("Data item to be deleted: ");
    gets(target);

    if(strcmp(first->item,target)==0){
        temp=first->next;
        free(first);
        first=temp;
    }
    else{
        tag=locate(first,target);
        if(tag==NULL){
            printf("\nMatch not found! Try again\n");
        }
        else{
            temp=tag->next->next;
            free(tag->next);
            tag->next=temp;
        }
    }
    return(first);
}

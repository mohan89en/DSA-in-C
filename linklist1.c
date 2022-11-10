#include <stdio.h>
#include <stdlib.h>
struct list{
    int data;
    struct list *next;
}*head;
void addnode(int n)
{
    struct list *new,*tmp;
    int data,i;
    head = (struct list *)malloc(sizeof(struct list));
    if(head == NULL)
    {
        printf("memory is not allocated");
    }
    else{
        printf("enter the first node :");
        scanf("%d",&data);
        head->data = data;
        head->next = NULL;
        tmp = head;
        for(i=2;i<=n;i++)
        {
            new = (struct list *)malloc(sizeof(struct list));
            if(new==NULL)
            {
                printf("memory is not allocated ");
            }
            else{
                printf("enter the data: ");
                scanf("%d",&data);
                new->data =data;
                new->next = NULL;
                tmp->next = new;
                tmp = tmp->next;
            }
        }
    }


}
void display()
{
    struct list *tmp;
    if(head == NULL)
    {
        printf("empty list");
    }
    else{
        tmp = head;
        while(tmp!=NULL)
        {
            printf("data: %d ",tmp->data);
            tmp = tmp->next;
        }
    }

}
int main(){
    int n;
    printf("enter the number of nodes: ");
    scanf("%d",&n);
    addnode(n);
    display();
   
    
}

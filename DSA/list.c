#include<stdio.h>
#include<stdlib.h>
typedef struct node* lstptr;
struct node{
int data;
lstptr link;
};

lstptr First=NULL;

lstptr getnode()
{
lstptr ptr;
ptr=(lstptr)malloc(sizeof(struct node));
return ptr;
}

void insertBegin(int ele)
{
lstptr new;
new=getnode();
new->data=ele;
new->link=NULL;
if(First!=NULL)
{
new->link=First;
}
First=new;
}

void insertEnd(int ele)
{
lstptr new,temp;
new=getnode();
new->data=ele;
new->link=NULL;
if(First==NULL)
{
new->link=First;
First=new;
}
else
temp=First;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=new;
}

int deleteBegin()
{
lstptr temp;
if(First==NULL)
{
printf("List is empty");
return 0;
}
else
{
temp=First;
First=First->link;
free(temp);
}
}

int deleteEnd()
{
lstptr temp,prev;
if(First==NULL)
{
printf("List is empty");
return 0;
}
temp=First;
if(First->link==NULL)
{
First=NULL;
free(temp);
}
else
{
prev=First;
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
prev->link=NULL;
free(temp);
}
}

lstptr delete_specific(int ele)
{
lstptr temp,prev;
temp=First;
if(First==NULL)
printf("/n EMPTY LIST");
else if(First->data==ele)
{
if(First->link!=NULL)
First=First->link;
else
First=NULL;
printf("Entered element is deleted");
}
else
{
while(temp->data!=ele &&temp->link!=NULL)
 {
  prev=temp;
  temp=temp->link;
 }
 if(temp->link == NULL && temp->data!=ele)
printf("Specified item not found");
else if(temp->link!=NULL)
prev->link=temp->link;
else
prev->link=NULL;
}
free(temp);
return(First);
}

int display()
{
lstptr temp;

if(First==NULL)
{
printf("\nList is empty");
return 0;
}
temp=First;
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}

printf("%d\t",temp->data);
}

void main()
{
int op=1,ch,ele;
while(op)
{
printf("\n 1.Insert Begin \n2.Insert End\n3.Delete Begin\n4.Delete End\n5.DISPLAY\n6.Delete specific\n7.Exit");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{ 
  case 1:printf("Enter the element to be inserted:");
         scanf("%d",&ele);
         insertBegin(ele);
          break;
 case 2:printf("Enter the element to be inserted:");
         scanf("%d",&ele);
         insertEnd(ele);
          break;
 case 3:
         deleteBegin();
          break;
 case 4:
        deleteEnd();
          break;
        
 case 5:display();
         break;
 case 6:printf("Enter the element to be deleted:");
        scanf("%d",&ele);
        delete_specific(ele);
        break;
case 7:exit(0);
 
}
printf("\n Do you want to continue?(0/1)");
scanf("%d",&op);
}
}

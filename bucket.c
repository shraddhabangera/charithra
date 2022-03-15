#include<stdio.h>
void main()
{
int incoming,outgoing,buff_size,store=0,n;
printf("Enter the number of packets:");
scanf("%d",&n);
printf("Enter the value for outgoing:");
scanf("%d",&outgoing);
printf("Enter the value for buffersize:");
scanf("%d",&buff_size);
while(n!=0)
{
printf("\nIncoming packets:");
scanf("%d",&incoming);
if(incoming<=(buff_size-store))
{
store+=incoming;
printf("\nBucket buffersize %d: out of %d:",store,buff_size);
}
else
{
printf("dropped packet:%d",(incoming-(buff_size-store)));
store=buff_size;
}
store=store-outgoing;
printf("store value is:%d",store);
n--;
}
}


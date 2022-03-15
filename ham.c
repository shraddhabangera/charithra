#include<stdio.h>
void main()
{
int data[7],recv[7],i,c1,c2,c3,c;
printf("Enter the data bits:");
scanf("%d %d %d %d",&data[0],&data[1],&data[2],&data[4]);
data[6]=data[4]^ data[2]^data[0];
data[5]=data[4]^ data[1]^data[0];
data[3]=data[2]^ data[1]^data[0];
printf("Encoded bits:");
for(i=0;i<7;i++)
{
printf("%d\t",data[i]);
}
printf("\nEnter encoded bits:");
for(i=0;i<7;i++)
{
scanf("%d",&recv[i]);
}
c1=recv[6]^recv[4]^recv[2]^recv[0];
c2=recv[5]^recv[4]^recv[1]^recv[0];
c3=recv[3]^recv[2]^recv[1]^recv[0];
c=c3*4+c2*2+c1;
if(c==0)
{
printf("\n No error");
}
else
{
printf("\n there is an error: %d\nCorrected bit is:",c);
}
if(recv[7-c]==0)
recv[7-c]=1;
else
recv[7-c]=0;
for(i=0;i<7;i++)
{
printf("\n%d\t",recv[i]);
}
}


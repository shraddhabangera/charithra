#include<stdio.h>
int a[20][20],n,visited[10],count=0,i,j,w,s;
void dfs(int v)
{
  count++;
  visited[v]=count;
for(w=0;w<n;w++)
{
if(visited[w]==0 && a[v][w]==1)
dfs(w);
}
}
void main()
{
printf("\nEnter the number of vertices:");
scanf("%d",&n);
printf("Enter the matrices:");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++)
  visited[i]=0;
   dfs(0);
if(count==n)
{
  printf("\nThe graph is connected");
}
else
{
  printf("The graph is not connected");
}
}



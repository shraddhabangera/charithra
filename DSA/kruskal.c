#include<stdio.h>
int i,j,n,cost[30][30],v1,v2;
int i,edgwt,mincost=0;
void doUnion(int root[],int v1,int v2){
	int temp;
	temp=root[v2];
	for(i=0;i<n;i++){
		if(root[i]==temp)
			root[i]=root[v1];
	}
}
void findMin(){
	int min;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(cost[i][j]<min && cost[i][j]>0){
				min=cost[i][j];
				v1=i;
				v2=j;		
		}	
	}

}
void kruskal(int n){
	int root[n];
	for(i=0;i<n;i++)
		root[i]=i;
	printf("Edges of minimum spanning tree are ");
	i=0;
	while(i!=n-1){
		findMin();
		edgwt=cost[v1][v2];
		cost[v1][v2]=cost[v2][v1]=0;
		if(root[v1]!=root[v2]){
			printf("\n(%d,%d)",v1,v2);
			doUnion(root,v1,v2);
			mincost+=edgwt;
			i++;
		}
	}
	printf("\nCost of the spanning tree is %d",mincost);
}
void main()
{

	printf("Enter the number of vertices");
	scanf("%d",&n);
	printf("\nEnter the weights for the graph");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&cost[i][j]);
	kruskal(n);
}

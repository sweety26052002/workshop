#include<stdio.h>
int main()
{
	int n,i,j,size[20],sb[20],eb[20],t[20],x,c[20][20];
	printf("enter no. of files:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter no. of blocks occupied by file %d",i+1);
		scanf("%d",&size[i]);
		printf("enter the starting block file%d",i+1);
		scanf("%d",&sb[i]);
		t[i]=sb[i];
		for(j=0;j<size[i];j++)
		c[i][j]=sb[i]++;
	}
	for(i=0;i<n;i++)
	{
		eb[i]=t[i]+size[i]-1;
	}
	printf("filename\t length\t start block\t end block\n");
	for(i=0;i<n;i++)
	printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,size[i],t[i],eb[i]);
	printf("enter file name:");
	scanf("%d",&x);
	printf("filename is %d",x);
	printf("length is %d",size[x-1]);
	printf("block occupied:");
	for(i=0;i<size[x-1];i++)
	printf("%4d",c[x-1][i]);
	return 0;
}

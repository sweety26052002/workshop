#include<stdio.h>
int main()
{
	int mm,np,ps[100],rm[100],i,j,am=0,flag=0;
	printf("enter memory size");
	scanf("%d",&mm);
	printf("entr no. of processes");
	scanf("%d",&np);
	for(i=0;(i<np)&&(am<mm);i++)
	{
		printf("enter the size of p[%d]",i+1);
		scanf("%d",&ps[i]);
		am=am+ps[i];
		if(am>=mm)
		{
			flag=1;
			break;
		}
		rm[i]=mm-am;
	}
	j=i;
	printf("processes\t size\t rm\n");
	for(i=0;i<j;i++)
	printf("%d\t\t %d\t %d\n",i+1,ps[i],rm[i]);
	if(flag==1)
	printf("memory is unavailable");
	return 0;
}

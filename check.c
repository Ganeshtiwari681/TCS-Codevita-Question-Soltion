#include<stdio.h>
int ans(int count){
	if(count==0)
	return 0;
    else
 	return count;
}

int main()
{
	int th,m,n,i,j,a,b;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++)
	{
	  for(j=0;j<n;j++)
	  {
	  	scanf("%d",&arr[i][j]);
	  }	
	}	
	scanf("%d %d",&a,&b);
	scanf("%d",&th);
int size;
	size=m*n;
	int count =0;
for(i=0;i<m;i++)
{
 	for(j=0;j<n;j++)
		{
			if((arr[a][b]<arr[i][j]) && (th<arr[i][j]))
			{
				count++;
			}

		}
}
ans(count);
return 0;
}

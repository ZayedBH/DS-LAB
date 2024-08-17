#include<stdio.h>
void main()
{
	 int  sum[100][100],i=0,j=0,k=1,m,n,count=0,t1[100][100],t2[100][100];

	printf("Enter the number of non zero elements in the first matrix: ");
	scanf("%d", &m);
	printf("Enter the number of non zero elements in the second matrix: ");
	scanf("%d", &n);
	printf("Enter the elements of the first sparse matrix (row, column, value):\n");
	    for (i = 0; i < m; i++) {
		scanf("%d%d%d", &t1[i][0], &t1[i][1], &t1[i][2]);
	    }

	    printf("Enter the elements of the second sparse matrix (row, column, value):\n");
	    for (i = 0; i < n; i++) {
		scanf("%d%d%d", &t2[i][0], &t2[i][1], &t2[i][2]);
	    }




	while(i<m)
		{
			while(j<n)
			{

				{
					if(t1[i][0]<t2[j][0])
						sum[k][0]=t1[i][0];
						sum[k][1]=t1[i][1];
						sum[k][2]=t1[i][2];
						i++,k++,count++;
				}
			
				{
					if(t1[i][0]>t2[j][0])
						sum[k][0]=t2[i][0];
						sum[k][1]=t2[i][1];
						sum[k][2]=t2[i][2];
						i++,k++,count++;
				}
					
				{
					if(t1[i][0]<t2[j][0])
						sum[k][0]=t1[i][0];
						sum[k][1]=t1[i][1];
						sum[k][2]=t1[i][2];
						i++,k++,count++;
				}
					
				{
					if((t1[i][0]==t2[j][0])&&(t1[i][1]==t2[j][1]))
						sum[k][0]=t1[i][0];
						sum[k][1]=t1[i][1];
						sum[k][2]=t1[i][2]+t2[j][2];
						i++,k++,count++,j++;
				}
				
				{
					if((t1[i][0]==t2[j][0])&&(t1[i][1]<t2[j][1]))
						sum[k][0]=t1[i][0];
						sum[k][1]=t1[i][1];
						sum[k][2]=t1[i][2];
						i++,k++,count++;
				}

				{
					if((t1[i][0]==t2[j][0])&&(t1[i][1]>t2[j][1]))
						sum[k][0]=t2[i][0];
						sum[k][1]=t2[i][1];
						sum[k][2]=t2[i][2];
						i++,k++,count++;
				}

			}
		}
	while(i<m)
		{
			sum[k][0]=t1[i][0];
			sum[k][1]=t1[i][1];
			sum[k][2]=t1[i][2];
			i++,k++,count++;
		}

	while(j<n)
		{
			sum[k][0]=t1[j][0];
			sum[k][1]=t1[j][1];
			sum[k][2]=t1[j][2];
			j++,k++,count++;
		}
		printf("Resultant Sparse Matrix:\n");
	    	printf("Row Column Value\n");
	    	for (i = 0; i < k; i++) {
			printf("%d %d %d\n", sum[i][0], sum[i][1], sum[i][2]);
		}
}

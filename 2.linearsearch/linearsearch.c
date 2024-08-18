 #include<stdio.h>
 void main()
 {
 int a[10],n,x,i,flag=0;
 printf("Enter the limit of the array:");
 scanf("%d",&n);
 printf("Enter array elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the search key:");
 scanf("%d",&x);
 for(i=0;i<n;i++)
 {
 if(a[i]==x)
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 printf("%d is not presentin the array:", x);
 }
 else
 {
 printf("%d is present at %d",x,i+1);
 }
 

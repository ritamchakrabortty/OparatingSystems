#include<stdio.h>
void bubble_sort(int arr[],int n)
{
  int i,j;
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}
int main() 
{ 
 int N; 
 printf("Enter total no of process: \n"); 
 scanf("%d",&N); 
 int arry[N]; 
 int arrs[N]; 
 int indx[N]; 
 printf("Enter the burst time of processes one by one: \n"); 
 for(int i=0;i<N;i++) 
 { 
  scanf("%d",&arry[i]); 
 } 
 for(int i=0;i<N;i++) 
 { 
  arrs[i]=arry[i]; 
 } 
 for(int i=0;i<N;i++) 
 { 
  indx[i]=i; 
 } 
 printf("The unsorted process sequence is:\n"); 
 for(int i=0;i<N;i++) 
 { 
  printf("%d ",indx[i]); 
 } 
 printf("\n"); 
   
 bubble_sort(arry,N); 
 printf("The sequence of sjf burst time is:\n"); 
 for(int i=0;i<N;i++) 
 { 
  printf("%d ",arry[i]); 
   
 } 
 for(int i=0;i<N;i++) 
 { 
  for(int j=0;j<N;j++) 
  { 
   if(arry[i]==arrs[j]) 
   { 
    indx[i]=j; 
   } 
  } 
 } 
 printf("\nThe SJF process sequence is:\n"); 
 for(int i=0;i<N;i++) 
 { 
  printf("%d ",indx[i]); 
 } 
 int wait[N]; 
 wait[0]=0; 
 int i=0; 
 if(arry[i]!=0) 
 { 
  i++; 
  for(int i=0;i<N;i++) 
  { 
   wait[i+1]=(wait[i]+arry[i]); 
  } 
 } 
 int sum=0; 
 for(int i=0;i<N;i++) 
 { 
  sum=(sum+wait[i]); 
 } 
 printf("\nThe total waiting time:%d\n",sum); 
 float avg=(sum/(float)N); 
 printf("\nAvarage waiting time is:%.2f\n",avg); 
 return 0; 
}

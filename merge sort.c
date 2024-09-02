#include<stdio.h>

void mergesort(int a[], int low, int high);
void merge(int a[], int low, int mid, int mid2, int high);

int main()
 {
  int a[100];
  int n,i;

  printf("Enter no of elements:");
  scanf("%d",&n);

  printf("Enter array elements:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  mergesort(a,0,n-1);

   printf("\nSorted array is :");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);

   printf("\n");

 return 0;
}

void mergesort(int a[],int low,int high)
  {
    int mid;

  if(low<high)
   {
     mid=(low+high)/2;

     mergesort(a,low,mid);
     mergesort(a,mid+1,high);

     merge(a, low, mid, mid+1, high);
   }
  }

  void merge(int a[],int low,int mid,int mid2,int high)
  {
    int b[100];

    int i,j,k;
    i=low;
    j=mid2;
    k=0;

    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
            {
            b[k++]=a[i++];

            }

          else
          {
             b[k++]=a[j++];
          }

    }


   while(i<=mid)
   {
       b[k++]=a[i++];
   }


   while(j<=high)
   {
       b[k++]=a[j++];
   }


   for(i=low,j=0;i<=high;)
   {
      a[i++]=b[j++];
   }
}

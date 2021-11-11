//Operations on array
#include <stdio.h>
void main()
{
    int n,size,value,i,posi,op;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the integers:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nSELECT FROM FOLLOWING\n1. Insert\n2. Delete\n3. Modify \n");
    scanf("%d",&op);
    if(op==1)
    {
        printf("Enter position to insert element:\n ");
        scanf("%d",&posi);
        printf("Enter integer to insert: ");
        scanf("%d",&value);
        for(i=n-1;i>=posi-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[posi-1]=value;
        n++;
        printf("Array after inserting value:\n ");
        for(i=0;i<=n-1;i++)
        {
            printf("%d\n",arr[i]);
        }
    }
    else if(op==2)
    {
        printf("Enter position to delete element: ");
        scanf("%d",&posi);
        if(posi>=n+1)
        {
            printf("Deleting not possible:\n");
        }
        else
        {
            for(i=posi-1;i<n-1;i++)
            {
                arr[i]=arr[i+1];
            }
        printf("Array after deleting:\n ");
        for(i=0;i<n-1;i++)
        {
            printf("%d\n",arr[i]);
        }
        }
    }
    else
    {
        printf("Enter position to modify element: ");
        scanf("%d",&posi);
        printf("Enter value to modify: ");
        scanf("%d",&value);
        arr[posi-1]=value;
        printf("Array after modifying is:\n ");
        for(i=0;i<=n-1;i++)
        {
        printf("%d\n",arr[i]);
        }
    }
}


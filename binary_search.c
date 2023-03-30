#include<stdio.h>

int main(){
    int a[50],n,loc=-1,key,beg,last,mid,i;
    printf("\nEnter number of array elements:\n");
    scanf("%d",&n);
    printf("Enter array element:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    beg=0;
    last=n-1;
    printf("Enter integer value to search in sorted array:\n ");
    scanf("%d",&key);
    while(beg<=last){ /*loop will run until unless only one element is not remaining */
        mid=(beg+last)/2;   /* determine the index of middle element */
        if(a[mid]==key){
            loc=mid; //save the location of element 
            break;
        }
        else if(a[mid]>key){  /*middle element is greater then key */
            last=mid-1;  /* if middle element is greater then key , we need to search left subarray*/
            }//end if else
    }//end of while loop
    if(loc!=-1){
        printf("\nElement found at location %d\n",loc+1); /*location is exact position , not index*/
        }
    else{
        printf("\nElement not found\n");
    }

    return 0;
}
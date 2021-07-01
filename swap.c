#include<stdio.h>
#include<cs50.h>

void swap_max(int arr[], int l, int n)
{
/* a[0] to a[aLength-1] is the array to sort */
int i,j,pos;
int aLength=l; // initialise to a's length

/* advance the position through the entire array */
/*   (could do i < aLength-1 because single element is also min element) */
for (i = 0; i < aLength-1; i++)
{
    /* find the min element in the unsorted a[i .. aLength-1] */

    /* assume the min is the first element */
    int jMin = i;
    /* test against elements after i to find the smallest */
    for (j = i+1; j < aLength; j++)
    {
        /* if this element is less, then it is the new minimum */
        if (arr[j] < arr[jMin])
        {
            /* found new minimum; remember its index */
            jMin = j;
        }
    }

    if (jMin != i) 
    {
        pos=arr[i];
        arr[i]=arr[jMin];
        arr[jMin]=pos;
    }
}
}
int ssort(int arr[], int l){
for(int i=0;i<l;i++){
swap_max(arr, l, i);}
}


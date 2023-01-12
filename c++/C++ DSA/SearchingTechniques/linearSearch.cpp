#include <stdio.h>
#include <stdlib.h>
struct List
{
    int size;
    int length;
    int B[10];
};
void Display (struct List list)
{
    int i;
    printf ("\nElements are\n");
    for (i = 0; i < list.length; i++)
        printf ("%d ", list.B[i]);
}
int BinarySearch(struct List list, int key) {
    int l, mid, h;
    l = 0;
    h = list.length - 1;
    while (l <= h)
    {
       mid = (l + h) / 2;
       if (key == list.B[mid])
          return mid;
       else if (key < list.B[mid])
          h = mid - 1;
       else
          l = mid + 1;
     }
     return -1;
}

int RBinSearch(int a[], int l, int h , int x){
    int mid; 
    if(l <= h){
        mid = (l + h) / 2;
        if (x == a[mid])
         return mid;
        else if (x < a[mid])
         return RBinSearch (a, l, mid - 1, x);
        else
         return RBinSearch (a, mid + 1, h, x);
    }
    return -1;
}

int main ()
{
    struct List list_1 = { 10, 8, {2, 3, 9, 16, 18, 21, 28, 32, 35} };
    int x;
    printf ("Enter the element which you want to search: \n");
    scanf ("%d", &x);
    printf ("Element present at index of %d\n", BinarySearch(list_1, x));
    printf ("Element present at index of %d\n", RBinSearch (list_1.B, 0, list_1.length, x));
}
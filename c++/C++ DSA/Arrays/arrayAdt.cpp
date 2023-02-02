#include<bits/stdc++.h>
using namespace std;

/*
1. Array Space.
2. Size.
3. Length(no of elements.)
*/

// Operations
/*
1.display()
2.Add(x) / append(x)
3.Insert(index x)
4.Delete(index)
5.Search(x)
6.Get(index)
7.Set(index,x)
8.Max()/Min()
9.Reverse()
10.Shift()/Rotate()
*/

struct Array
{
    /* data */
    int* A; 
    int size; 
    int length;
};

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Display(struct Array arr){
    cout << "\nElements are\n";

    for(int i = 0 ; i < arr.length; i++){
        cout << arr.A[i] << " ";
    }
}

void Append(struct Array* arr, int x){
    if(arr->length < arr->size){
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array* arr, int index, int x) {
    if (index >= 0 && index <= arr->length) {
       for (int i = arr->length; i > index; i--) {
          arr->A[i] = arr->A[i - 1];
       }
       arr->A[index] = x;
       arr->length++;
    }
}

int Delete(struct Array* arr, int index){
    if (index >= 0 && index <= arr->length){
        int x = arr->A[index];
        for (int i = index ; i < arr->length ; i++) {
          arr->A[i] = arr->A[i+1];
       }
       arr->length--;
       return  x;
    }
}

int linearSearch(struct Array* arr, int x){
    for(int i = 0 ; i < arr->length ; i++){
        if(x == arr->A[i]){
            return i;
        }
    }
    return -1;
}

int improvedLinearSearch(struct Array* arr, int x){
    for(int i = 0; i < arr->length; i++){
        if(x == arr->A[i]){
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int Get(struct Array* arr,int index){
    if(index >= 0 && index < arr->length)
        return arr->A[index];
}

int Set(struct Array* arr, int index, int x){
    if(index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int Max(struct Array* arr){
    int max = arr->A[0];
    for(int i  = 1 ; i < arr->length; i++){
        if(arr->A[i] > max){
            max = arr->A[i];
        }
    }
    return max;
}

int Min(struct Array* arr){
    int min = arr->A[0];
    for(int i  = 1 ; i < arr->length; i++){
        if(arr->A[i] < min){
            min = arr->A[i];
        }
    }
    return min;
}

int Sum(struct Array* arr){
    int sum = 0 ; 
    for(int i  = 0 ; i < arr->length; i++){
        sum = sum + arr->A[i];
    }
    return sum;
}

int Average(struct Array* arr){
    int aver = Sum(arr)/arr->length ; 
    return aver;
}

void Reverse(struct Array arr){
    cout << "\nReversed-Elements are : ";

    for(int i = arr.length ; i > 0 ; i--){
        cout << arr.A[i] << " ";
    }
}

void InsertSort(struct Array *arr, int x){
    int i = arr->length-1;
    if(arr->length == arr->size){
        return;
    }
    while(arr->A[i] > x){
        arr->A[i+1] = arr->A[i];
        i--;  
    }
    arr->A[i+1] = x;
    arr->length++;
}

int isSorted(struct Array arr){
    int i; 
    for(i = 0 ; i < arr.length-1 ; i++){
        if(arr.A[i] > arr.A[i+1]){
            return 0; 
        }
        return 1; 
    }
}

void Rearrange(struct Array *arr){
    int i = 0 , j = arr->length -1 ;
    while (i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;

        if(i<j)swap(&arr->A[i], &arr->A[j]);
    }
    
}
int main(){
    struct Array arr;  // initializing Struct (arr)

    cout << "Enter Size of an Array: " << endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout << "Enter Number of Elements: " << endl;
    cin >> arr.length;
    cout << "Enter All Elements: " << endl;
    for (int i = 0; i < arr.length; i++) {
       cin >> arr.A[i];
       cout << " ";
    }
    getchar();

    Append(&arr, 10);
    Insert(&arr, 0, 12);
    Delete(&arr,3);
    InsertSort(&arr, 60);
    Display(arr);
    cout << "\nElement found at Index: " << linearSearch(&arr, 20);
    cout << "The required value of 4th index is: " << Get(&arr, 4) << endl;
    cout << "The Setting value of 3rd index is: " << Set(&arr, 3, 50) << endl;
    cout << "The Total sum of the array is: " << Sum(&arr) << endl;
    cout << "The Max of the array is: " << Max(&arr) << endl;
    cout << "The Min sum of the array is: " << Min(&arr) << endl;
    cout << "The inserted Sort is: " ;  Display(arr); 
    cout << "Is the array sorted ? " << isSorted(arr) << endl;
    Rearrange(&arr);
    Display(arr);
    Reverse(arr);
}

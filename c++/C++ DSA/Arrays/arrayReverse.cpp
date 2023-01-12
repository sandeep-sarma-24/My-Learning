#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

struct List{
    int B[15];
    int size; 
    int length;
};

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int Display(struct List list){
    int i;
    for(i = 0 ; i <= list.length ; i++){
        cout << list.B[i] << " "; 
    }
}

void Reverse1(struct List *list){
    int *c;
    int i , j ;
    c = (int*)malloc(sizeof(int) * (list->length));
    for(i = list->length - 1 , j = 0 ; i >= 0 ; i--,j++){
        c[j] = list->B[i]; // copying From 1st array to (C) array.
    }
    for(i = 0 ; i < list->length; i++){
        list->B[i] = c[i];
    }
}

void Reverse2(struct List *list){
    int i , j ; 
    for(i = 0 , j = list->length; i < j ; i++, j--){
        swap(&list->B[i],&list->B[j]);
    }
}

int main(){

    struct List list1= {{2,3,9,16,18,21,28,32,35},10,9};

    cout << "Before Reverse : ";
    cout << Display(list1) << endl;
    Reverse1(&list1);
    cout << "After Reverse : ";
    cout << Display(list1) << endl;
    Reverse2(&list1);
    cout << "Back to Original using Swap reverse : " ; 
    cout << Display(list1) << endl;

}
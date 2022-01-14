#include<iostream>
using namespace std;
void SelectionSort(int array[], int n){
    for(int i=0;i<n-1;i++){
        int min=array[i], minIndex=i;
        for(int j=i+1;j<n;j++){
            if(array[j] < min){
                min = array[j];
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

int main(){
    int array[] = { 1 , 10, 9, 2, 11};
    SelectionSort(array, 5);
    for(int i=0;i<5;i++){
        cout << array[i] << " ";
    }
}

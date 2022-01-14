#include<iostream>
using namespace std;
void InsertionSort(int array[], int n){
    for(int i=1;i<n;i++){
        int current = array[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(array[j]>current){
                array[j+1]=array[j];
            }
            else{
                break;
            }
        }
        array[j+1]=current;
    }
}
int main(){
    int array[] = {1 , 10,9 ,2,11};
    InsertionSort(array,5);
    for(int i=0;i<5;i++){
        cout<< array[i] << " ";
    }
}


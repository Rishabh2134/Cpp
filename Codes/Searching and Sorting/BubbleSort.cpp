#include<iostream>
using namespace std;
void BubbleSort(int array[], int n){
    for(int j=0;j<n-1;j++){
    for(int i=0;i<n-1;i++){
            if(array[i+1]<array[i]){
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
            }
        }
    }
}
int main(){
    int array[] = {1 , 10,9 ,2,11};
    BubbleSort(array,5);
    for(int i=0;i<5;i++){
        cout<< array[i] << " ";
    }
}

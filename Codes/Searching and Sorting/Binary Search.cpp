#include<iostream>
using namespace std;

int binarysearch(int n, int arr[], int val){
    int start = 0;
    int end = n-1;
    while(start <=end){
        int mid = (start+end)/2;
        if(arr[mid]==val){
            return mid;
        }
        else if(val<arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}
int main(){
    int array[100];
    int n,val,temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "Enter no.";
        cin >> array[i];
    }
    cin >> val;


    cout << binarysearch(n, array, val);

}


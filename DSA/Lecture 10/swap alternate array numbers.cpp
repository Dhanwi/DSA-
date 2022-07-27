#include <iostream>
using namespace std;

void PrintArray(int arr[], int n){
    for (int i=0; i<n ; i++){
        cout<< arr[i]<< " ";
    }cout<< endl;
}

void swapAlternate(int arr[], int n){
    for (int i=0; i<n ; i+=2){

        if(i+1 < n){
           swap(arr[i], arr[i+1]);

        }
    }
}

int main()
{
    int arr[6]={3,8,9,4,5,6};
    int brr[5]={7,0,4,6,2};

    swapAlternate(arr, 6);
    PrintArray(arr, 6);

    swapAlternate(brr, 5);
    PrintArray(brr, 5);

    return 0;
}

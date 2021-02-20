#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    int* in_arr = new int[n-1];

    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }

    for(int i=0; i<n-1; i++){
        cin>>in_arr[i];
        arr[in_arr[i]-1] = 0;
    }

    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            cout<<arr[i];
        }
    }




}
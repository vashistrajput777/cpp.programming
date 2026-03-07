#include<iostream>
using namespace std;
int main(){
    int arr[5]= {5,6,2,9,3};
    int max=arr[0];
    for(int i=0;i<=4;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The maximum element in the array is: "<<max;
}
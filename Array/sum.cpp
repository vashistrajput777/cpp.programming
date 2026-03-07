#include<iostream>
using namespace std;
int main(){
    int arr[5]= {5,6,2,9,3};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum+=arr[i];
    }
    cout<<"The sum of the array is: "<<sum;
}
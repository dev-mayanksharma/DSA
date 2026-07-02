#include<bits/stdc++.h>
using namespace std;
void selection(int arr[], int n){
for(int i =0;i<n-1;i++){
    int mini = i;
    for(int j=i;j<n;j++){
    if(arr[mini] > arr[j]){
        mini = j;

    }
}

int temp = arr[i];
arr[i] = arr[mini];
arr[mini] = temp;


}
}

int main(){
    cout << "Enter the dimension of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "now enter the values of array ";
    for(int i=0;i<n;i++){
        
        cin >> arr[i];


    }

    selection(arr, n);
    for(int i = 0; i<n;i++){
        cout << arr[i]<<" ";

    } 
   return 0;

}

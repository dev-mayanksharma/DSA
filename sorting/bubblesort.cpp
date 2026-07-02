#include<bits/stdc++.h>
using namespace std ;
void bubblesort(int arr[], int n ){

    for (int i =0;i<n;i++){
        int check =0;int newcheck=0;
        for (int j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j] = temp;
                check +=1;
            }
            newcheck += check;
        }
      if (newcheck==check){
        break;
      }
         
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

    bubblesort(arr, n);
    for(int i = 0; i<n;i++){
        cout << arr[i]<<" ";

    } 
   return 0;

}

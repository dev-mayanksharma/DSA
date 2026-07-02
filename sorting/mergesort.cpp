#include<bits/stdc++.h>    // must dry run this 
using namespace std;

void merge(vector<int>& arr , int low, int mid , int high ){
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if(arr[left]<=arr[right]){ // tb tak kaam krega jb tk ek mid se aage nahi aa jata 
            temp.push_back(arr[left]);
            left++;
        } else{
            temp.push_back(arr[right]);
            right++;
        }
    }    
    while (right<=high)   // right sorted side 
    {
        temp.push_back(arr[right]);
        right++;
    }
    while (left<=mid)    // left sorted side 
    {
        temp.push_back(arr[left]);
        left++;
    }
    
    
    
    for (int i = low; i <= high; i++) {   // creating actual array from temp arry 
        arr[i] = temp[i - low];
    }

}


void mergeSort(vector<int> &arr, int low,int high){ // pass by reference , automatic , not like c 
    if (low >= high) return; // condition

    int mid = (low + high) / 2; // will create new mid for each new array  

    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {5, 2, 8,21,5,556,51,516,61,6,8,5,3,45,55, 1, 3};

    mergeSort(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}
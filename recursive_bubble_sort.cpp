#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int idx,int *arr,int n){
    if(idx==n)return;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(idx+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
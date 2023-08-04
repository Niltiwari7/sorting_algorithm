#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int l,int hi){
    int pivot=arr[hi];
    int i=l-1;
    for(int j=l;j<hi;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[hi]);
    return i+1;
}
void quick_sort(int *arr,int l,int hi){
    if(l<hi){
        int pi=partition(arr,l,hi);
        quick_sort(arr,l,pi-1);
        quick_sort(arr,pi+1,hi);

    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
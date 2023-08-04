#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr,int idx,int n){
    if(idx==n)return;
    int key=arr[idx];
   int  j=idx-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    insertion_sort(arr,idx+1,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    insertion_sort(arr,1,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";

}
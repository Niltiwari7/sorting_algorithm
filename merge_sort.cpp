#include<bits/stdc++.h>
using namespace std;

void merge_sort(int *arr,int l,int mid,int hi){
    int n1=mid-l+1;
    int n2=hi-mid;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++){
        arr1[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++){
        arr2[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1  && j<n2){
        if(arr1[i]<arr2[j])arr[k++]=arr1[i++];
        else arr[k++]=arr2[j++];
    }
    while(i<n1){
        arr[k++]=arr1[i++];
    }
    while(j<n2){
        arr[k++]=arr2[j++];
    }

}
void merge(int *arr,int l,int hi){
    if(l<hi){
        int mid=(l+hi)/2;
        merge(arr,l,mid);
        merge(arr,mid+1,hi);
        merge_sort(arr,l,mid,hi);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge(arr,0,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
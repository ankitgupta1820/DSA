#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int target,int size){
    int start=0;
    int end=size-1;
    int mid= start+end/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+end/2;
    }

    return -1;

}
int main(){
    int arr[6]={0,1,2,3,4,5};

    int n=6;
    int index=bs(arr,4,6);
    cout<<index<<endl;

}


//BINARY SEARCH
#include<iostream>
using namespace std;
 int binarysearch(int arr[], int n, int key){
    int high, low, mid;
    low=0, high =n-1;
    while(low<=high){
         mid=(high+low)/2;
         if(arr[mid]==key)
         return mid;
         else if (arr[mid]<key)
         low=mid+1;
         else 
         high=mid-1;
    }
    return -1;
 }

 int main ()
 {
    int arr[]={2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n= 10;
 int key =23;
 int index = binarysearch(arr,n,key);
 if (index!=-1){
   cout<<"element found at index="<<index;
 }
   return 0;
 }


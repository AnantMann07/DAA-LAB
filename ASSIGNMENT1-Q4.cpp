#include <iostream>
using namespace std

int main(){
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = 8;
    int maxSum = arr[0];
    int current = arr[0];
    for(int i=1; i<n; i++){
        if(current < 0) current = arr[i];
        else current += arr[i];
        if(current > maxSum) maxSum = current;
    }
    cout << maxSum << endl;
    return 0;
}

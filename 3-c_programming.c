#include <stdio.h>
void modifyArray(int arr[], int size){
    arr[0] = 10;

}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    modifyArray(arr, 5);
    printf("%d\n", arr[0]);
    return 0;
}
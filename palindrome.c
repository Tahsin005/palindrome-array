#include<stdio.h>
/*If an array arr contains n elements , then check  
if the given is a array is a palindrome or not.*/
int palindrome(int arr[]){
    int i=0;
    int j=4;
    while(i<j){
        if(arr[i] != arr[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
    int arr[5]={1,2,3,2,1};
    if(palindrome(arr)){
        printf("The given array is a palindrome\n");
    }
    else{
        printf("The given array is not a palindrome\n");
    }
    return 0;
}
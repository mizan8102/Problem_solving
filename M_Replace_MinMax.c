#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int max=-100000,index_max;
    int min=100000,index_min;
    for(int i=0;i<a; i++){
        if(arr[i] > max){
            max=arr[i];
            index_max=i;
        }
        if(arr[i]< min){
            min=arr[i];
            index_min=i;
        }
    }
    for(int i=0;i<a;i++){
        if(i==index_max){
            printf("%d ",min);
        }
        else if(i== index_min){
            printf("%d ",max);
        }else{
            printf("%d ",arr[i]);  
        }
    }
    return 0;
}
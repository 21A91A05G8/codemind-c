#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n],c=0,s=0;
    for(int i = 0 ; i < n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>k && s==1){
            break;
        }
        else if(arr[i]>k){
            s++;
        }
        else{
            c++;
        }
    }
    printf("%d",c);
    
}
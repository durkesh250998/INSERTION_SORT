#include<stdio.h>
int main(){
    int array[5]={30,10,40,20,50};
    int n=5,temp=0;
    for(int i=1;i<n;i++){
        temp=array[i];
        int j;
        for(j=i;j>0 && temp<array[j-1];j--){
                        array[j]=array[j-1];
                        }
                        array[j]=temp;
                    }
    for(int j=0;j<5;j++){
        printf("\n%d\n",array[j]);
    }
}
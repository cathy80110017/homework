#include<stdio.h>
int main(){
    int n[10];
    int count;
    scanf("%d",&count);
    for (int i = 0; i < count; i++){
        scanf("%d",&n[i]);      //輸入
    }
    for (int i = 0; i < count; i++){
        int big, small, left, right;
        int data=n[i];
        left=0;
        right=count-1;
        big=n[left];
        small=n[right];
        while (left!=right){
            while (big<data){        //從左邊開始找比data大的值
                left++;
                big=n[left];
            }
            if (left==right){
                break;
            }
            while (small>data){
                right--;
                small=n[right];
            }
        }
        

    }
    

    return 0;
}
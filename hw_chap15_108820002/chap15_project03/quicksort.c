#include<stdio.h>
#include "quicksort.h"


void quicksort(int n[], int a, int b){                   //開頭(a)跟 結尾/基準(b)
    if (a < b) {
        int i = a - 1, j = a;                            //i=開頭前一個, j=開頭
        while (j <= b){                                  //如果j還沒碰到基準
            if (n[j] <= n[b]){                            //如果j小於基準
                i++;
                int r = n[i];
                n[i] = n[j];
                n[j] = r;                                //j跟i的下一個交換   
            }
            j++;
        }
        
        quicksort(n, a, i-1);
        quicksort(n, i+1, b);
    }
}
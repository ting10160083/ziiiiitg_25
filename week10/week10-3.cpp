#include <stdio.h>
int main()
{
    int d[5]={100,200,300,400,500};
    ///一次宣告很多個變數
    for(int i=0;i<5;i++){
        printf("d[%d]:%d\n",i,d[i]);
    }
}

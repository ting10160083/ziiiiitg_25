#include <stdio.h>
int main()
{
    int N=1234567892;///請問個位數是多少
    ///N%10 取餘數 就是個位數
    ///N/10 除10 前面的位數
    while(N>0){
    printf("%d => %d %d \n",N,N/10,N%10);
    N=N/10;///變小
    }
}


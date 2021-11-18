#include <stdio.h>
int a[10000000]={0,0,0,0,};
///a[ ]是個大表格，沒寫的會補0
///外面宣告的變數有較多memory空間
int main()
{   ///依序去找
    int ans=0;
    for(int i=2;i<10000000;i++){
        if(a[i]==0){
            ans++;
            for(int k=i+i;k<10000000;k=k+i) a[k]=1;
        }
    }
    printf("ans: %d",ans);
}

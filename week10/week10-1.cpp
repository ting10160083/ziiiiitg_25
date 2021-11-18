#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);

    int ans=0;///還沒找到任何質數
    for(int n=2;n<=m;n++){
        int bad=0;
        for(int i=2;i<n;i++){
            if(n%i==0) bad=1;
        }
        if(bad==0){
            ans++;///找到了就++
            printf("%d ",n);///找到質數就++
        }
    }
    printf("\nans:%d \n",ans);
}

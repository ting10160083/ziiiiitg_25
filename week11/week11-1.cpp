#include <stdio.h>
int a[10000000]={0,0,0,0};
int main()
{
    int m;
    scanf("%d",&m);

    int ans=0;
    for(int i=2;i<m;i++){
        if(a[i]==0){ ///找到質數i
            printf("%d ",i); ///把i印出來
            ans++;
            for(int k=i+i;k<m;k+=i){
                a[k]=1;
            }
        }
    }
    printf("總共: %d\n",ans);
}


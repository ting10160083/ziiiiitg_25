#include <stdio.h>
int a[10000000]={0,0,0,0};
int main()
{
    int m;
    scanf("%d",&m);

    int ans=0;
    for(int i=2;i<m;i++){
        if(a[i]==0){ ///�����i
            printf("%d ",i); ///��i�L�X��
            ans++;
            for(int k=i+i;k<m;k+=i){
                a[k]=1;
            }
        }
    }
    printf("�`�@: %d\n",ans);
}


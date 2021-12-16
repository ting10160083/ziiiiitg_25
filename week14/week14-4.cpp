///矩陣加法
#include <stdio.h>
int a[10][10],b[10][10],c[10][10];
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){///讀入A
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	///上下不可以合併
	for(int i=0;i<n;i++){///讀入B
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){///算答案
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}

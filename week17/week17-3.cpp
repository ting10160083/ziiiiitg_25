#include <stdio.h>
int main()
{
    int N=1234567892;///�аݭӦ�ƬO�h��
    ///N%10 ���l�� �N�O�Ӧ��
    ///N/10 ��10 �e�������
    int sum=0;
    while(N>0){
        printf("%d => %d %d \n",N,N/10,N%10);
        sum+=N%10;
        N=N/10;///�ܤp
    }
    printf("%d",sum);
}

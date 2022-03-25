#include"stdio.h"

/*int main(){
    int n;
    int k;
    scanf("%d", &n);
    k=n-1;
    for(int i=0; i<n-1; i++){
        for(int j=0; j< 2*n-1; j++){
            if(j == k-i || j == k+i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=0; i<2*n-1; i++) printf("*");
    return 0;
}
*/
void main()
{
	int h;
	printf("Nhap chieu cao tam giac h=");
	scanf("%d",&h);
	for (int i=h;i>0;i--)
	{
		for (int j=1;j<i;j++)
			printf(" ");
		for (int k=1;k<=(2*(h-i)+1);k++)
			if ((k==1)||(k==(2*(h-i)+1))||(i==1)) // dòng này
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
}

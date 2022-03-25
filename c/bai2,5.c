#include<stdio.h>
#include<conio.h>
main()
{    
    int a[50];
    int i,n,tg,max,j,s=0; 
    printf("Nhap vao so phan tu: "); 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {        
        scanf("%d", &a[i]);
    }

//Tinh tong va trung binh cong cac so trong day
    for(i=0;i<n;i++)
    {
        s=s+a[i];
       }
    printf("\nTong cac so trong day la: %d",s);
    printf("\nTrung binh cong cac so trong day la: %f", (float)s/n);
    printf("\n===========================\n");
    printf("Casestudy24h chuc cac ban hoc tot! \n");
    getch();
}
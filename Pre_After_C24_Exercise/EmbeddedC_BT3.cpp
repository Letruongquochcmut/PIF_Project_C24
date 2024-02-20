#include <stdio.h>
#include <conio.h>

void Giatritungphantu(int arr[], int n)
{
    printf("Nhap gia tri tung phan tu:\n");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
}                      

void InMang(int arr[], int n)
{
    printf("arr[] = { ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}

void DiachiMang(int arr[], int n)
{
    printf("Dia chi cua tung phan tu: \n");
    for(int i=0;i<n;i++)
    {
        printf("&arr[%d] = %d\n", i, &arr[i]);
    }
}
void timMinMax(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0]; 
    for (int i = 1; i < n; ++i) {
        if (arr[i] > *max) {
            *max = arr[i]; 
        }
        if (arr[i] < *min) {
            *min = arr[i]; 
        }
    }
}

int main()
{
    int n,min,max;
    int arr[100];
    do
    {
        printf("Nhap so phan tu n: ");
        scanf("%d",&n);
        printf("\n"); 
    } while((n <= 5) || (n > 16));

    printf("Khoi tao mang int arr[%d]\n",n);

    Giatritungphantu(arr, n);

    InMang(arr, n);
    printf("\n");

    DiachiMang(arr, n);
    printf("\n");
    timMinMax(arr,n,&max,&min);
    printf("\nGia tri phan tu be nhat trong mang la %d",min);
    printf("\nGia tri phan tu lon nhat trong mang la %d",max);

    getch();
    return 0;
}

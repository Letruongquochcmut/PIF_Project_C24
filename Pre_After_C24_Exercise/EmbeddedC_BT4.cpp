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

float TrungBinh(int arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n; }

int main()
{
    int n;
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
    printf("Gia tri trung binh cua mang la: %.3f\n", TrungBinh(arr, n));
    getch();
    return 0;
}

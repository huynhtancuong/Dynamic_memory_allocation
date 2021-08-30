#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] ={2, 3, 5, 2, 9};
    int* ptr;
    ptr = (int*)malloc(5*sizeof(int)); //cap phat cho con tro ptr mot vung nho co 5*4 = 20 bytes
    if (ptr==NULL)
    {
        printf("Cap phat bo nho that bai");
        return 99999;
    }
    else
    {
        printf("Cap phat bo nho thanh cong\n");

        for (int i = 0; i<5; i++) //gan gia tri cua mang arr -> ptr
        {
            *(ptr+i) = arr[i]; // co the thay *(ptr+i) thanh ptr[i]
        }

        for (int i=0; i<5; i++)
        {
            printf("%d ", *(ptr+i));
        }
    }
    return 0;
}

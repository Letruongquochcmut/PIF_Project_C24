#include <stdio.h>
#include <stdint.h>
#include <string.h>

struct infor
{
    char name[32];
    char mssv[9]; 
    char course_c[4]; 
};

void infor_input(struct infor *stu_infor)
{
    printf("Nhap ho va ten sinh vien: ");
    scanf(" %[^\n]%*c", stu_infor->name); 

    printf("Nhap ma so sinh vien: ");
    scanf(" %8s", stu_infor->mssv);

    printf("Nhap khoa C da tham gia: ");
    scanf(" %3s", stu_infor->course_c); 

    printf("\n");
}

void infor_print(const struct infor *stu_infor)
{
    printf("Ho va ten sinh vien: %s\n", stu_infor->name);
    printf("Ma so sinh vien: %s\n", stu_infor->mssv);
    printf("Khoa C ma sinh vien da tham gia: %s\n", stu_infor->course_c);
}

int main(void)
{
    struct infor LTQ_info;
    infor_input(&LTQ_info);
    infor_print(&LTQ_info);

}


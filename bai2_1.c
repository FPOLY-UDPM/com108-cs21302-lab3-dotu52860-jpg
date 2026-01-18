/******************************************************************************
 * Họ và tên: [Đỗ Minh Tú]
 * MSSV:      [PS48536]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
//  2.1 BẬC 1 
//  Phương trình có dạng ax + b = 0 
//  Input: nhập vào từ bàn phím giá trị của a, b 
//  Output: Hiển thị nghiệm của phương trình 
//  Biết rằng: 
//  Nếu a == 0,  
//   b == 0: Phương trình có vô số nghiệm 
//   b != 0: Phương trình vô nghiệm 
//  Ngược lại: Phương trình có nghiệm x = -b/a 
 
#include <stdio.h>

int main(){
    double a, b, x;

    // Nhập hệ số
    printf("Nhap a = ");
    scanf("%lf", &a);
    printf("Nhap b = ");
    scanf("%lf", &b);

    // Xét các trường hợp
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        x = -b / a;
        printf("Phuong trinh co nghiem: x = %.2lf\n", x);
    }

    return 0;
}
    // Khai báo biến


    // Nhập dữ liệu


    // Xử lý, tính toán VÀ Hiển thị kết quả


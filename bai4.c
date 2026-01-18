/******************************************************************************
 * Họ và tên: [Đỗ Minh Tú]
 * MSSV:      [PS48536]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
    int soDien;
    double tienDien = 0;

    // Nhập số điện tiêu thụ
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soDien);

    if (soDien <= 50) {
        tienDien = soDien * 1678;
    } 
    else if (soDien <= 100) {
        tienDien = 50 * 1678 
                 + (soDien - 50) * 1734;
    } 
    else if (soDien <= 200) {
        tienDien = 50 * 1678 
                 + 50 * 1734
                 + (soDien - 100) * 2014;
    } 
    else {
        tienDien = 50 * 1678
                 + 50 * 1734
                 + 100 * 2014
                 + (soDien - 200) * 2536;
    }

    // Hiển thị tiền điện
    printf("So tien dien phai dong: %.0lf VND\n", tienDien);

    return 0;
}
    // Khai báo biến


    // Nhập dữ liệu


    // Xử lý, tính toán VÀ Hiển thị kết quả


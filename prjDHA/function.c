#include "function.h"
#include <stdio.h>

void inMenu() {
    printf("\n--- Quan Ly Danh Muc Hàng Hóa ---\n");
    printf("1. Hien thi danh sach danh muc\n");
    printf("2. Thêm danh muc\n");
    printf("3. Sua danh muc\n");
    printf("4. Xóa danh muc\n");
    printf("5. Tìm kiem danh muc\n");
    printf("6. sap xep danh muc theo ten\n");
    printf("7. kiem tra du lieu nhap danh muc\n");
    printf("8. luu du lieu\n");
    printf("9. Thoat\n");
}
void hienThiDanhMuc(Product product[], int n) {
    if (n == 0) {
        printf("Danh muc hien tai chua có hàng hóa nào.\n");
        return;
    }
    printf("\n| %-10s | %-20s | %-10s | %-10s |\n", "Mã Hàng", "Loai Hàng", "Tên Hàng", "So Luong", "Giá");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| %-10s | %-10s | %-20s | %-10d | %-10.2f |\n", product[i].productID,product[i].categoryID, product[i].productName, product[i].quantity, product[i].price);
    }
}

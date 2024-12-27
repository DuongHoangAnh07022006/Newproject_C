#include <stdio.h>
#include "function.h"
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Product Product[100];
	//soluong hang  hien tai
	int n = 0;
	int choose;
	char productID[10], productName[50], categoryID[20];
    int quantity;
    float price;
    while (1) {
	    inMenu();
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choose); 
        switch (choose){
        	case 1:
        		hienThiDanhMuc(Product product[], int n);
        		break;
        	case 2:
        		break;
			case 3:
        		break;
			case 4:
        		break;
			case 5:
        		break;
        	case 6:
        		break;
        	case 7:
        		break;
        	case 8:
        		break;
            case 9:
        		break;        						
		}   	
	}
	return 0;
}


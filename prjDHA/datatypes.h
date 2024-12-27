#include <stdbool.h>
// cau truc 
typedef struct Product{
	//ma san pham
	char productID[10];
	//loai san pham
	char categoryID[10];
	//ten san pham
	char productName[50];
	//so luong
	int quantity;
	//gia
	int price;
}Product;


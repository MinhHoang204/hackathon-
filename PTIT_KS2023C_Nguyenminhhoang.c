#include<stdio.h>
#include<string.h>
struct todoList{
	int id;
	char startDate[50];
	char endDate[50];
	char content[100];
	bool status;
};
int main(){
	int list;
	printf("Danh sach todoList:\n");
	printf("Nhap vao so luong todo:\n");
	scanf("%d", &list);
	do{
		printf("************MENU***********\n");
		printf("1. In toan bo danh sach Todo co o trong mang todoList tren cung mot mang:\n");
		printf("2. Thuc hien chuc nang them moi todo vao vi tri cuoi cung cua todoList, thong tin todo moi do nguoi dung nhap vao:\n");
		printf("3. Nhap vao noi dung cua todo muon chinh sua:\n");
		printf("4. Nhap vao noi dung cua todo muon xoa:\n");
		printf("5. Sap xep va in ra danh sach todoList:\n");
		printf("6. Tim kiem va in ra thong tin cua Todo:\n");
		printf("7. Tim kiem va in ra toan bo thong cua cac todo theo status:\n");
		printf(" Nhap lua chon cua ban:\n");
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 1:
				int arr;
				int i;
				int size = sizeof arr/ sizeof arr[0];
				printf("In ra danh sach tren cung mot mang:\n");
				for(int i; i < size; i++){
					scanf("%d", &arr[i]);
				}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				prinf("Nhap todo muon xoa:\n");
				char charToDelete;
				scanf("%d", &charToDelete);
				deleteCharacter(input, charToDelete);
				printf("Sau khi xoa todo'%c':%s\n", charTodelete, input); 
				break;
			case 5:
				int choice 1;
				printf("Sap xep tang dan:\n");
				printf("Lua chon sap xep:\n"); 
				scanf("%d", &choice1);
				decrease(a, current);
				printf("n");
				countArrange = 1; 
				break;
			case 6:
				printf("Nhap so can tim:\n");
				scanf("%d", &find);
				printf("Cac so tim duoc:\n");
				start = 0;
				end = n;
				while (start <= end){
					mid = (start + end)/2;
					if(arr[mid] < find){
						printf("arr[%d]%d\n", mid, find);
						break; 
					} else if (arr[mid] < find){
						start = mid + 1; 
					} else{
						end = mid - 1; 
					} 
				} 
				break;
			case 7:
				int find_value;
				printf("Nhap so can tim:\n");
				scanf("%d", &find_value);
				printf("Vi tri cua cac phan tu trong mang la:\n");
				if (countArrange == 0){
					for (int i = 0; i < current; i++){
						if (a[i] == find_value){
							printf("%d/t", i);
							count++; 
						} 
					} 
					printf("So phan tu duoc tim thay trong mang la %d\n", count); 
				} 
				break;	
		} 
	} while (choice! = 7); 
	return 0; 
} 

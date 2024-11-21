#include <stdio.h>

int main() {
	// Bai tap 1
	char name[100]; 
	printf("Nhap ten cua ban : ");
	gets(name);
	printf("Xin chao %s", name);
	
	// Bai tap 2
	float celsius, fahrenheit;
	printf("\n Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);
 	fahrenheit = (celsius * 9 / 5) + 32;
	printf("Nhiet do %.2f do Celsius tuong duong %.2f do Fahrenheit.\n", celsius, fahrenheit);

 	// Bai tap 3
 	const float PI = 3.14;
 	int radius;
 	float circumference_tron, area_tron;
 	printf("Nhap ban kinh hinh tron: ");
 	scanf("%d",&radius);
 	circumference_tron = 2 * PI * radius;
 	area_tron = PI * radius * radius;
 	printf("Chu vi hinh tron la: %.2f\n", circumference_tron);
    printf("Dien tich hinh tron la: %.2f\n", area_tron);
    
    // Bai tap 4
    float toan, van, anh, tong, trungBinh;
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem van: ");
    scanf("%f", &van);
    printf("Nhap diem anh: ");
    scanf("%f", &anh);
 	tong = toan + van + anh;
    trungBinh = tong / 3;
    printf("Tong diem: %.2f\n", tong);
    printf("Diem trung binh: %.2f\n", trungBinh);

    // Bai tap 6
    float canhDay, chieuCao, dienTich;
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canhDay);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieuCao);
    dienTich = 0.5 * canhDay * chieuCao;
    printf("Dien tich cua tam giac la: %.2f\n", dienTich);
    
    // Bai tap 8
    int num,reverse;
    printf("Moi ban nhap so co 4 chu so\n");
    scanf("%d",&num);
    int nghin = num / 1000;
    int tram = num % 1000 / 100;
    int chuc = num % 100 / 10;
    int dvi = num % 10;
    printf("So dao nguoc la: %d %d %d %d", dvi, chuc, tram, nghin);
    
	return 0;
}

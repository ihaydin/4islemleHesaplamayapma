#include <stdio.h>
#include <stdlib.h>
 
int main(){
	int islem;
	float ilkSayi , ikinciSayi ;//işlem yapılacak degerleri tanımladım
	//acıklama yapıldı
	printf("This program makes arithmetic operations on two real numbers.nn");
 
	printf("Enter the first number   : "); //ilk sayının girilmesi istendi.
	scanf("%f", &ilkSayi);					//ilk sayı degeri girildi.
	printf("Enter the second number  : ");	//ikinci sayının girilmesi istendi.
	scanf("%f", &ikinciSayi);				//ikinci sayı degeri girildi.
 
	printf("Choose the arithmetic operation:nn"); //acıklama yapıldı.
	printf("(1)Add  (2)Subtract  (3)Multiply  (4)Divide ");	//secilecek işlemler belirtildi.
 
	printf("nChoice : "); //secilen durum
	scanf("%d",&islem);	//hangi degerin secilecegi istendi.
 
	switch (islem){
	case 1:			//1.durum için gerekli işlemler yapıldı ve konsola yazdırıldı.
		printf("%.1f + %.1f = %.1f", ilkSayi, ikinciSayi, ilkSayi + ikinciSayi);
		break;
 
	case 2:			//2.durum için gerekli işlemler yapıldı ve konsola yazdırıldı.
		printf("%.1f - %.1f = %.1f", ilkSayi, ikinciSayi, ilkSayi - ikinciSayi);
		break;
 
	case 3:			//3.durum için gerekli işlemler yapıldı ve konsola yazdırıldı.
		printf("%.1f * %.1f = %.1f", ilkSayi, ikinciSayi, ilkSayi * ikinciSayi);
		break;
 
	case 4:			//4.durum için gerekli işlemler yapıldı ve konsola yazdırıldı.
		if (ikinciSayi==0){
			printf("Enter the second number : ");		//bu bölümde eger bölen sayı 0 a eşit ise 
			scanf("%f", &ikinciSayi);					//ikinci sayının tekrar girilmesi istendi.
		
			printf("%.1f / %.1f = %.2f", ilkSayi, ikinciSayi, ilkSayi / ikinciSayi);
		}
		else {		//bölenin 0 a eşit olmadıgı durumda calısacak kısım.
			printf("%.1f / %.1f = %.2f", ilkSayi, ikinciSayi, ilkSayi / ikinciSayi);
		}
		break;
 
	}
	system("PAUSE");
	return 0;
}

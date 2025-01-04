//Basit ATM yapısı do-while döngüsü ve switch-case ile.
#include<stdio.h>
int main(){
	int islem;
	int tekrar=1;                           //döngünün kontrol değişkeni 'tekrar'.
	char bakiye[]="3500 TL niz mevcut.";
	
	do{
	printf("Ziraat Bankasina Hosgeldiniz.\n");
	printf("Lutfen bir islem seciniz.\n\n");
	printf("1-Para Cekme\n2-Para Yatirma\n3-Bakiye Sorgulama\n4-Havale\n5-Kart Iade\n\n");
	scanf("%d",&islem);
	
		if( islem<1 || islem>5){			 				       //belirli aralıktaki işlemlerden farklı bir sayı girilince döngüyü tekrarlar continue ile.
			printf("Gecersiz giris! Lutfen tekrar deneyin.\n\n");
			continue;						                      //contunie can alıcı yer burada döngünün tekrarlamasını sağlıyor.
		} 														  //continue komutu: Geçersiz giriş yapıldığında döngü hemen bir sonraki adımı atlar ve kullanıcıdan tekrar giriş bekler.
	
	switch(islem){												//switch-case yapısı.
		
		case 1:
			printf("Lutfen cekmek istediginiz miktari yaziniz:\n");
			break;
		case 2:
			printf("Lutfen yatirmak istediginiz miktari giriniz:\n");
			break;
		case 3:	
			printf("%s\n",bakiye);
			break;
		case 4:
			printf("Havale yapmak istediginiz hesabin IBAN i:\n");
			break;
		case 5:
			printf("Kartiniz iade ediliyor.\n");
			tekrar=0;											//çıkış yapılıyor tekrar kontrol değişkeni 0 a atanıp.								
			break;
	}
		if(islem!=5){
			printf("\nBaska bir islem yapmak ister misiniz?:(Evet:1),(Hayir:0)"); //burası çok önemli kullanıcıdan tekrar değişkeninin değerini alıp döngüyü bitiriyor kullanıcı 0 girerse çünkü buraya kadar tekrar=1 hep.
			scanf("%d",&tekrar);                                                 //farklı yollarla da bitirelibilir case 1 2 3 ve 4. Ama burada bunu kullandık.
		}

} while(tekrar==1); 											//Bu koşul döngünün devam etmesini sağlar. Eğer kullanıcı case 5'i seçerse, tekrar değişkeni 0 olacak ve döngü sonlanacaktır.
		
	printf("Iyi gunler dileriz..");
	
	return 0;
}

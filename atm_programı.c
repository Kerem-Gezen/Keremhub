//Basit ATM yapýsý do-while döngüsü ve switch-case ile.
#include<stdio.h>
int main(){
	int islem;
	int tekrar=1;                           //döngünün kontrol deðiþkeni 'tekrar'.
	char bakiye[]="3500 TL niz mevcut.";
	
	do{
	printf("Ziraat Bankasina Hosgeldiniz.\n");
	printf("Lutfen bir islem seciniz.\n\n");
	printf("1-Para Cekme\n2-Para Yatirma\n3-Bakiye Sorgulama\n4-Havale\n5-Kart Iade\n\n");
	scanf("%d",&islem);
	
		if( islem<1 || islem>5){			 				       //belirli aralýktaki iþlemlerden farklý bir sayý girilince döngüyü tekrarlar continue ile.
			printf("Gecersiz giris! Lutfen tekrar deneyin.\n\n");
			continue;						                      //contunie can alýcý yer burada döngünün tekrarlamasýný saðlýyor.
		} 														  //continue komutu: Geçersiz giriþ yapýldýðýnda döngü hemen bir sonraki adýmý atlar ve kullanýcýdan tekrar giriþ bekler.
	
	switch(islem){												//switch-case yapýsý.
		
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
			tekrar=0;											//çýkýþ yapýlýyor tekrar kontrol deðiþkeni 0 a atanýp.								
			break;
	}
		if(islem!=5){
			printf("\nBaska bir islem yapmak ister misiniz?:(Evet:1),(Hayir:0)"); //burasý çok önemli kullanýcýdan tekrar deðiþkeninin deðerini alýp döngüyü bitiriyor kullanýcý 0 girerse çünkü buraya kadar tekrar=1 hep.
			scanf("%d",&tekrar);                                                 //farklý yollarla da bitirelibilir case 1 2 3 ve 4. Ama burada bunu kullandýk.
		}

} while(tekrar==1); 											//Bu koþul döngünün devam etmesini saðlar. Eðer kullanýcý case 5'i seçerse, tekrar deðiþkeni 0 olacak ve döngü sonlanacaktýr.
		
	printf("Iyi gunler dileriz..");
	
	return 0;
}

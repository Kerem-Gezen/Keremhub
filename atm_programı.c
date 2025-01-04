//Basit ATM yap�s� do-while d�ng�s� ve switch-case ile.
#include<stdio.h>
int main(){
	int islem;
	int tekrar=1;                           //d�ng�n�n kontrol de�i�keni 'tekrar'.
	char bakiye[]="3500 TL niz mevcut.";
	
	do{
	printf("Ziraat Bankasina Hosgeldiniz.\n");
	printf("Lutfen bir islem seciniz.\n\n");
	printf("1-Para Cekme\n2-Para Yatirma\n3-Bakiye Sorgulama\n4-Havale\n5-Kart Iade\n\n");
	scanf("%d",&islem);
	
		if( islem<1 || islem>5){			 				       //belirli aral�ktaki i�lemlerden farkl� bir say� girilince d�ng�y� tekrarlar continue ile.
			printf("Gecersiz giris! Lutfen tekrar deneyin.\n\n");
			continue;						                      //contunie can al�c� yer burada d�ng�n�n tekrarlamas�n� sa�l�yor.
		} 														  //continue komutu: Ge�ersiz giri� yap�ld���nda d�ng� hemen bir sonraki ad�m� atlar ve kullan�c�dan tekrar giri� bekler.
	
	switch(islem){												//switch-case yap�s�.
		
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
			tekrar=0;											//��k�� yap�l�yor tekrar kontrol de�i�keni 0 a atan�p.								
			break;
	}
		if(islem!=5){
			printf("\nBaska bir islem yapmak ister misiniz?:(Evet:1),(Hayir:0)"); //buras� �ok �nemli kullan�c�dan tekrar de�i�keninin de�erini al�p d�ng�y� bitiriyor kullan�c� 0 girerse ��nk� buraya kadar tekrar=1 hep.
			scanf("%d",&tekrar);                                                 //farkl� yollarla da bitirelibilir case 1 2 3 ve 4. Ama burada bunu kulland�k.
		}

} while(tekrar==1); 											//Bu ko�ul d�ng�n�n devam etmesini sa�lar. E�er kullan�c� case 5'i se�erse, tekrar de�i�keni 0 olacak ve d�ng� sonlanacakt�r.
		
	printf("Iyi gunler dileriz..");
	
	return 0;
}

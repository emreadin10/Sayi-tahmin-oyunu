#include <iostream> //Okumayý ve standart akýþlara yazmayý denetleyen nesneler bildirir.
#include <stdlib.h>  //Dinamik bellek yönetimi, rastgele sayý üretimi, ortamla iletiþim, tamsayý aritmetik, arama, sýralama ve dönüþtürme dahil olmak üzere çeþitli genel amaçlý iþlevleri tanýmlar.
#include <time.h> //Tarih ve saat bilgilerini almak ve deðiþtirmek için iþlev tanýmlarýný içerir.
using namespace std; //Eðer programýmýz boyunca cout nesnesi çokça kullanýlacaksa namespace tanýmlamasý programýn en basýnda yazýlýp tüm program boyunca bütün fonksiyonlardan eriþilmesine olanak saðlamýþ olur.

int main (){ //Ana fonksiyonudur.
	int sayi=0; //Bilgisayar tarafýnda oluþturulacak 4 basamaklý rakamlarý birbirinden farklý sayýnýn atandýðý deðiþkenin integer olarak tanýmlamasýdýr.
	int tahmin=0; //Kullanýcý tarafýnda tahmin edilecek 4 basamaklý sayýnýn atandýðý deðiþkenin integer olarak tanýmlamasýdýr.
	int dizi[4]; //Bilgisayar tarafýndan oluþturulacak 4 basamaklý sayýnýn, rakamlarýnýn atandýðý 4 elemanlý dizi integer olarak  tanýmlamasýdýr.
	string basamak [4] = {"Birler","Onlar","Yuzler","Binler"}; //Basamak deðerlerinin isimlerinin ve adetlerinin sabit dizi olarak tanýmlanmasýdýr.
	int flag=0; //Bilgisayar tarafýndan oluþturulacak, 4 basamaklý sayýnýn rakamlarý farklý olana kadar deðiþtirmesini saðlayacak bayraðýn integer olarak  tanýmlamasýdýr. 
	int e=0; //Bilgisayarýn oluþturduðu sayýnýnn kullanýcý tarafýndan tüm basamaklarýn doðru olduðunun anlaþýlmasý için oluþturulan deðiþkenin integer olarak tanýmlamasýdýr.
	int secenek=0; //Oyun tercihinin seçilmesi için oluþturulan deðiþkenin integer olarak tanýmlamasýdýr.
	cout << " -------------------------------------------------- \n"; //Oyun arayüzü için ekrana '-' iþaretinin yazýlmasý ve bir satýr aralýk vermesi için yazýlmýþtýr.
	cout << " --------------- OYUNA  HOSGELDINIZ --------------- \n"<<endl; //Oyun arayüzü için ekrana 'OYUNA  HOSGELDINIZ' yazýlmasý ve iki satýr aralýk vermesi için yazýlmýþtýr.
	while(flag==0)  { //'flag' deðiþkeni 0 ise sonsuz döngü baþlatýlýr. Bu döngünün amacý bilgisayar tarafýndan rakamlarý farklý 4 basamaklý sayý üretilebilmesi için yazýlmýþtýr.
		srand(time(0)); //Rastgele sayý üretirken her seferinde farklý sayý üretmesini saðlamaktadýr.
		sayi=rand() % 8854+ 1023; //Rastgele üretilecek sayýnýn, rakamlarý farklý maksimum (9876) ve minimum deðeri (1023) aralýðýnda üretmesi ve bu üretilen sayýnýn sayi deðiþkenine atanmasý için yazýlmýþtýr.
		dizi[3]=sayi/1000; //4 basamaklý sayýnýn binler basamaðýnýn tespiti için 'sayi' deðiþkeni bine bölünür ve 'dizi' adlý dizinin 3 elemaný olarak atanýr. 
		dizi[2]=(sayi%1000)/100; //4 basamaklý sayýnýn yüzler basamaðýnýn tespiti için 'sayi' deðiþkeninin 1000 bölümünden kalan sayý 100 bölünür ve 'dizi' adlý dizinin 2 elemaný olarak atanýr. 
		dizi[1]=((sayi%1000)%100)/10; //4 basamaklý sayýnýn onlar basamaðýnýn tespiti için 'sayi' deðiþkeninin ilk olarak 1000 bölümünden kalan sayý sonrasýnda 100 bölümünden kalan sayý, son olarak ise 10 bölünür ve 'dizi' adlý dizinin 1 elemaný olarak atanýr. 
		dizi[0]=sayi%10; //4 basamaklý sayýnýn birler basamaðýnýn tespiti için sayi deðiþkeni 10 bölümünden kalan sayý tespit edilir ve 'dizi' adlý dizinin 0 elemaný olarak atanýr. 
		flag=1; //Rakamlarý farklý olmasý için oluþturulan sonsuz dögðden çýkýlmasý için 'flag' deðiþkenine 1 deðeri atanýr.
		for(int i=0;i<3;i++){ //Integer 'i' deðiþkeni 0 deðeri ile baþlatýlýr ve 'i' deðiþkeni 3 olana kadar birer birer artýlmasýný saðlayan döngü oluþturulur.
			for(int j=i;j<3;j++){ //Integer 'j' deðiþkeni 'i' deðeri ile baþlatýlýr ve 'j' deðiþkeni 3 olana kadar birer birer artýlmasýný saðlayan döngü oluþturulur.
				if(dizi[i]==dizi[j+1]){ //Tüm basamak deðerleri birbirleriyle eþitliðine bakýlmasý için oluþturulmuþtur. 
					flag=0; // Eðer birbirlerine eþit olan sayý varsa while döngüsüne tekrar girilir ve yeni sayý oluþturulmasý beklenir.
					break; //Oluþturulan for döngüleri tamamlandýktan sonra atlama gerçekleþtirmesi için yazýlmýþtýr.
				}
			}
		}
	}
    //cout<<endl<<sayi<<endl; //Test amaçlý bilgisayar tarafýndan tutulan sayýnýn ekranda yazýlabilmesi için býrakýlmýþtýr.
 	cout << "1- Bilgisayarin tuttugu sayiyi tahmin et. \n"; //Ekrana '1- Bilgisayarin tuttugu sayiyi tahmin et.' yazmasý ve bir satýr boþluk býrakmasý için yazýlmýþtýr.
 	cout << "2- Tuttugunuz sayiyi bilgisayar tahmin etsin. \n"<<endl;//Ekrana '2- Tuttugun sayiyi bilgisayar tahmin etsin.' yazmasý ve iki satýr boþluk býrakmasý için yazýlmýþtýr.
 	cout << "Tercihiniz :"; //Ekrana 'Tercihiniz :' yazmasý için yazýlmýþtýr.
 	cin >> secenek; //Kullanýcýnýn oyun seçenekleri için arayüzde yazýlan 1. ve 2. seçeneklerin tercihinin atanacaðý deðiþkendir.
 	cout<<endl<<endl; //Arayüzde 2 satýr boþluk için yazýlmýþtýr.
 //Kullanýcýnýn oyun seçenekleri için yazdýklarý deðer 'secenek' deðiþkenine atanmýþtý. Bu deðiþkene göre kullanýcýnýn tuttuðu sayýyý bilgisayarýn tahmin etmesi için kullanýlan yapýdýr.
 	switch(secenek){ //Kullanýcýnýn oyun seçenekleri için yazdýklarý deðer 'secenek' deðiþkenine atanmýþtý. Bu deðiþkene göre bilgisayarýn tuttuðu sayýyý tahmin etmek için kullanýlan yapýdýr. 
  		case 1: { //Eðer kullanýcý bilgisayarýn tuttugu sayýyý tahmin etmek istiyorsa 'secenek' deðiþkenine 1 deðeri atamasý gerekmektir. Eðer kullanýcý 1 deðerini atamýþsa bu fonsiyon gerçekleþmektedir.
			int tahmin1[4]; //Kullanýcý tarafýnda yazýlan 4 basamaklý sayýnýn, rakamlarýnýn atandýðý 4 elemanlý dizi integer olarak  tanýmlamasýdýr.
			int flag1=0; //Bilgisayar tarafýndan oluþturulan sayýnýn kullanýcý tarafýndan doðru bilinene kadar imkan saðlayacak bayraðýn integer olarak  tanýmlamasýdýr.
			while (flag1==0){//Bilgisayar tarafýndan oluþturulan sayýnýn kullanýcý tarafýndan doðru bilinene kadar imkan saðlayacak döngüdür.
				cout << "Tahmin ettiginiz 4 basamakli sayiyi giriniz:"; //Arayüze 'Tahmin ettiginiz 4 basamakli sayiyi giriniz:' yazmasý için yazýlmýþtýr.
				cin>>tahmin; //Kullanýcýnýn tahmin edeceði sayýnýn yazýlmasý ve 'tahmin' deðiþkenine atanmasý için yazýlmýþtýr.
				cout<<endl; //Arayüzde 1 satýr boþluk için yazýlmýþtýr.
				if (tahmin<999 || tahmin>10000){ //Kullanýcý tarafýndan 4 basamaklý sayý girilmediðinde uyarmasý ve tekrar sayý girmesi için yazýlmýþtýr.
					cout<<" ----- Hatali sayi girdiniz! ----- \n"; //Kullanýcý tarafýndan 4 basamaklý sayý girilmediðinde arayüzde 'Hatali sayi girdiniz!' yazýsý ile uyarmasý için yazýlmýþtýr.
					tahmin=0; //Kullanýcý tarafýndan girilen sayý yerine 0 deðeri atanmasý için yazýlmýþtýr.
					flag1=0; //Kullanýcý tarafýndan 4 basamaklý sayý girilmediðinde tekrar sayý girmesi için sonsuz döngüye dönülmesi için yazýlmýþtýr.
		 		}
				else { //Kullanýcý tarafýndan girilen sayý 4 basamklý ise sonsuz döngüden çýkýlmasý için yazýlmýþtýr.
					flag1=1; //Sonsuz döngüden çýkýlmasý için 'flag1' deðiþkenine 1 deðeri atanýr.
				}
			tahmin1[3]=tahmin/1000; //Kullanýcý tarafýndan girilen 4 basamaklý sayýnýn binler basamaðýnýn tespiti için 'sayi' deðiþkeni bine bölünür ve 'dizi' adlý dizinin 3 elemaný olarak atanýr. 
			tahmin1[2]=(tahmin%1000)/100; //Kullanýcý tarafýndan girilen 4 basamaklý sayýnýn yüzler basamaðýnýn tespiti için 'sayi' deðiþkeninin 1000 bölümünden kalan sayý 100 bölünür ve 'dizi' adlý dizinin 2 elemaný olarak atanýr.
			tahmin1[1]=((tahmin%1000)%100)/10; //Kullanýcý tarafýndan girilen 4 basamaklý sayýnýn onlar basamaðýnýn tespiti için 'sayi' deðiþkeninin ilk olarak 1000 bölümünden kalan sayý sonrasýnda 100 bölümünden kalan sayý, son olarak ise 10 bölünür ve 'dizi' adlý dizinin 1 elemaný olarak atanýr.
			tahmin1[0]=tahmin%10; //Kullanýcý tarafýndan girilen 4 basamaklý sayýnýn birler basamaðýnýn tespiti için sayi deðiþkeni 10 bölümünden kalan sayý tespit edilir ve 'dizi' adlý dizinin 0 elemaný olarak atanýr. 
			cout << "Sonuc: \n"; //Arayüze sayýlarýn eþiliðinin sonuçlarýnýn sunulmasý için 'Sonuc:' yazdýrlýr ve bir satýr boþluk býraktýrýlýr.
			for(int l=0;l<4;l++){ //Integer 'l' deðiþkeni 0 deðeri ile baþlatýlýr ve 'l' deðiþkeni 4 olana kadar birer birer artýlmasýný saðlayan döngü oluþturulur.
				if(dizi[l]==tahmin1[l]){ //Kullanýcý tarafýndan girilen 4 basamaklý sayý ile bilgisayar tarafýnda oluþturulan 4 basamaklý sayýnýnn basamaklarýnda bulunan sayýlar eþit ise; 
					cout << basamak[l] << " basamagi degeri: + \n"; //Arayüze 'basamak' dizisinde bulunan basamak isimleri ve 'basamagi degeri: +' yazmasý için yazýlmýþtýr.
					e=e+1; //4 basamaklý sayýlar eþit ise tüm basamaklarda eþit demektir. Bunun tespitinin yapýlmasu için her + deðeri geldiðinde e deðiþkeni bir artacaktýr.
				}
				else if(dizi[l]!=tahmin1[l]) { //Kullanýcý tarafýndan girilen 4 basamaklý sayý ile bilgisayar tarafýnda oluþturulan 4 basamaklý sayýnýnn basamaklarýnda bulunan sayýlar eþit deðil ise;
				cout << basamak[l] << " basamagi degeri: - \n"; //Arayüze 'basamak' dizisinde bulunan basamak isimleri ve 'basamagi degeri: -' yazmasý için yazýlmýþtýr.
				}
			}
			cout<<endl<<endl; //Arayüzde iki satýr boþluk býrakýlmasý için yazýlmýþtýr.
			if (e==4){ //Eðer 'e' deðiþkeni 4'e eþit ise yani 4 basamakda birbirine eþittir. Kullanýcý sayýyý tahmin etmiþtir. 
				cout << "-------------- Tebrikler kazandiniz -------------- \n"; //Arayüzde kullanýcýnýn kazandýðýný belirtmek için 'Tebrikler kazandiniz' yazmasý için yazýlmýþtýr.
			}
			else if (e!=4){ //Eðer 'e2 sayýsý 4'e eþit deðil ise kullanýcý sayýyý tahmin edememiþtir.
				cout << "------------------ Tekrar  dene ------------------ \n"; //Arayüzde kullanýcýnýn tahmin edemediðini belirtmek için 'Tekrar  dene' yazmasý için yazýlmýþtýr.
				flag1=0; //Kullanýcý yeni tahminlerde bulunmasý için 'flag1' deðiþkenine 0 deðeri atanarak sonsuz döngüye dönmesi için yazýlmýþtýr.
			}
			cout<<endl; //Arayüzde bir satýr boþluk býrakýlmasý için yazýlmýþtýr.
			e=0; //Basamak deðerlerinin doðruluðunu saan 'e' deðiþkeni her tahminde sýfýrlanmasý için yazýlmýþtýr.
			}
			
			sayi=0; //Bilgisayar tarafýndan tutulan 4 basamaklý sayý oyunun tekrar oynanmasý sýrasýnda hafýzada kalmamasý için sýfýrlanmýþtýr.
		  	dizi[0]=0; //Bilgisayar tarafýndan tutulan sayýnýn birler basamaðý oyunun tekrar oynanmasý sýrasýnda hafýzada kalmamasý için sýfýrlanmýþtýr.
			dizi[1]=0; //Bilgisayar tarafýndan tutulan sayýnýn onlar basamaðý oyunun tekrar oynanmasý sýrasýnda hafýzada kalmamasý için sýfýrlanmýþtýr.
			dizi[2]=0; //Bilgisayar tarafýndan tutulan sayýnýn yüzler basamaðý oyunun tekrar oynanmasý sýrasýnda hafýzada kalmamasý için sýfýrlanmýþtýr.
			dizi[3]=0; //Bilgisayar tarafýndan tutulan sayýnýn binler basamaðý oyunun tekrar oynanmasý sýrasýnda hafýzada kalmamasý için sýfýrlanmýþtýr. 	
  			break; //case 1'den çýkýlmasý için yazýlmýþtýr.
  		  }
  
  		case 2: {  //Kullanýcýnýn oyun seçenekleri için yazdýklarý deðer 'secenek' deðiþkenine atanmýþtý. Bu deðiþkene göre kullanýcýnýn tuttuðu sayýyý bilgisayarýn tahmin etmesi için kullanýlan yapýdýr.
  			int flag2=0; //Kullanýcý tarafýndan oluþturulan sayýnýn bilgisayar tarafýndan doðru bilinene kadar imkan saðlayacak bayraðýn integer olarak tanýmlamasýdýr.
  			int a=0; //Kullanýcý tarafýndan tutulan sayýnýn, bilgisayar tarafýndan tüm basamaklarýn doðru olduðunun anlaþýlmasý için oluþturulan deðiþkenin integer olarak tanýmlamasýdýr.
  			int pctahmin=0; //Bilgisayar tarafýndan tahmin edilecek 4 basamaklý sayýnýn atandýðý deðiþkenin integer olarak tanýmlamasýdýr.
			char tahmin1[4]; //Bilgisayar tarafýndan tahmin edilecek sayýnýn basamak deðerlerine göre doðru ise +, yanlýþ ise - deðerleri kullanýcý tarafýndan yazýlacaktýr. Basamak deðelerlerine göre yazýlan + ve - deðerlerinin char olarak atandýðý 'tahmin1' dizisinin tanýmlamasýdýr. 
			while (flag2==0){ //Kullanýcý tarafýndan tutulan sayýnýn bilgisayar tarafýndan doðru bilinene kadar imkan saðlayacak döngüdür.
				cout << "Tuttugunuz sayi " << sayi << " ? \n"<<endl; //Arayüzde bilgisayarýn tahmin ettiði sayý yazýlacaktýr.
  				for(int l=0;l<4;l++){ //Integer 'l' deðiþkeni 0 deðeri ile baþlatýlýr ve 'l' deðiþkeni 4 olana kadar birer birer artýlmasýný saðlayan döngü oluþturulur.
  					cout<< basamak[l] << " basamagi degeri : "; //Arayüze 'basamak' dizisinde bulunan basamak isimleri ve 'basamagi degeri:' yazmasý için yazýlmýþtýr.
					cin >> tahmin1[l]; //Kullanýcý tarafýndan biligsayarýn tahmin ettiði sayýnýn tutulan sayý ile ayný olan basamak deðerlerine +, farklý olan basamak deðerlerine - deðeri girilmesi için yazýlmýþtýr.
					if (tahmin1[l]!='+' && tahmin1[l]!='-'){ //Kullanucý, bilgisayarýn tutuðu sayýnýn basamak deðerine + veya - deðeri yazmazsa. 
						cout<<endl<<basamak[l]<<" basamagina hatali giris yaptiniz! \n"<<endl<<"------ Basamak degerlerine + veya - giriniz ------ \n"<<endl; //Hatalý yazýlan basamk deðerinin uyarý olarak arayüze yazacaktýr.
						flag2=0; //Bilgisayar yeni tahminlerde bulunmasý için 'flag2' deðiþkenine 0 deðeri atanarak sonsuz döngüye dönmesi için yazýlmýþtýr.
						}
				}
				cout<<endl<<endl; //Arayüzde 2 satýr boþluk için yazýlmýþtýr.
				for(int l=0;l<4;l++){ //Integer 'L' deðiþkeni 0 deðeri ile baþlatýlýr ve 'l' deðiþkeni 4 olana kadar birer birer artýlmasýný saðlayan döngü oluþturulur.		
					if (tahmin1[l]=='-'){ //Bilgisayarýn tahmin ettiði sayýya kullanýcý tarafýndan basamak analizi yapýlmýþtýr. Yapýlan basamk analizinde eþit olmayan basamaklara - deðeri atanmýþtýr. Bu deðerler 'tahmin1' dizisnde - var ise;
						srand(time(0)); //Rastgele sayý üretirken her seferinde farklý sayý üretmesini saðlamaktadýr.
 						pctahmin=rand() % (9-0+1); //Rastgele üretilecek sayýnýn, rakamlarý farklý maksimum (9) ve minimum deðeri (0) aralýðýnda üretmesi ve bu üretilen sayýnýn 'pctahmin' deðiþkenine atanmasý için yazýlmýþtýr.
						dizi[l]=pctahmin; //Bilgisayar hatalý olan basamak deðeri yerine yeni sayý üretecek ve bu deðeri yeni üretilen deðerle deðiþtirecektir.
					}
					else if(tahmin1[l]=='+') { //Bilgisayarýn tahmin ettiði sayýya kullanýcý tarafýndan basamak analizi yapýlmýþtýr. Yapýlan basamk analizinde eþit olan basamaklara + deðeri atanmýþtýr. Bu deðerler 'tahmin1' dizisnde + var ise;
						a=a+1; //Sayýnýn o basamak deðeri sabit kalarak, 'a' deðeri bir atrýlýmýþtýr.
					}
				}
	    		if (a!=4){ //'a' deðiþkeni 4'e eþit deðilse yani sayýlar eþit deðilse;
					sayi=(1000*dizi[3])+(100*dizi[2])+(10*dizi[1])+dizi[0]; //Bilgisayar hatalý olan basamak deðeri yerine yeni sayý üetmiþti. Bu ürettiði yeni sayýlar ve doðru sayýlar basamak deðerleri ile çarpýlýp toplanarak 'sayi' deðiþkenine atanmýþtýr. 
					flag2 = 0; //Bilgisayar yeni tahminlerde bulunmasý için 'flag2' deðiþkenine 0 deðeri atanarak sonsuz döngüye dönmesi için yazýlmýþtýr.
					a=0; //4 basamaklý sayýnýn basamak deðerleri doðru olduðunda + deðiþkeninin sayýsýna baðlý olarak artan 'a' deðiþkeni sýfýrlanmýþtýr.
				}	
				else if (a==4){ //'a' deðiþkeni 4'e eþit yani sayýlar eþit ise;
					cout<<"--------------- Bilgisayar kazandi --------------- \n"; //Arayüzde 'Bilgisayar kazandi' yazacaktýr.
					flag2=1; //Sonsuz döngüden çýkýlmasý için yazýlmýþtýr.
				}	
			}
   			break; //case 1'den çýkýlmasý için yazýlmýþtýr.
  	      }
  
  		default: { //Kullanýcýnýn oyun seçenekleri için belirtilen 1 veya 2 seçeneðini seçmemesi durumu için yazýlmýþtýr.
			cout << "---------- 1. veya 2. secenegi seciniz! ----------\n"; //Kullanýcýnýn oyun seçenekleri için belirtilen 1 veya 2 seçeneðini seçmemesi durumunda uyarý olarak yazýlmýþtýr.
  		}
	}

	cout<<endl<<endl; //Arayüzde iki satýr boþluk býrakýlmasý için yazýlmýþtýr.
	cout << "-------------------- HOSCAKAL -------------------- \n"<<endl; //Arayüzde oyunun bittiðinin uyarýsý için yazýlmýþtýr.
	cout << "-------------------------------------------------- \n";
	cout << "------------------- HAZIRLAYAN ------------------- \n";
	cout << "------------------- EMRE  ADIN ------------------- \n";
	cout << "------------ linkedin.com/in/emreadin ------------ \n";
	cout << "-------------------------------------------------- \n";
	
	return 0;
}

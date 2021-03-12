#include <iostream> //Okumay� ve standart ak��lara yazmay� denetleyen nesneler bildirir.
#include <stdlib.h>  //Dinamik bellek y�netimi, rastgele say� �retimi, ortamla ileti�im, tamsay� aritmetik, arama, s�ralama ve d�n��t�rme dahil olmak �zere �e�itli genel ama�l� i�levleri tan�mlar.
#include <time.h> //Tarih ve saat bilgilerini almak ve de�i�tirmek i�in i�lev tan�mlar�n� i�erir.
using namespace std; //E�er program�m�z boyunca cout nesnesi �ok�a kullan�lacaksa namespace tan�mlamas� program�n en bas�nda yaz�l�p t�m program boyunca b�t�n fonksiyonlardan eri�ilmesine olanak sa�lam�� olur.

int main (){ //Ana fonksiyonudur.
	int sayi=0; //Bilgisayar taraf�nda olu�turulacak 4 basamakl� rakamlar� birbirinden farkl� say�n�n atand��� de�i�kenin integer olarak tan�mlamas�d�r.
	int tahmin=0; //Kullan�c� taraf�nda tahmin edilecek 4 basamakl� say�n�n atand��� de�i�kenin integer olarak tan�mlamas�d�r.
	int dizi[4]; //Bilgisayar taraf�ndan olu�turulacak 4 basamakl� say�n�n, rakamlar�n�n atand��� 4 elemanl� dizi integer olarak  tan�mlamas�d�r.
	string basamak [4] = {"Birler","Onlar","Yuzler","Binler"}; //Basamak de�erlerinin isimlerinin ve adetlerinin sabit dizi olarak tan�mlanmas�d�r.
	int flag=0; //Bilgisayar taraf�ndan olu�turulacak, 4 basamakl� say�n�n rakamlar� farkl� olana kadar de�i�tirmesini sa�layacak bayra��n integer olarak  tan�mlamas�d�r. 
	int e=0; //Bilgisayar�n olu�turdu�u say�n�nn kullan�c� taraf�ndan t�m basamaklar�n do�ru oldu�unun anla��lmas� i�in olu�turulan de�i�kenin integer olarak tan�mlamas�d�r.
	int secenek=0; //Oyun tercihinin se�ilmesi i�in olu�turulan de�i�kenin integer olarak tan�mlamas�d�r.
	cout << " -------------------------------------------------- \n"; //Oyun aray�z� i�in ekrana '-' i�aretinin yaz�lmas� ve bir sat�r aral�k vermesi i�in yaz�lm��t�r.
	cout << " --------------- OYUNA  HOSGELDINIZ --------------- \n"<<endl; //Oyun aray�z� i�in ekrana 'OYUNA  HOSGELDINIZ' yaz�lmas� ve iki sat�r aral�k vermesi i�in yaz�lm��t�r.
	while(flag==0)  { //'flag' de�i�keni 0 ise sonsuz d�ng� ba�lat�l�r. Bu d�ng�n�n amac� bilgisayar taraf�ndan rakamlar� farkl� 4 basamakl� say� �retilebilmesi i�in yaz�lm��t�r.
		srand(time(0)); //Rastgele say� �retirken her seferinde farkl� say� �retmesini sa�lamaktad�r.
		sayi=rand() % 8854+ 1023; //Rastgele �retilecek say�n�n, rakamlar� farkl� maksimum (9876) ve minimum de�eri (1023) aral���nda �retmesi ve bu �retilen say�n�n sayi de�i�kenine atanmas� i�in yaz�lm��t�r.
		dizi[3]=sayi/1000; //4 basamakl� say�n�n binler basama��n�n tespiti i�in 'sayi' de�i�keni bine b�l�n�r ve 'dizi' adl� dizinin 3 eleman� olarak atan�r. 
		dizi[2]=(sayi%1000)/100; //4 basamakl� say�n�n y�zler basama��n�n tespiti i�in 'sayi' de�i�keninin 1000 b�l�m�nden kalan say� 100 b�l�n�r ve 'dizi' adl� dizinin 2 eleman� olarak atan�r. 
		dizi[1]=((sayi%1000)%100)/10; //4 basamakl� say�n�n onlar basama��n�n tespiti i�in 'sayi' de�i�keninin ilk olarak 1000 b�l�m�nden kalan say� sonras�nda 100 b�l�m�nden kalan say�, son olarak ise 10 b�l�n�r ve 'dizi' adl� dizinin 1 eleman� olarak atan�r. 
		dizi[0]=sayi%10; //4 basamakl� say�n�n birler basama��n�n tespiti i�in sayi de�i�keni 10 b�l�m�nden kalan say� tespit edilir ve 'dizi' adl� dizinin 0 eleman� olarak atan�r. 
		flag=1; //Rakamlar� farkl� olmas� i�in olu�turulan sonsuz d�g�den ��k�lmas� i�in 'flag' de�i�kenine 1 de�eri atan�r.
		for(int i=0;i<3;i++){ //Integer 'i' de�i�keni 0 de�eri ile ba�lat�l�r ve 'i' de�i�keni 3 olana kadar birer birer art�lmas�n� sa�layan d�ng� olu�turulur.
			for(int j=i;j<3;j++){ //Integer 'j' de�i�keni 'i' de�eri ile ba�lat�l�r ve 'j' de�i�keni 3 olana kadar birer birer art�lmas�n� sa�layan d�ng� olu�turulur.
				if(dizi[i]==dizi[j+1]){ //T�m basamak de�erleri birbirleriyle e�itli�ine bak�lmas� i�in olu�turulmu�tur. 
					flag=0; // E�er birbirlerine e�it olan say� varsa while d�ng�s�ne tekrar girilir ve yeni say� olu�turulmas� beklenir.
					break; //Olu�turulan for d�ng�leri tamamland�ktan sonra atlama ger�ekle�tirmesi i�in yaz�lm��t�r.
				}
			}
		}
	}
    //cout<<endl<<sayi<<endl; //Test ama�l� bilgisayar taraf�ndan tutulan say�n�n ekranda yaz�labilmesi i�in b�rak�lm��t�r.
 	cout << "1- Bilgisayarin tuttugu sayiyi tahmin et. \n"; //Ekrana '1- Bilgisayarin tuttugu sayiyi tahmin et.' yazmas� ve bir sat�r bo�luk b�rakmas� i�in yaz�lm��t�r.
 	cout << "2- Tuttugunuz sayiyi bilgisayar tahmin etsin. \n"<<endl;//Ekrana '2- Tuttugun sayiyi bilgisayar tahmin etsin.' yazmas� ve iki sat�r bo�luk b�rakmas� i�in yaz�lm��t�r.
 	cout << "Tercihiniz :"; //Ekrana 'Tercihiniz :' yazmas� i�in yaz�lm��t�r.
 	cin >> secenek; //Kullan�c�n�n oyun se�enekleri i�in aray�zde yaz�lan 1. ve 2. se�eneklerin tercihinin atanaca�� de�i�kendir.
 	cout<<endl<<endl; //Aray�zde 2 sat�r bo�luk i�in yaz�lm��t�r.
 //Kullan�c�n�n oyun se�enekleri i�in yazd�klar� de�er 'secenek' de�i�kenine atanm��t�. Bu de�i�kene g�re kullan�c�n�n tuttu�u say�y� bilgisayar�n tahmin etmesi i�in kullan�lan yap�d�r.
 	switch(secenek){ //Kullan�c�n�n oyun se�enekleri i�in yazd�klar� de�er 'secenek' de�i�kenine atanm��t�. Bu de�i�kene g�re bilgisayar�n tuttu�u say�y� tahmin etmek i�in kullan�lan yap�d�r. 
  		case 1: { //E�er kullan�c� bilgisayar�n tuttugu say�y� tahmin etmek istiyorsa 'secenek' de�i�kenine 1 de�eri atamas� gerekmektir. E�er kullan�c� 1 de�erini atam��sa bu fonsiyon ger�ekle�mektedir.
			int tahmin1[4]; //Kullan�c� taraf�nda yaz�lan 4 basamakl� say�n�n, rakamlar�n�n atand��� 4 elemanl� dizi integer olarak  tan�mlamas�d�r.
			int flag1=0; //Bilgisayar taraf�ndan olu�turulan say�n�n kullan�c� taraf�ndan do�ru bilinene kadar imkan sa�layacak bayra��n integer olarak  tan�mlamas�d�r.
			while (flag1==0){//Bilgisayar taraf�ndan olu�turulan say�n�n kullan�c� taraf�ndan do�ru bilinene kadar imkan sa�layacak d�ng�d�r.
				cout << "Tahmin ettiginiz 4 basamakli sayiyi giriniz:"; //Aray�ze 'Tahmin ettiginiz 4 basamakli sayiyi giriniz:' yazmas� i�in yaz�lm��t�r.
				cin>>tahmin; //Kullan�c�n�n tahmin edece�i say�n�n yaz�lmas� ve 'tahmin' de�i�kenine atanmas� i�in yaz�lm��t�r.
				cout<<endl; //Aray�zde 1 sat�r bo�luk i�in yaz�lm��t�r.
				if (tahmin<999 || tahmin>10000){ //Kullan�c� taraf�ndan 4 basamakl� say� girilmedi�inde uyarmas� ve tekrar say� girmesi i�in yaz�lm��t�r.
					cout<<" ----- Hatali sayi girdiniz! ----- \n"; //Kullan�c� taraf�ndan 4 basamakl� say� girilmedi�inde aray�zde 'Hatali sayi girdiniz!' yaz�s� ile uyarmas� i�in yaz�lm��t�r.
					tahmin=0; //Kullan�c� taraf�ndan girilen say� yerine 0 de�eri atanmas� i�in yaz�lm��t�r.
					flag1=0; //Kullan�c� taraf�ndan 4 basamakl� say� girilmedi�inde tekrar say� girmesi i�in sonsuz d�ng�ye d�n�lmesi i�in yaz�lm��t�r.
		 		}
				else { //Kullan�c� taraf�ndan girilen say� 4 basamkl� ise sonsuz d�ng�den ��k�lmas� i�in yaz�lm��t�r.
					flag1=1; //Sonsuz d�ng�den ��k�lmas� i�in 'flag1' de�i�kenine 1 de�eri atan�r.
				}
			tahmin1[3]=tahmin/1000; //Kullan�c� taraf�ndan girilen 4 basamakl� say�n�n binler basama��n�n tespiti i�in 'sayi' de�i�keni bine b�l�n�r ve 'dizi' adl� dizinin 3 eleman� olarak atan�r. 
			tahmin1[2]=(tahmin%1000)/100; //Kullan�c� taraf�ndan girilen 4 basamakl� say�n�n y�zler basama��n�n tespiti i�in 'sayi' de�i�keninin 1000 b�l�m�nden kalan say� 100 b�l�n�r ve 'dizi' adl� dizinin 2 eleman� olarak atan�r.
			tahmin1[1]=((tahmin%1000)%100)/10; //Kullan�c� taraf�ndan girilen 4 basamakl� say�n�n onlar basama��n�n tespiti i�in 'sayi' de�i�keninin ilk olarak 1000 b�l�m�nden kalan say� sonras�nda 100 b�l�m�nden kalan say�, son olarak ise 10 b�l�n�r ve 'dizi' adl� dizinin 1 eleman� olarak atan�r.
			tahmin1[0]=tahmin%10; //Kullan�c� taraf�ndan girilen 4 basamakl� say�n�n birler basama��n�n tespiti i�in sayi de�i�keni 10 b�l�m�nden kalan say� tespit edilir ve 'dizi' adl� dizinin 0 eleman� olarak atan�r. 
			cout << "Sonuc: \n"; //Aray�ze say�lar�n e�ili�inin sonu�lar�n�n sunulmas� i�in 'Sonuc:' yazd�rl�r ve bir sat�r bo�luk b�rakt�r�l�r.
			for(int l=0;l<4;l++){ //Integer 'l' de�i�keni 0 de�eri ile ba�lat�l�r ve 'l' de�i�keni 4 olana kadar birer birer art�lmas�n� sa�layan d�ng� olu�turulur.
				if(dizi[l]==tahmin1[l]){ //Kullan�c� taraf�ndan girilen 4 basamakl� say� ile bilgisayar taraf�nda olu�turulan 4 basamakl� say�n�nn basamaklar�nda bulunan say�lar e�it ise; 
					cout << basamak[l] << " basamagi degeri: + \n"; //Aray�ze 'basamak' dizisinde bulunan basamak isimleri ve 'basamagi degeri: +' yazmas� i�in yaz�lm��t�r.
					e=e+1; //4 basamakl� say�lar e�it ise t�m basamaklarda e�it demektir. Bunun tespitinin yap�lmasu i�in her + de�eri geldi�inde e de�i�keni bir artacakt�r.
				}
				else if(dizi[l]!=tahmin1[l]) { //Kullan�c� taraf�ndan girilen 4 basamakl� say� ile bilgisayar taraf�nda olu�turulan 4 basamakl� say�n�nn basamaklar�nda bulunan say�lar e�it de�il ise;
				cout << basamak[l] << " basamagi degeri: - \n"; //Aray�ze 'basamak' dizisinde bulunan basamak isimleri ve 'basamagi degeri: -' yazmas� i�in yaz�lm��t�r.
				}
			}
			cout<<endl<<endl; //Aray�zde iki sat�r bo�luk b�rak�lmas� i�in yaz�lm��t�r.
			if (e==4){ //E�er 'e' de�i�keni 4'e e�it ise yani 4 basamakda birbirine e�ittir. Kullan�c� say�y� tahmin etmi�tir. 
				cout << "-------------- Tebrikler kazandiniz -------------- \n"; //Aray�zde kullan�c�n�n kazand���n� belirtmek i�in 'Tebrikler kazandiniz' yazmas� i�in yaz�lm��t�r.
			}
			else if (e!=4){ //E�er 'e2 say�s� 4'e e�it de�il ise kullan�c� say�y� tahmin edememi�tir.
				cout << "------------------ Tekrar  dene ------------------ \n"; //Aray�zde kullan�c�n�n tahmin edemedi�ini belirtmek i�in 'Tekrar  dene' yazmas� i�in yaz�lm��t�r.
				flag1=0; //Kullan�c� yeni tahminlerde bulunmas� i�in 'flag1' de�i�kenine 0 de�eri atanarak sonsuz d�ng�ye d�nmesi i�in yaz�lm��t�r.
			}
			cout<<endl; //Aray�zde bir sat�r bo�luk b�rak�lmas� i�in yaz�lm��t�r.
			e=0; //Basamak de�erlerinin do�rulu�unu saan 'e' de�i�keni her tahminde s�f�rlanmas� i�in yaz�lm��t�r.
			}
			
			sayi=0; //Bilgisayar taraf�ndan tutulan 4 basamakl� say� oyunun tekrar oynanmas� s�ras�nda haf�zada kalmamas� i�in s�f�rlanm��t�r.
		  	dizi[0]=0; //Bilgisayar taraf�ndan tutulan say�n�n birler basama�� oyunun tekrar oynanmas� s�ras�nda haf�zada kalmamas� i�in s�f�rlanm��t�r.
			dizi[1]=0; //Bilgisayar taraf�ndan tutulan say�n�n onlar basama�� oyunun tekrar oynanmas� s�ras�nda haf�zada kalmamas� i�in s�f�rlanm��t�r.
			dizi[2]=0; //Bilgisayar taraf�ndan tutulan say�n�n y�zler basama�� oyunun tekrar oynanmas� s�ras�nda haf�zada kalmamas� i�in s�f�rlanm��t�r.
			dizi[3]=0; //Bilgisayar taraf�ndan tutulan say�n�n binler basama�� oyunun tekrar oynanmas� s�ras�nda haf�zada kalmamas� i�in s�f�rlanm��t�r. 	
  			break; //case 1'den ��k�lmas� i�in yaz�lm��t�r.
  		  }
  
  		case 2: {  //Kullan�c�n�n oyun se�enekleri i�in yazd�klar� de�er 'secenek' de�i�kenine atanm��t�. Bu de�i�kene g�re kullan�c�n�n tuttu�u say�y� bilgisayar�n tahmin etmesi i�in kullan�lan yap�d�r.
  			int flag2=0; //Kullan�c� taraf�ndan olu�turulan say�n�n bilgisayar taraf�ndan do�ru bilinene kadar imkan sa�layacak bayra��n integer olarak tan�mlamas�d�r.
  			int a=0; //Kullan�c� taraf�ndan tutulan say�n�n, bilgisayar taraf�ndan t�m basamaklar�n do�ru oldu�unun anla��lmas� i�in olu�turulan de�i�kenin integer olarak tan�mlamas�d�r.
  			int pctahmin=0; //Bilgisayar taraf�ndan tahmin edilecek 4 basamakl� say�n�n atand��� de�i�kenin integer olarak tan�mlamas�d�r.
			char tahmin1[4]; //Bilgisayar taraf�ndan tahmin edilecek say�n�n basamak de�erlerine g�re do�ru ise +, yanl�� ise - de�erleri kullan�c� taraf�ndan yaz�lacakt�r. Basamak de�elerlerine g�re yaz�lan + ve - de�erlerinin char olarak atand��� 'tahmin1' dizisinin tan�mlamas�d�r. 
			while (flag2==0){ //Kullan�c� taraf�ndan tutulan say�n�n bilgisayar taraf�ndan do�ru bilinene kadar imkan sa�layacak d�ng�d�r.
				cout << "Tuttugunuz sayi " << sayi << " ? \n"<<endl; //Aray�zde bilgisayar�n tahmin etti�i say� yaz�lacakt�r.
  				for(int l=0;l<4;l++){ //Integer 'l' de�i�keni 0 de�eri ile ba�lat�l�r ve 'l' de�i�keni 4 olana kadar birer birer art�lmas�n� sa�layan d�ng� olu�turulur.
  					cout<< basamak[l] << " basamagi degeri : "; //Aray�ze 'basamak' dizisinde bulunan basamak isimleri ve 'basamagi degeri:' yazmas� i�in yaz�lm��t�r.
					cin >> tahmin1[l]; //Kullan�c� taraf�ndan biligsayar�n tahmin etti�i say�n�n tutulan say� ile ayn� olan basamak de�erlerine +, farkl� olan basamak de�erlerine - de�eri girilmesi i�in yaz�lm��t�r.
					if (tahmin1[l]!='+' && tahmin1[l]!='-'){ //Kullanuc�, bilgisayar�n tutu�u say�n�n basamak de�erine + veya - de�eri yazmazsa. 
						cout<<endl<<basamak[l]<<" basamagina hatali giris yaptiniz! \n"<<endl<<"------ Basamak degerlerine + veya - giriniz ------ \n"<<endl; //Hatal� yaz�lan basamk de�erinin uyar� olarak aray�ze yazacakt�r.
						flag2=0; //Bilgisayar yeni tahminlerde bulunmas� i�in 'flag2' de�i�kenine 0 de�eri atanarak sonsuz d�ng�ye d�nmesi i�in yaz�lm��t�r.
						}
				}
				cout<<endl<<endl; //Aray�zde 2 sat�r bo�luk i�in yaz�lm��t�r.
				for(int l=0;l<4;l++){ //Integer 'L' de�i�keni 0 de�eri ile ba�lat�l�r ve 'l' de�i�keni 4 olana kadar birer birer art�lmas�n� sa�layan d�ng� olu�turulur.		
					if (tahmin1[l]=='-'){ //Bilgisayar�n tahmin etti�i say�ya kullan�c� taraf�ndan basamak analizi yap�lm��t�r. Yap�lan basamk analizinde e�it olmayan basamaklara - de�eri atanm��t�r. Bu de�erler 'tahmin1' dizisnde - var ise;
						srand(time(0)); //Rastgele say� �retirken her seferinde farkl� say� �retmesini sa�lamaktad�r.
 						pctahmin=rand() % (9-0+1); //Rastgele �retilecek say�n�n, rakamlar� farkl� maksimum (9) ve minimum de�eri (0) aral���nda �retmesi ve bu �retilen say�n�n 'pctahmin' de�i�kenine atanmas� i�in yaz�lm��t�r.
						dizi[l]=pctahmin; //Bilgisayar hatal� olan basamak de�eri yerine yeni say� �retecek ve bu de�eri yeni �retilen de�erle de�i�tirecektir.
					}
					else if(tahmin1[l]=='+') { //Bilgisayar�n tahmin etti�i say�ya kullan�c� taraf�ndan basamak analizi yap�lm��t�r. Yap�lan basamk analizinde e�it olan basamaklara + de�eri atanm��t�r. Bu de�erler 'tahmin1' dizisnde + var ise;
						a=a+1; //Say�n�n o basamak de�eri sabit kalarak, 'a' de�eri bir atr�l�m��t�r.
					}
				}
	    		if (a!=4){ //'a' de�i�keni 4'e e�it de�ilse yani say�lar e�it de�ilse;
					sayi=(1000*dizi[3])+(100*dizi[2])+(10*dizi[1])+dizi[0]; //Bilgisayar hatal� olan basamak de�eri yerine yeni say� �etmi�ti. Bu �retti�i yeni say�lar ve do�ru say�lar basamak de�erleri ile �arp�l�p toplanarak 'sayi' de�i�kenine atanm��t�r. 
					flag2 = 0; //Bilgisayar yeni tahminlerde bulunmas� i�in 'flag2' de�i�kenine 0 de�eri atanarak sonsuz d�ng�ye d�nmesi i�in yaz�lm��t�r.
					a=0; //4 basamakl� say�n�n basamak de�erleri do�ru oldu�unda + de�i�keninin say�s�na ba�l� olarak artan 'a' de�i�keni s�f�rlanm��t�r.
				}	
				else if (a==4){ //'a' de�i�keni 4'e e�it yani say�lar e�it ise;
					cout<<"--------------- Bilgisayar kazandi --------------- \n"; //Aray�zde 'Bilgisayar kazandi' yazacakt�r.
					flag2=1; //Sonsuz d�ng�den ��k�lmas� i�in yaz�lm��t�r.
				}	
			}
   			break; //case 1'den ��k�lmas� i�in yaz�lm��t�r.
  	      }
  
  		default: { //Kullan�c�n�n oyun se�enekleri i�in belirtilen 1 veya 2 se�ene�ini se�memesi durumu i�in yaz�lm��t�r.
			cout << "---------- 1. veya 2. secenegi seciniz! ----------\n"; //Kullan�c�n�n oyun se�enekleri i�in belirtilen 1 veya 2 se�ene�ini se�memesi durumunda uyar� olarak yaz�lm��t�r.
  		}
	}

	cout<<endl<<endl; //Aray�zde iki sat�r bo�luk b�rak�lmas� i�in yaz�lm��t�r.
	cout << "-------------------- HOSCAKAL -------------------- \n"<<endl; //Aray�zde oyunun bitti�inin uyar�s� i�in yaz�lm��t�r.
	cout << "-------------------------------------------------- \n";
	cout << "------------------- HAZIRLAYAN ------------------- \n";
	cout << "------------------- EMRE  ADIN ------------------- \n";
	cout << "------------ linkedin.com/in/emreadin ------------ \n";
	cout << "-------------------------------------------------- \n";
	
	return 0;
}

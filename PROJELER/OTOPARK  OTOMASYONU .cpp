#include <iostream>
#include <cstring>

using namespace std;
class otopark{
string tasit_turu;
	double saatlik_ucreti,kacsaat_kaldi;

	public:
		otopark(){};
		otopark(string a,double b){
			tasit_turu=a;
			saatlik_ucreti=b;
		}
		void ucret_listesi_goster(){
			cout<<"                  "<<tasit_turu;
			cout<<"            "<<saatlik_ucreti<<endl;
			
		}
		void park_eden_tasit_bilgisi_doldur(otopark tasit_turleri,double kac_saat){

kacsaat_kaldi=kac_saat;
tasit_turu=tasit_turleri.tasit_turu;
saatlik_ucreti=tasit_turleri.saatlik_ucreti;

}
double ciro_hesapla(){
double ciro=kacsaat_kaldi*saatlik_ucreti;
cout<<ciro<<endl;
return ciro;

}

void park_listesi(){
	
	cout<<tasit_turu;
	cout<<" tasiti "<<kacsaat_kaldi<<" saat kaldi"<<endl;
}
};

int main(){
	otopark park_eden_dizi[30];

otopark tasit_turleri[3]={
	otopark ("otomobil ",1.5),
	otopark ("minubus",3),
    otopark ("kamyon",4.5)};
    
    cout<<"--------------------------------------------"<<endl;
    cout<<"TASIT TURU NO,    TASIT TURU,     SAATLIK UCRET"<<endl;
	cout<<"--------------------------------------------"<<endl;
	int secim;
	for(secim=0;secim<3;secim++){
			if(secim==0){
			cout<<secim;
			tasit_turleri[secim].ucret_listesi_goster();
		}
	else	if(secim==1){
			cout<<secim;
				tasit_turleri[secim].ucret_listesi_goster();
		}
	else if(secim==2){
			cout<<secim;
				tasit_turleri[secim].ucret_listesi_goster();
		}
		cout<<"--------------------------------------------"<<endl;	

				}
	double k;	
			cout<<"lutfen arac no sunu giriniz: ";cin>>secim;
			cout<<"kac saat otoparkda kaldi: ";cin>>k;
			
int sayac;

	for(sayac=1;sayac<=30;sayac++){


	park_eden_dizi[sayac].park_eden_tasit_bilgisi_doldur(tasit_turleri[secim],k);
	cout<<sayac<<".aracdan elde edilen ciro:  ";
park_eden_dizi[sayac].ciro_hesapla();

break;
}
int x;
cout<<"baska bir islem yapmak istermisiniz(EVET=1,HAYIR=0): ";cin>>x;
switch (x){
	case 1:
		main();
		case 0:
			cout<<endl<<endl;
cout<<"--------------------------------------------"<<endl;
	 cout<<"OTOPARKTA BULUNAN ARAC LISTESI"<<endl;
		break;
		
}
 int l;
 for( l=1;l<=sayac;l++){
 	park_eden_dizi[sayac].park_listesi();

}
cout<<endl<<sayac<<" tane arac otoparkda kalmistir"<<endl<<" ciro:"; 


double c;
c=park_eden_dizi[sayac].ciro_hesapla();
double r; 
c+= 0;
cout<<" genel ciro: "<<c;


	return 0;
	
}

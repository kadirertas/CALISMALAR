#include <iostream>
#include <cstring>

using namespace std;
class otobus{
string sehir;
	double bilet_ucreti,yolcu_sayisi;

	public:
		otobus(){};
		otobus(string a,double b){
		sehir=a;
		bilet_ucreti=b;
		}
		void ucret_listesi_goster(){
			cout<<"                  "<<sehir;
			cout<<"            "<<bilet_ucreti<<endl;
			
		}
		void sefer_bilgisi_doldur(otobus seferler,double kac_yolcu){

yolcu_sayisi=kac_yolcu;
sehir=seferler.sehir;
bilet_ucreti=seferler.bilet_ucreti;

}
double ciro_hesapla(){
double ciro=bilet_ucreti*yolcu_sayisi;
cout<<ciro<<endl;
return ciro;

}

void sefer_listesi(){
	cout<<sehir;
	cout<<" sehrine "<<yolcu_sayisi<<" adet yolcu gitti"<<endl;

}
};

int main(){
	otobus sefer_dizisi[30];
otobus seferler[3]={
    otobus ("ankara",80),
	otobus ("izmir",100),
    otobus ("adana",90)};
    
    cout<<"--------------------------------------------"<<endl;
    cout<<"SEFER NO,    SEFER ADI,     SEFER FIYATI"<<endl;
	cout<<"--------------------------------------------"<<endl;
	int x;
	for(x=0;x<3;x++){
			if(x==0){
			cout<<x;
		seferler[x].ucret_listesi_goster();
		}
	else	if(x==1){
			cout<<x;
		seferler[x].ucret_listesi_goster();
		}
	else if(x==2){
			cout<<x;
				seferler[x].ucret_listesi_goster();
		}
		cout<<"----------------------------------------------------"<<endl;	

				}
	double y;	
			cout<<"lutfen sehir no sunu giriniz= ";cin>>x;
			cout<<"kac adet yolcu var= ";cin>>y;
			
int i;

	for(i=1;i<=30;i++){


	 sefer_dizisi[i].sefer_bilgisi_doldur(seferler[x],y);
	cout<<i<<".seferden elde edilen ciro:  ";
 sefer_dizisi[i].ciro_hesapla();

break;
}
int k;
cout<<"baska bir islem yapmak istermisiniz(EVET=1,HAYIR=0): ";cin>>k;
switch (k){
	case 1:
		main();
		case 0:
			cout<<endl<<endl;
cout<<"--------------------------------------------"<<endl;
	 cout<<"SEFER LISTESI"<<endl;
		break;
		
}
 int l;
 for( l=1;l<=i;l++){
  sefer_dizisi[i].sefer_listesi();

}
cout<<endl<<i<<" tane otobus sefer yapti"<<endl<<" ciro:"; 


double z;
z= sefer_dizisi[i].ciro_hesapla();;

z+= 0;
cout<<"  ciro: "<<z;
	return 0;	
}

#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int sayi,birlerb,onlarb,yuzlerb;
	cout<<"Lütfen bir sayi giriniz";cin>>sayi;
	birlerb=sayi%10;
	sayi/=10;
	cout<<"Girilen sayýnýn birler basamaðý="<<birlerb<<endl;
	onlarb=sayi%10;
	sayi/=10;
	cout<<"Girilen sayýnýn onlar basamaðý="<<onlarb<<endl;
	yuzlerb=sayi%10;
	sayi/=10;
	cout<<"Girilen sayýnýn yüzler basamaðý="<<yuzlerb<<endl;
	cout<<endl;
if(birlerb>onlarb&&onlarb>yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan büyük"<<endl; 
		cout<<"Onlar basamaðý da yüzler basamaðýndan büyüktür"<<endl;
		cout<<birlerb<<">"<<onlarb<<">"<<yuzlerb;
    }
else if(birlerb<onlarb&&birlerb>yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan küçük"<<endl;   
		cout<<"Birler basamaðý da yüzler basamaðýndan büyüktür"<<endl;
		cout<<birlerb<<"<"<<onlarb<<">"<<yuzlerb;
	}
else if(birlerb<onlarb&&onlarb>yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan küçük"<<endl;   
		cout<<"onlar basamaðý da yüzler basamaðýndan büyüktür"<<endl;
		cout<<birlerb<<"<"<<onlarb<<">"<<yuzlerb;
	}
else if(birlerb==onlarb&&birlerb>yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýna eþit"<<endl;      
		cout<<"Birler basamaðý da yüzler basamaðýndan büyüktür"<<endl;
		cout<<birlerb<<"="<<onlarb<<">"<<yuzlerb;
	}
else if(birlerb==onlarb&&onlarb<yuzlerb){                            
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýna eþit"<<endl;
		cout<<"Onlar basamaðý da yüzler basamaðýndan küçüktür"<<endl;
		cout<<birlerb<<"="<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb<onlarb&&onlarb==yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan küçük"<<endl;   
		cout<<"Onlar basamaðý da yüzler basamaðýna eþittir"<<endl;
		cout<<birlerb<<"<"<<onlarb<<"="<<yuzlerb;
	}
else if(birlerb>onlarb&&birlerb<yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan büyük"<<endl;   
		cout<<"Birler basamaðý da yüzler basamaðýndan küçüktür"<<endl;
		cout<<birlerb<<">"<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb>onlarb&&birlerb==yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan büyük"<<endl;    
		cout<<"Birler basamaðý da yüzler basamaðýna eþittir"<<endl;
		cout<<birlerb<<">"<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb<onlarb&&birlerb==yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan küçük"<<endl;    
		cout<<"Birler basamaðý da yüzler basamaðýna eþittir"<<endl;
		cout<<birlerb<<"<"<<onlarb<<">"<<yuzlerb;
	}
else if(birlerb>onlarb&&onlarb<yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan büyük"<<endl;    
		cout<<"Onlar basamaðý da yüzler basamaðýndan küçüktür"<<endl;
		cout<<birlerb<<">"<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb==onlarb&&onlarb>yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýna eþit"<<endl;      
		cout<<"Onlar basamaðý da yüzler basamaðýndan büyüktür"<<endl;
		cout<<birlerb<<"="<<onlarb<<">"<<yuzlerb;
	}
else if(birlerb==yuzlerb&&onlarb<yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý yüzler basamaðýna eþit"<<endl;     
		cout<<"Onlar basamaðý da yüzler basamaðýndan küçüktür"<<endl;
		cout<<birlerb<<"="<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb>onlarb&&onlarb==yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan büyük"<<endl;    
		cout<<"Onlar basamaðý da yüzler basamaðýna eþittir"<<endl;
		cout<<birlerb<<">"<<onlarb<<"="<<yuzlerb;
	}
else if(birlerb<onlarb&&birlerb==yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan küçük"<<endl;    
		cout<<"Birler basamaðý da yüzler basamaðýna eþittir"<<endl;
		cout<<birlerb<<"<"<<onlarb<<"="<<yuzlerb;
	}
else if(birlerb==onlarb&&onlarb<yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýna eþit"<<endl;    
		cout<<"Onlar basamaðý da yüzler basamaðýndan küçük"<<endl;
		cout<<birlerb<<"="<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb<onlarb&&onlarb<yuzlerb){
		cout<<"Girilen sayýnýn birler basamaðý onlar basamaðýndan küçük"<<endl;    
		cout<<"Onlar basamaðý da yüzler basamaðýndan küçüktür"<<endl;
		cout<<birlerb<<"<"<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb==onlarb&&onlarb==yuzlerb){
	
	cout<<"TÜM BASAMAKLAR EÞÝTTÝR"<<endl;
	cout<<birlerb<<"="<<onlarb<<"="<<yuzlerb;
}
return 0;
}

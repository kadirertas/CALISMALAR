#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int sayi,birlerb,onlarb,yuzlerb;
	cout<<"L�tfen bir sayi giriniz";cin>>sayi;
	birlerb=sayi%10;
	sayi/=10;
	cout<<"Girilen say�n�n birler basama��="<<birlerb<<endl;
	onlarb=sayi%10;
	sayi/=10;
	cout<<"Girilen say�n�n onlar basama��="<<onlarb<<endl;
	yuzlerb=sayi%10;
	sayi/=10;
	cout<<"Girilen say�n�n y�zler basama��="<<yuzlerb<<endl;
	cout<<endl;
if(birlerb>onlarb&&onlarb>yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan b�y�k"<<endl; 
		cout<<"Onlar basama�� da y�zler basama��ndan b�y�kt�r"<<endl;
		cout<<birlerb<<">"<<onlarb<<">"<<yuzlerb;
    }
else if(birlerb<onlarb&&birlerb>yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan k���k"<<endl;   
		cout<<"Birler basama�� da y�zler basama��ndan b�y�kt�r"<<endl;
		cout<<birlerb<<"<"<<onlarb<<">"<<yuzlerb;
	}
else if(birlerb<onlarb&&onlarb>yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan k���k"<<endl;   
		cout<<"onlar basama�� da y�zler basama��ndan b�y�kt�r"<<endl;
		cout<<birlerb<<"<"<<onlarb<<">"<<yuzlerb;
	}
else if(birlerb==onlarb&&birlerb>yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��na e�it"<<endl;      
		cout<<"Birler basama�� da y�zler basama��ndan b�y�kt�r"<<endl;
		cout<<birlerb<<"="<<onlarb<<">"<<yuzlerb;
	}
else if(birlerb==onlarb&&onlarb<yuzlerb){                            
		cout<<"Girilen say�n�n birler basama�� onlar basama��na e�it"<<endl;
		cout<<"Onlar basama�� da y�zler basama��ndan k���kt�r"<<endl;
		cout<<birlerb<<"="<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb<onlarb&&onlarb==yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan k���k"<<endl;   
		cout<<"Onlar basama�� da y�zler basama��na e�ittir"<<endl;
		cout<<birlerb<<"<"<<onlarb<<"="<<yuzlerb;
	}
else if(birlerb>onlarb&&birlerb<yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan b�y�k"<<endl;   
		cout<<"Birler basama�� da y�zler basama��ndan k���kt�r"<<endl;
		cout<<birlerb<<">"<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb>onlarb&&birlerb==yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan b�y�k"<<endl;    
		cout<<"Birler basama�� da y�zler basama��na e�ittir"<<endl;
		cout<<birlerb<<">"<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb<onlarb&&birlerb==yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan k���k"<<endl;    
		cout<<"Birler basama�� da y�zler basama��na e�ittir"<<endl;
		cout<<birlerb<<"<"<<onlarb<<">"<<yuzlerb;
	}
else if(birlerb>onlarb&&onlarb<yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan b�y�k"<<endl;    
		cout<<"Onlar basama�� da y�zler basama��ndan k���kt�r"<<endl;
		cout<<birlerb<<">"<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb==onlarb&&onlarb>yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��na e�it"<<endl;      
		cout<<"Onlar basama�� da y�zler basama��ndan b�y�kt�r"<<endl;
		cout<<birlerb<<"="<<onlarb<<">"<<yuzlerb;
	}
else if(birlerb==yuzlerb&&onlarb<yuzlerb){
		cout<<"Girilen say�n�n birler basama�� y�zler basama��na e�it"<<endl;     
		cout<<"Onlar basama�� da y�zler basama��ndan k���kt�r"<<endl;
		cout<<birlerb<<"="<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb>onlarb&&onlarb==yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan b�y�k"<<endl;    
		cout<<"Onlar basama�� da y�zler basama��na e�ittir"<<endl;
		cout<<birlerb<<">"<<onlarb<<"="<<yuzlerb;
	}
else if(birlerb<onlarb&&birlerb==yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan k���k"<<endl;    
		cout<<"Birler basama�� da y�zler basama��na e�ittir"<<endl;
		cout<<birlerb<<"<"<<onlarb<<"="<<yuzlerb;
	}
else if(birlerb==onlarb&&onlarb<yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��na e�it"<<endl;    
		cout<<"Onlar basama�� da y�zler basama��ndan k���k"<<endl;
		cout<<birlerb<<"="<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb<onlarb&&onlarb<yuzlerb){
		cout<<"Girilen say�n�n birler basama�� onlar basama��ndan k���k"<<endl;    
		cout<<"Onlar basama�� da y�zler basama��ndan k���kt�r"<<endl;
		cout<<birlerb<<"<"<<onlarb<<"<"<<yuzlerb;
	}
else if(birlerb==onlarb&&onlarb==yuzlerb){
	
	cout<<"T�M BASAMAKLAR E��TT�R"<<endl;
	cout<<birlerb<<"="<<onlarb<<"="<<yuzlerb;
}
return 0;
}

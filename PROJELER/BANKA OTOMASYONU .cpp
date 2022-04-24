#include <stdio.h>
#include <stdlib.h>

int main()
{
/* 
1- bakiye görüntüle
2- para yatýr 
3- para çek 
4- fatura öde 
  - internet
  - elektrik 
  -su 
*/

int i=1, miktar,secim, para , eski_bakiye=0  ;
while(i>0)
{
	printf(" \n 1- Bakiye Goruntule \n 2- Para Yatir \n 3- Para Cek \n 4- Fatura Ode \n 5- cikis \n");
	printf("lutfen seciminizi yapiniz: ");
    scanf("%d",&secim);
    
    switch (secim)
    {
    	case 1:
    		printf("Bakiyeniz: %d  TL \n\n",para);
    		break;
    case 2:
	 	 printf("Miktar Giriniz : ");
	 	 scanf("%d",&miktar);
		 eski_bakiye=para;
    	 para=para+ miktar;
		 system("CLS");
		
		 printf("\n\n******************************************\n\n");
		 printf("Eski Bakiyeniz= %d \n",eski_bakiye);
	     printf("Guncel Bakiyeniz : %d", para);
		 printf("\n\n******************************************\n\n");
		 break;
	case 3: 
		 printf("Cekmek istediginiz tutari giriniz : ");
		 scanf("%d",&miktar);
		 eski_bakiye=para;
		 para=para-miktar;
		 system("CLS");
		 printf("\n\nEski Bakiyeniz= %d \n",eski_bakiye);
	     printf("Guncel Bakiyeniz : %d \n\n", para);
		 break;
		case 4:
			int fatura,tutar1,tutar2,tutar3;
		printf(" 1- Internet faturasi \n 2-Elektrik faturasi \n 3- Su faturasi\n ");
		printf("lutfen fatura turunuzu numaralandirilma turune gore belirtiniz: ");
        scanf("%d",&fatura);
		switch (fatura){
			case 1 : 
			   printf("Internet  faturasinda yazan tutari lutfen giriniz :  ");
			   scanf("%d",&tutar1);
			   printf("odeme yapildi... \n");
		       para= para-tutar1;
			   printf("kalan paraniz : %d \n",para);
			 break;
			case 2: 
			   printf("Elektrik faturasinda yazan tutari lutfen giriniz :  ");
			   scanf("%d",&tutar2);
			   printf("odeme yapildi... \n");
		       para= para-tutar2;
			   printf("kalan paraniz : %d",para);
		       break;
		    case 3: 
			   printf("Su faturasinda yazan tutari lutfen giriniz :  ");
			   scanf("%d",&tutar3);
			   printf("odeme yapildi... \n");
		       para= para-tutar3;
			   printf("kalan paraniz : %d",para);
		       break;
		
		}	   
		break ;
		case 5:
		printf("\n\nBizi tercih ettiginiz icin tesekkur eder iyi gunler dileriz "); 
		return 0;
		break ;
	}
}




















system("pause");
return 0;
	
}

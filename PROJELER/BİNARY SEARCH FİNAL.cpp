#include <stdio.h>
#include <stdlib.h>
bool binarysearch(int dizi[],int bas,int son,int aranan){
	
	while(son>=bas){
	int orta=dizi[(bas+son)/2];
	if(orta==aranan)
	return true;
	if(orta<aranan)
	bas++;
	if(orta>aranan)
	son--;
}
return false;
}
int main(){
	
	
	int n;
	printf("lutfen dizi eleman sayisini giriniz");
	scanf("%d",&n);
	int dizi[n];
	for(int i=0;i<n;i++){
		printf("%d.  sayiyi giriniz",i);
		scanf("%d",&dizi[i]);
	}
	int aranan;
	printf("lutfen aradiginiz sayiyi giriniz\n");
	scanf("%d",&aranan);
	bool sonuc= binarysearch(dizi,0,n-1,aranan);
	if(sonuc)
	
		printf("aradiginiz %d sayisi tanimladiginiz dizide bulunuyor",aranan);
	else
	printf("aradiginiz %d sayisi tanimladiginiz dizide bulunmuyor",aranan);
	return 0;
}

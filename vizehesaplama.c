#include <stdio.h>
#include <limits.h>

int main(int argc,char **argv){


 
	int vizeNotu,finalNotu,vizeYuzdesi,finalYuzdesi,canDegeri;
	canDegeri=50;
	float ortalama;
	printf("Lutfen sirasiyla vize notunuzu ve yuzdesini giriniz:");
	scanf("%d%d",&vizeNotu,&vizeYuzdesi);
	printf("Lutfen sirasiyla final notunuzu ve yuzdesini giriniz:");
	scanf("%d%d",&finalNotu,&finalYuzdesi);
	
	ortalama=(vizeNotu*vizeYuzdesi+finalNotu*finalYuzdesi)/100;
	printf("ortalama:%.2f",ortalama);
	printf("Ders Gecme Durumunuz(1->Gectiniz,0->Kaldiniz):%d",ortalama>=canDegeri);
	
	

return 0;

}

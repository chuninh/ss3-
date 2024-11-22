#include<stdio.h>
int main(){
	
	int number,hangNghin,hangTram,hangChuc,hangDV;
	
	printf("moi ban nhap vo 1 so tu nnhien co 4 chu so \n");
	scanf("%d",&number);
	
	printf("so nguoi dung vua nhap %d\n",number);
	
	hangNghin =number / 1000;
	hangTram = (number -hangNghin*1000)/100;
	hangChuc = (number -hangNghin*1000 - hangTram*100)/10;
	hangDV = (number -hangNghin*1000 - hangTram*100 -hangChuc*10)/1;
	
	printf("so dao nghich la %d%d%d%d\n",hangDV,hangChuc,hangTram,hangNghin);
	
	return 0;
	
	
}

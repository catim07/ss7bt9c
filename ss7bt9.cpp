#include<stdio.h>
int main(){
	int hang,cot;
	printf("moi ban nhap so hang: ");
	scanf("%d",&hang);
	printf("moi ban nhap so cot: ");
	scanf("%d",&cot);
	int array[hang][cot];
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("moi ban nhap phan tu hang %d cot %d: ",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			if(i==0||j==0||i==hang-1||j==cot-1){
			printf("%2d",array[i][j]);
		}else{
			printf("  ");
		}
	}
		printf("\n");
	}
	return 0;
}

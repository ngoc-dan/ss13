#include<stdio.h>
//khai bao ham nguyen mau
int display(int row,int col);

int main(){
int rows,cols;
int arr[rows][cols];
printf("nhap so hang : ");
scanf("%d",&rows);
printf("nhap so cot : ");
scanf("%d",&cols);
display(rows,cols);
return 0;
}
//logic ham 
int display(int row,int col){
int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("nhap vao ma tran hang %d cot %d : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<row;i++){
		printf("\n");
		for(int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
	}
	return arr[row][col];
}

#include<stdio.h>
int display(int m,int n);

int main(){
	int a,b;
	int ucln;
	printf("nhap so thu nhat : ");
	scanf("%d",&a);
	printf("nhap so thu hai : ");
	scanf("%d",&b);
	ucln=display(a,b);
	printf("uoc chung lon nhat cua hai so %d va %d la : %d",a,b,ucln);
	return 0;
}
int display(int m,int n){
	int uoc;
	if(m<=n){
	for(int i=1;i<=n;i++){
			if(m%i==0&&n%i==0){
			uoc=i;	
		}
	}
    }else{
    	for(int i=1;i<=m;i++){
			if(m%i==0&&n%i==0){
			uoc=i;
	}
}
}
	return uoc;
}


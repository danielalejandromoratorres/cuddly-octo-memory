#include <stdio.h>
int suma(int a,int b);
int resta(int a,int b);
void mensaje();
void suma2();

int main(){
	int x,y,s,r;
	s=suma(20,50);
	printf("la primera suma es igual %d \n ",s);
	printf("ingrese el valor de x=");
	scanf("%d",&x);
	printf("ingrese el valor de y=");
	scanf("%d",&y);
	r=resta(x,y);
	printf("el resultado de la resta es %d\n",r);
	suma2();
	mensaje();
	return 0;
}
int suma(int a,int b){
	int c;
	c=a+b;
	return c;
}
int resta(int a,int b){
	return (a-b);
}
void mensaje(){
	printf("hasta luego\n");
}
void suma2(){
	int a,b,c;
	printf("ingrese el valor de a\n");
	scanf("%d",&a);
	printf("ingrese el valor de b\n");
	scanf("%d",&b);
	c=a+b;
	printf("suma es igual a %d\n",c);
}


#include <stdio.h>
#include <stdlib.h>

void restar(int a,int b);

int main() {

    int a,b; 
	printf ("Bienvenido... Ingrese 2 numeros!");
    printf ("Primer numero: ");   
	scanf ("%d",&a); 
    printf ("Segundo numero: ");  
	scanf ("%d",&b); 
	
	
	restar(a,b);
	
    //implementar resta, multiplicacion, division
   
    
    return (EXIT_SUCCESS);
}

void restar(int a,int b){
	printf("La resta es: %d",a-b);
}
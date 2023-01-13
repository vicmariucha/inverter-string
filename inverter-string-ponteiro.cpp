#include <stdio.h>
#include <string.h>

void inverte(char *p_string);

int main(void){
	char frase[30];
	printf("Escreva uma frase: ");
	gets(frase);
	inverte(frase);
	printf("\nFrase invertida: %s", frase);
	return 0;
}

void inverte(char *p_string){
	char *p_fim, aux;
	int tam = strlen(p_string), i;	
	p_fim = p_string + tam - 1;
	for(i = 0; i < tam/2; i++, p_string++, p_fim--){
		aux =  *p_string;
		*p_string = *p_fim;
		*p_fim = aux;
	}
}

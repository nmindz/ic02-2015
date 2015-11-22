//
//  L01E01.c
//  IC2  - Lista 01, Exercicio 01
//
//  Created by Evandro Camargo on 22/Nov/15.
//  Copyright © 2015 Evandro Camargo. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int checkVowel(char ch) {
	switch (ch) {
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		return 1;
		default:
		return 0;
	}
}

int main() {
	char buffer[150] = "", stripped[150] = "";
	int i, j = 0;
	
	printf("Digite uma frase qualquer: ");
	fgets(buffer, sizeof(buffer), stdin);
	
	for(i = 0; i < strlen(buffer); i++) {
		if(checkVowel(buffer[i]) == 0) { // Não é vogal
			stripped[j] = buffer[i];
			j++;
		}
	}
	
	stripped[j] = '\0';
	
	printf("A string, sem vogais, é: %s", stripped);
}
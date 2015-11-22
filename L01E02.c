//
//  L01E02.c
//  IC2  - Lista 01, Exercicio 02
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
    char buffer[150] = "", newstr[150] = "", ch[1] = "";
    int i, j = 0;
    
    printf("Digite uma letra (vogal ou consoante) para subistituir todas as vogais: ");
    fgets(buffer, sizeof(buffer), stdin);
    
    // Just to make sure only the first character will be used
    ch[0] = buffer[0];
    // Empties the array, for sanity's sake
    strcpy(buffer, "");
    
    printf("Digite uma frase qualquer: ");
    fgets(buffer, sizeof(buffer), stdin);
    
    for(i = 0; i < strlen(buffer); i++) {
        newstr[i] = buffer[i];
        if(checkVowel(buffer[i]) == 1) { // É vogal
            newstr[i] = ch[0];
            j++;
        }
    }
    
    newstr[j] = '\0';
    
    printf("A frase original continha %d vogais.\n", j);
    printf("A string, com vogais subistituidas, é: %s", newstr);
}
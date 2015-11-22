//
//  L01E03.c
//  IC2  - Lista 01, Exercicio 03
//
//  Created by Evandro Camargo on 22/Nov/15.
//  Copyright © 2015 Evandro Camargo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int costify(char* input) {
    
    int length = 0, count = 0, price = 0;
    char *token = strtok(input, " ");
    
    while(token) {
        count = 0;
        length = (int)strlen(token);
        
        count = count + (length / 10);
        if (length % 10 != 0) count++;
        price = price + count;
        
        token = strtok(NULL, " ");
    }
    return price;
}

int main() {
    char buffer[500] = "";
    double cost = 0.15;
    
    printf("Digite a mensagem (max. 500 caracteres.) a ser enviada no telegrama: ");
    fgets(buffer, sizeof(buffer), stdin);
    
    int count = costify(buffer);
    double price = (double)count * cost;
    printf("O preço por palavra é de R$ 0,15. O preço total seria de R$ %.2f\n", price);
}
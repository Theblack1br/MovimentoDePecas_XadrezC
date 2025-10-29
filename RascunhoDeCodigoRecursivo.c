#include <stdio.h>

void movimentoTorre(int numeroCasas){
    if (numeroCasas > 0){
        printf("Direita\n");
        movimentoTorre(numeroCasas - 1);
    }
}

void movimentoBispo(int numeroCasas){
    if (numeroCasas > 0){
        printf("Direita\n"
               "Cima\n");
        movimentoBispo(numeroCasas - 1);
    }
}

void movimentoRainha(int numeroCasas){
    if(numeroCasas > 0){
        printf("Esquerda\n");
        movimentoRainha(numeroCasas - 1);
    }
}

void movimentoCavalo(int numeroCasas){
     while(numeroCasas > 0) // Aqui é para fazer a variável numeroCasas valer 0.
    {
        //Primeira parte do movimento em L do cavalo: 2 movimentos para baixo.
        for(int cavaloBaixo = 0; cavaloBaixo < 2; cavaloBaixo++) // Aqui limitamos o número de movimentos para serem menores que 2. Então ele conta 0, 1 e para antes de imprimir o 2.
        {
            printf("Cima \n"); 
        } 
        // Segunda parte do movimento em L do cavalo: 1 movimento para a esquerda
        printf("Direita \n"); 
        
        numeroCasas--;
    }
}
int main(){

    printf("--- Movimento da Torre ---\n");
    movimentoTorre(5);
    printf("\n");

    printf("--- Movimento do Bispo ---\n");
    movimentoBispo(5);
    printf("\n");

    printf("--- Movimento da Rainha ---\n");
    movimentoRainha(5);
    printf("\n");

    printf("--- Movimento do Cavalo ---\n");
    movimentoCavalo(1);

    
return 0;
}
#include <stdio.h>

/*
    Como foi pedido, fiz os movimentos da torre, bispo e rainha usando recursividade,
enquanto o cavalo estou utilizando loops aninhados. 
    O projeto foi desenvolvido no arquivo "RascunhoDeCodigoRecursivo.c", copiado e depois
colado aqui no arquivo principal.
*/

//Movimento da Torre com recursividade!
void movimentoTorre(int numeroCasas){
    if (numeroCasas > 0){ // Aqui é definido que para executar, o número tem que ser maior que 0.
        printf("Direita\n");
        movimentoTorre(numeroCasas - 1); // Nessa linha está a chamda recursiva, onde o número é decrementado e depois calculado.
                                         // EX: O número escolhido é 5, então ele vai decrementar 1(5-1) e checar o número,
                                         //     se for maior do que 0, ele imprime o resultado e executa novamente até chegar ao 0,
                                         //     e chegando ao 0, ele não executa mais(5-1 = 4(se 4 > 0 escreva = Direita); 4-1 = 3(se 3 > 0 escreva = Direita) etc...)
    }
}

//Movimento do Bispo com recursividade!
void movimentoBispo(int numeroCasas){
    if (numeroCasas > 0){
        printf("Direita\n" // Aqui é a mesma lógica do printf da torre e da rainha, mas ele vai imprimir 1 pra direita e 1 pra cima, para simular um movimento diagonal.
               "Cima\n");
        movimentoBispo(numeroCasas - 1);
    }
}

// Movimento da Rainha com recursividade!
void movimentoRainha(int numeroCasas){
    if(numeroCasas > 0){
        printf("Esquerda\n");
        movimentoRainha(numeroCasas - 1);
    }
}

//Movimento do Cavalo com Loops Aninhados!
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
    // Aqui é onde fica a seleção de movimentos
    // Nesta parte, poderiamos criar uma estrutura de entrada de dados, onde o usuário poderia escolher quantas casas ele quer mover a peça.
    // Com a estrutura de entrada de dados e aumentando a possibilidade de movimentos, eu poderia criar o jogo de Xadrez em sí.
    // Mas pra isso, seriam necessários mais recursos a serem utilizados no programa.

    printf("--- Movimento da Torre ---\n");
    movimentoTorre(5); // Para fazer testes, basta alterar o número entre os colchetes e executar o código.
    printf("\n"); // Pula a linha no terminal!

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

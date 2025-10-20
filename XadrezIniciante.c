#include <stdio.h>


int main(){
 
    // Movimento da torre para cima usando "for"!
    Printf("--- Movimento da Torre---\n");
    
    for (int TorreCima = 2; TorreCima <= 8; TorreCima++) { // Como coloquei sendo menor ou igual a 8, a contagem para no 8. Sendo assim
                                                           // devo iniciar a contagem do número 2, para que sejam contabilizados até 7 movimentos.
        printf("Cima\n"); //O texto foi organizado para que fosse impresso quantas vezes a peça subiu.
                         //Também poderia ser organizado da seguinte forma: printf("Torre sobe até a casa %d nesta rodada!\n", TorreCima); 
    }                   // Nesse sentido, o mesmo ocorreria para os movimentos direita, baixo ou esquerda, dependendo da posição da peça no tabuleiro.

    printf("\n"); //Para pular uma linha, caso queira executar tudo junto.

    // Aqui irei fazer o Bispo descendo no tabuleiro usando "while"!
    // Vamos supor que ele esteja na casa H8(Topo direito do tabuleiro)
    Printf("--- Movimento do Bispo ---\n");

    int BispoDesce = 1; 

    while(BispoDesce <= 7) // Aqui eu inferto a lógica anterior, fazendo com que só contabilize o número de casas possíveis para o movimento da peça.
    {
        printf("Baixo\n"
               "Esquerda\n");//Nessa estrutura, o bispo desce 1 casa, depois anda 1 casa para a esquerda e faz esse movimento até o final do tabuleiro.
        // Poderia ser mais direto assim: printf("O bispo desceu até a casa %d nesta rodada!\n", BispoDesce);
        BispoDesce++; // Incrementei para evitar o loop infinito
    }

    printf("\n");

    // Movimento da Rainha utilizando "do while"!
    // A rainha pode se mover livremente em uma linha reta para qualquer direção.
    // vamos supor que ela esteja na casa J5 e queremos ir para a esquerda.

    int rainha = 1;

    do {
        
        printf("Esquerda\n");
        //Poderia ser: printf("A rainha se moveu para a esquerda até a casa %d nesta rodada!\n", rainha);
        rainha++;
    
    }while (rainha <= 5 ); // Dessa forma, o loop se repete até chegar ao número 5, que é a úlima estremidade que a rainha pode alcancar para a esquerda.

    printf("\n");
    //Movimento do cavalo para o desafio Aventureiro!
    Printf("--- Movimento do Cavalo ---\n");
    
    int cavaloAnda = 1; //Aqui declaro a variável
    while(cavaloAnda--) // Aqui é para fazer a variável cavaloAnda valer 0.
    {
        //Primeira parte do movimento em L do cavalo: 2 movimentos para baixo.
        for(int cavaloBaixo = 0; cavaloBaixo < 2; cavaloBaixo++) // Aqui limitamos o número de movimentos para serem menores que 2. Então ele conta 0, 1 e para antes de imprimir o 2.
        {
            printf("Baixo \n"); 
        } 
        // Segunda parte do movimento em L do cavalo: 1 movimento para a esquerda
        printf("Esquerda \n"); 
        
    }
    /*Exemplo da estrutura de switches:

    int escolhaMovimento;

    printf("O cavalo está em sua casa inicial. Você está no topo do tabuleiro. Preciso que jogue com ele e escolha para onde ir: \n");
    printf("\n");
    printf("1. Cavalo para a direita!\n");
    printf("2. Cavalo para a esquerda!\n");
    printf("Selecione uma opção: ");
    scanf("%d", &escolhaMovimento);
    printf("\n");

    switch(escolhaMovimento){

    A partir daqui, viria o Case 1 e Case 2, com a estrutura de repetição aninhada dentro de cada um, fazendo com que no terminal seja impresso a informação, de acordo com
    a escolha do usuário.

    */

return 0;

}

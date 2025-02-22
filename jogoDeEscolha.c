#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int escolhaJogador , escolhaDaMaquina;
    srand(time(0));

    printf("### Jogo do jokenpô ###\n");
    printf("Escolha as opcoes\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Terousa\n");
    printf("Sua escolha: ");
    scanf("%d", &escolhaJogador);
    
    escolhaDaMaquina = rand() % 3 + 1;
    
    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra\n");
        break;
    case 2:
        printf("Jogador: Papel\n");
        break;
    case 3:
        printf("Jogador: Terousa\n");
        break;
    default:
        printf("Escolha invalida\n");
        break;
    }


    switch (escolhaDaMaquina)
    {
    case 1:
        printf("Maquina: Pedra\n");
        break;
    case 2:
        printf("Maquina: Papel\n");
        break;
    case 3:
        printf("Maquina: Terousa\n");
        break;
    }


    if(escolhaJogador == escolhaDaMaquina){
        printf("### Jogo deu Empate ###");
    }else if((escolhaJogador == 1) && (escolhaDaMaquina == 3) ||
            (escolhaJogador == 2) && (escolhaDaMaquina == 1) ||
            (escolhaJogador == 3) && (escolhaDaMaquina == 2)){
        printf("### O Jogador Venceu ###");
    }else{
        printf("### A Maquina Venceu ###");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int escolhaMenu;
    int escolhaJogador;
    int escolhaComputador;
    printf("JAN KEN PO DA MORTE\n");
    printf("ACERTE OU MORRA\n");
    printf("1 - começar\n 2 - ver regras\n");
    scanf("%d", &escolhaMenu);
    
    switch (escolhaMenu)
    {
        case 1:
            printf("escolha 1 para pedra, 2 para papel, 3 para tesoura");
            scanf("%d", &escolhaJogador);
            switch (escolhaJogador)
            {
            case 1:
                printf("jogou pedra\n");
                break;

            case 2:
                printf("jogou papel\n");
                break;

            case 3:
                printf("jogou tesoura\n");
                break;
            
            default:
                printf("chato");
                break;
            }

            srand(time(0));
            escolhaComputador = rand() % 3 + 1;

            switch (escolhaComputador)
            {
            case 1:
                printf("computador: pedra \n");
                break;

            case 2:
                printf("computador: papel \n");
                break;

            case 3:
                printf("computador: tesoura \n");
                break;
            
            default:
                break;
            }
        
        if (escolhaJogador == escolhaComputador)
        {
            printf("empate");
        } else if (escolhaJogador == 1 && escolhaComputador == 3) {
            printf("Jogador vence");
        } else if (escolhaJogador == 2 && escolhaComputador == 1) {
            printf("jogador vence");
        } else if (escolhaJogador == 3 && escolhaComputador == 2) {
            printf("jogador vence");
        } else {
            printf("Jogador perde");
        }
        break;
        

    case 2:
        printf ("escolha entre pedra papel e tesoura para lutar contra o computador\n");
        break;
    
    default:
        printf("invalido");
        break;
    }
}
    

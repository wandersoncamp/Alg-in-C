#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"portuguese_Brazil");
    int x, cont, cart, g[13], A[13];
    
    printf("Digite o número do seu cartão: ");
    scanf("%d", &cart);
    
     for(x=0; x<13; x++){
    	g[x]=1+rand()%3;
	}
    printf("\nOs valores do Gabarito são:");
    for (x=0; x<13; x++){
    	printf("\n%d", g[x]);
    }
    printf("\n");
    cont=0;
    x=0;
    for (x=1; x<13; x++) {
        printf("Digite a aposta do %d° jogo. (1) Vitoria (2) Derrota (3) Empate: ", x);
        scanf("%d", &A[x]);
    }

    for (cont=0, x=1; x<13; x++){
        if (g[x]==A[x]){
            cont++;
        }
    }
    
    if (cont<13) printf("\n\t\tQuantidade de acertos do jogador de cartão %d: %d", cart, cont); 
    
    if (cont==13) printf("\n\t\tVocê teve %d acertos. VOCÊ É O GANHADOR, PARABÉNS! ", cont);
    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char resposta[30];
    memset(resposta, '\0', 30*sizeof(char));
    char senha[] = "QueroVerVoceAcertar";
    printf("Digite a chave de registro: ");
    gets(resposta);
    if (!strcmp(resposta, senha)){
        printf("\nParabens! Voce entrou");
    }
    else{
        printf("Nao foi dessa vez\n");
    }
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char resposta[30];
    memset(resposta, '\0', 30*sizeof(char));
    char senha[] = "QueroVerVoceAcertar";
    int achou = 0;
    printf("Digite a chave de registro: ");
    gets(resposta);
    if (resposta[0]=='Q'){
        if (strlen(resposta)==19){
            if (resposta[5]=='V'){
                if (resposta[8]=='V'){
                    if (resposta[18]=='r'){
                        achou = 1;
                        printf("\nParabens! Voce entrou");
                    }
                }
            }
        }
    }
    if (achou==0){
        printf("Nao foi dessa vez\n");
    }
}

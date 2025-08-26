#include <stdio.h>

int main(){

  int casastorres, casasbispo, casasrainha;
  int t, b, r;

  casastorres = 5;
  casasbispo = 5;
  casasrainha = 8; 

  //Movimento da torre usando o for porque o número de casas é conhecido
  printf("Movimento da Torre:\n");
  for(t = 1; t <= casastorres; t++){
    printf("Direita\n");}

  // Movimento do bispo usando o while porque o número de casas não é conhecido
  printf("Movimento do bispo:\n");
  b = 1;
  while(b <= casasbispo) {
    printf("Cima direita\n");
      b++;
  }

  //Movimento da rainha usando o do while porque garante que o movimento será feito pelo menos uma vez.
   printf("Movimento da Rainha:\n");
  r = 1;
  do{
    printf("Esquerda\n");
    r++;
  } while(r <= casasrainha);

  //Movimento do cavalo usando o for e o while para garantir que o movimento será feito pelo menos uma vez usando loop interno e externo.
  int v,c;
  int casasbaixo, casasesquerda;
  casasbaixo = 2;
  casasesquerda = 1;

  printf("Movimento do Cavalo:\n");
  c = 1;
  for(c = 1; c <= casasbaixo; c++){
    printf("Baixo\n");
  }
  v = 1;
  while(v <= casasesquerda){
    printf("Esquerda\n");
    v++;
  }  
  

  return 0;
}
#include <stdio.h>
/*3. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule
e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a
segunda tabela).
PREÇO ANTIGO PERCENTUAL DE AUMENTO
até R$ 50 5%
entre R$ 50 e R$ 100 10%
acima de R$ 100 15%*/
int main()
 {
  float preco_antigo, preco_novo;
  printf("Digite o preço antigo do produto: ");
  scanf("%f", &preco_antigo);
  
  if (preco_antigo <= 50) 
  {
    preco_novo = preco_antigo * 1.05;
  } 
  else if (preco_antigo > 50 && preco_antigo <= 100)
  {
    preco_novo = preco_antigo * 1.10;
  } 
  else
  {
    preco_novo = preco_antigo * 1.15;
  }
  
  printf("O preço novo é: R$ %.2f\n", preco_novo);
  
  if (preco_novo <= 80) 
  {
    printf("Barato\n");
  } 
  else if (preco_novo > 80 && preco_novo <= 120) 
  {
    printf("Normal\n");
  } 
  else if (preco_novo > 120 && preco_novo <= 200)
  {
    printf("Caro\n");
  } 
  else 
  {
    printf("Muito caro\n");
  }
  
  return 0;
}

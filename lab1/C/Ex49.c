#include <stdio.h>
/*. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma.*/
int main()

{
 int h= 20, m =40, s=50;
 int horas, minutos, segundos;
 int hf, mf, sf;
   printf("A hora inicial eh: %d:%d:%d", h, m, s);
   int duracao = 21800;
   printf("\nA  duracao da experiencia em segundos eh: %d", duracao);
   horas = duracao / 3600;
   minutos = (duracao-(horas*3600))/60;
   segundos = duracao - (horas*3600)-(minutos*60);
   
   hf= h + horas;
   mf= m + minutos;
   sf= s + segundos;
   printf("\nA experiencia terminara as: %d:%d:%d", hf, mf, sf );
   printf("\n");

   return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define taillex 20
#define tailley 20



//initialisation de la matrice consitutant la carte
void initTab(char tab[taillex+2][tailley+2])
{
  for(int y=0;y<tailley+2;y++)
  {
    for(int x=0;x<taillex+2;x++)
    {
      tab[x][y]=' ';
    }
  }
  //place des 8 dans les côtés haut et bas sauf les coins
  for(int x=1;x<tailley+1;x++) 
  {
    tab[x][0]='-';
    tab[x][21]='-';
  }
  //place des 9 dans les côtés droit et gauche
  for(int y=0;y<tailley+2;y++)
  {
    tab[0][y]='|';
    tab[21][y]='|';
  }
  
}

//affichage de la carte
void affCarte(char tab[taillex+2][tailley+2])
{
  for(int y=0;y<tailley+2;y++)
  {
    for(int x=0;x<taillex+2;x++)
    {
      printf("%c",tab[x][y]);
    }
    printf("\n");
  }
}








int main() 
{
  srand( time( NULL ) );
  char carte[taillex+2][tailley+2] = {' '};
  initTab(carte);
  affCarte(carte);

  return 0;
}



  
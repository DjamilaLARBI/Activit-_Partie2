#include "fichier.h"

main()
{
    
   int i;
    
   float x;
    
   float racx;
    
       
   printf("Bonjour!\n");
    
   printf ("je vais vous calculer %d racines carrées.\n", NFOIS);
    
   
   for(i=1; i<=NFOIS; i++)
   {
      printf ("Donnez un nombre: ");
        
      scanf("%f", &x);
  
      
      if (x<0.0f) printf("Le nombre %f ne possède pas de racine carrée.\n",x);
        
      else
        
      {
            
         racx = sqrt(x);
            
         printf ("Le nombre %f a pour racine carrée:%f\n", x, racx);
        }
        
        
  
       
      }

    }

   printf("Travail terminé - Au revoir!");

   

   return 0;
 
}
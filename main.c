#include <stdio.h>

#include <math.h>

main()
{
    
   int i;
    
   float x;
    
   float racx;
    
   int NFOIS=1;
    
    
   printf("Bonjour!\n");
    
   printf ("je vais vous calculer %d racines carr�es.\n", NFOIS);
    
   printf ("Donnez un nombre: ");
        
   scanf("%f", &x);
        
   if (x<0.0f) printf("Le nombre %f ne poss�de pas de racine carr�e.\n",x);
        
   else
        
   {
            
      racx = sqrt(x);
            
      printf ("Le nombre %f a pour racine carr�e:%f\n", x, racx);
        }
        
        
  
      
   }
   printf("Travail termin� - Au revoir!");

   
   return 0;
 
}
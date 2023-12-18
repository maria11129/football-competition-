#include <stdio.h>

   #define MAX_TEAMS 20 
 
  struct 
     {
         char team_name[20];

         int rank ;

         int goals;

     } score;

     
      score s[MAX_TEAMS];
     
     s scr;
    

        int main()

        {
                int n;
                

          printf("enter how many teams theyre (10-20) :");

          scanf("%d",&n);

        /* while (n<10 || n>20)

          {

              printf("invalid input. please enter a value between (10-20):");

              scanf("%d",&n);


          }*/    // i made this loop as a comment cause im still testing 



printf("\n\n");


      for (int i=0 ; i<n ; i++)

      {    
         printf("\n\n");
        
          printf("THE TEAMS LISTS INFORMATIONS\n\n");

          printf("|enter the name of team^%d : ",i+1);

          scanf("%s",&scr[n].team_name);


        
         printf("---------------------------------------\n");


          printf("|enter teams^%d initial rank : ",i+1);

          scanf("%d",&scr[n].rank);


           printf("---------------------------------------");

           printf ("\n");


           printf("|enter teams^%d initial goal : ",i+1);

          scanf("%d",&scr[n].goals);



      }




   return 0;     }
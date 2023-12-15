  
   #include <stdio.h>
   #define MAX_TEAMS 20 
 
 typedef struct 
     {
         char team_name[20];

      

     } score;

     
     typedef score s[MAX_TEAMS];
     
     s scr;
    

        int main()

        {

             int rank=0 ;

            int goals=0;

           int n;
                

          printf("enter how many teams theyre (10-30) :");

          scanf("%d",&n);

        /* while (n<10 || n>20)

          {

              printf("invalid input. please enter a value between (10-20):");

              scanf("%d",&n);


          }*/    // i made this loop as a comment cause im still testing 






      for (int i=0 ; i<n ; i++)

      {    
         printf("\n\n");
        
        printf("TEAMS^ %d LISTS INFORMATIONS\n\n",i+1);

        printf("\n\n");


          printf("|enter the name of team^ %d : ",i+1);

          scanf("%s",&scr[n].team_name);


        
         printf("---------------------------------------\n");


          printf("| teams^ %d initial rank : %d \n",i+1, rank);

          


           printf("---------------------------------------\n");

           


           printf("| teams^ %d initial goal : %d\n",i+1 , goals);

          
          printf("---------------------------------------\n");


      }




   return 0;     }
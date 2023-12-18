  
   #include <stdio.h>
   #define MAX_TEAMS 20 
 
 typedef struct 
     {
         char team_name[20];

              int  rank ;
              int  goals;
              int points;

     } info;

     
 
   

        int main()

        {



            

           int n;
              

          printf("enter how many teams theyre (10-20) :"); 

          scanf("%d",&n);

             
         while (n<10 || n>20)

          {

              printf("invalid input. please enter a value between (10-20):");

              scanf("%d",&n);


          }    


   
     info team[n];

 

      for (int i=0 ; i<n ; i++)

      {    
         printf("\n\n");
        
        printf("TEAMS^ %d LISTS INFORMATIONS\n\n",i+1);

        printf("\n\n");


          printf("|enter the name of team^ %d : ",i+1);

          scanf("%s",&team[n].team_name);

         printf("---------------------------------------\n");

      }




   return 0;     }
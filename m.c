

#include <stdio.h>

int main() {
    int n, s, l; // n hiya la taille ta3 l array ta3na

    printf("Enter the length of the table: ");

    scanf("%d", &n);

    while (n <= 2 || n >= 50) 
    
    {
        printf("Enter a valid length for the table (between 2 and 50): ");
        scanf("%d", &n);
    }



    int T[50];

    printf("\n");

    for (int i = 0; i < n; i++)
    
    
     {
        printf("Enter element %d: ", i + 1);    // men lfo9 hta lehna ani ndkhl berk n w elements ta3 T
        scanf("%d", &T[i]);
    }





    printf("\n");

    printf("Enter s: "); // s is the index where we start inversing
   
    scanf("%d", &s);

   
    printf("Enter l: "); // l is the length of the inverse
   
    scanf("%d", &l);

    while (s < l)
    
     {
        // Échange des éléments aux indices start et end
        int temp = T[s];
        T[s] = T[l];
        T[l] = temp;

        // Déplacement des indices
        s++;
        l--;
    }

    printf("\nInverted elements:\n");


    for (int i = 0; i < n; i++) 
    
    
    {
        printf("%d ", T[i]);
    }

    printf("\n");

    return 0;
}
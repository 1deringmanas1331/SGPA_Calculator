
// Import the Library's stdio.h and stdlib.h
#include<stdio.h>
#include<stdlib.h>

// Define the main function
int main()

// Take variables for each subject
{
   char s;int grade1,grade2,grade3,grade4,grade5,grade6;
   double SGPA=0.0,SGPA1=0.0;
   int sum,sum1;

    //Ask the user which Cycle(P or C)
    printf("Enter the current Cycle(Enter P-physics and C-chemistry)");
    scanf("%s",&s);

    //Calculate the SGPA based on the grades after checking if it is physics or chemistry cycle
    // Check if it is physics cycle
    if(s=='p' || s=='P')
    {
        // Ask the user the grade in each subject
        printf("Enter the grade in EEE(In the range[1,10]) :");
        scanf("%d",&grade1);
         printf("Enter the grade in Physics(In the range[1,10]) :");
        scanf("%d",&grade2);
         printf("Enter the grade in Mechanical(In the range[1,10]) :");
        scanf("%d",&grade3);
         printf("Enter the grade in Programming with C(In the range[1,10]) :");
        scanf("%d",&grade4);
         printf("Enter the grade in Mathematics(In the range[1,10]) :");
        scanf("%d",&grade5);
         printf("Enter the grade in EVS(In the range[1,10]) :");
        scanf("%d",&grade6);
       // Calculate the SGPA based on the formula below
        sum=(grade1*4+grade2*5+grade3*3+grade4*5+grade5*4+grade6);
          SGPA=sum/22.0;
        // Display SGPA calculated
         printf("SGPA obtained is :%.2f",SGPA);

    }
    // Check if it is chemistry cycle 
    
    else if (s=='c' || s=='C')
    {
        // Ask the user the grade in each subject
         printf("Enter the grade in Electronics and communication(In the range[1,10]) :");
        scanf("%d",&grade1);
         printf("Enter the grade in Chemistry(In the range[1,10]) :");
        scanf("%d",&grade2);
         printf("Enter the grade in Civil(In the range[1,10]) :");
        scanf("%d",&grade3);
         printf("Enter the grade in Programming with Python(In the range[1,10]) :");
        scanf("%d",&grade4);
         printf("Enter the grade in Mathematics(In the range[1,10]) :");
        scanf("%d",&grade5);
         printf("Enter the grade in Constituition(In the range[1,10]) :");
        scanf("%d",&grade6);
        // Calculate the SGPA based on the formula below
         sum1=(grade1*4+grade2*5+grade3*3+grade4*5+grade5*4+grade6);
         SGPA1=sum1/22.0;
        // Display SGPA calculated
         printf("SGPA obtained is :%.2f",SGPA1);
    }
    else
      //If it is any other cycle name mentioned default message is displayed 
      printf("No such cycle exists");
    
}

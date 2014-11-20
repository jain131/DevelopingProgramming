#include <stdio.h>
#include <stdlib.h>

//Function prototype to calculate Fibonacci series
void Extra();
void CalcFib(int r);												

int main()
{
  //Welcome Screen
  printf("Welcome to Calculator. \n");							
  char check;
  int r;
  int ch;
  char opt;
  float var1, var2;
  float res;
  FILE * Log;
  
  //Opening a new file for Logging info. Opening in reading and writing mode
  Log = fopen ("Log.txt", "w+");							
      
    do
    { 															
      printf("Please select an Arithmetic operation from the following: \n");			
      printf("1)Addition \t 2)Subtraction \t 3)Multiplication \t 4)Division \t 5)Extra Features \n ");
      
      //Input of operation, A SPACE before %d makes scanf ignore whitespace
      scanf(" %d", &ch);											
      
      if(ch!=5)
      {
        //Asking user if he wants to use saved previous result
        printf("Do you want to use the previous result as one of the operands (Y/N)? \n");
        scanf(" %c", &opt);													
      
        printf("Enter any values for operand(s): \n");
        if(opt=='Y' || opt=='y')
          {
            printf("Operand 1 is the previous result: ");
            rewind(Log);
            //Taking value from the LOG text file for variable 1
            fscanf(Log, " %f", &var1);									
            printf("%f \n", var1);
          }  
      
        else 
        {
          printf("Operand 1: "); 
          scanf("%f", &var1);										
        }
        
        printf("Operand 2: "); 
        /* An optional starting asterisk or space indicates 
      	*that the data is to be read from the stream but 
        *ignored, i.e. it is not stored in the corresponding argument.	
      	*Input of variable2 */
      	
        scanf(" %f", &var2);
        
        //Switch case construct: Statements for different conditions 
        switch(ch) 												
        {
          case 1: res=var1+var2; break;
          case 2: res=var1-var2; break;
          case 3: res=var1*var2; break;
          case 4: res=var1/var2; break;
        }
         
        //Displaying result from file
        printf("\nThe Result= %f \n", res); 						
      
        rewind(Log);
        //Logging the result
        fprintf(Log, " %f", res);								
      
      }
      
      //Calling the CalcFib() function and passing range as parameter.
      else Extra(); 									 
      
      //Asking user to continue or exit
      printf("Continue y/n?  ");								
      scanf(" %c",&check);										
      
    }while(check!='n');    				
   
    // Closing opened text file
    fclose(Log);													
   
return(0);
}


//! Function to use Extra features of the Calculator
void Extra()												
{ 
  int ch,r;
  printf("\nSelect from the following options: \n1)Fibonacci Series \n");
  scanf(" %d",&ch);
  switch(ch)
  {
    case 1: printf("Enter the range of Fibonacci series: \n "); scanf(" %d",&r); CalcFib(r); break;
  }
}


//! Function to print Fibonacci Series according to input of the range by the user
void CalcFib(int r)											
{
  int j=0, k=1, res;
  printf("FIBONACCI SERIES: ");
  
  //printing first two values.
  printf("%d %d",j,k); 

    for(int i=2;i<r;i++)
    {
      res=j+k;
      j=k;
      k=res; 
      printf(" %d",k);
    }  
  printf("\n"); 
}

/*! Flowchart diagram: 
* \image FlowchartCalc.png
*/



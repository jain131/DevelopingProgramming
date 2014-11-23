/*!
************ CALCULATOR **********************************
********** Created By Nishant Jain ***********************
*** Has basic Arithmetic operations and Extra Features ***
* Extras: Fibonacci Series and Bitwise Operations ********
*/

#include <stdio.h>
#include <stdlib.h>
/*
*Included math.h library
*Used functions sqrt() and pow()
*/
#include <math.h>

//Function prototype 
void Extra();
void CalcFib(int r);	
void Bitwise();											

/*!
* 1 while loop
* 2 if- else selection (NESTED)
* 2 switch-case constructs
* 1 for loop
*/

int main()
{
  //Welcome Screen
  printf("Welcome to Calculator. \n");	
  /*! 
  * Flowchart diagram: 
  * \image html FlowchartCalc.jpeg
  */
						
  char check='y';
  int r;
  int ch;
  char opt;
  float var1, var2;
  float res;
  FILE * Log;
  
  //Opening a new file for Logging info. Opening in reading and writing mode
  Log = fopen ("Log.txt", "w+");							
      
    while(check!='n')
    { 															
      printf("Please select an Arithmetic operation from the following: \n");			
      printf("1)Addition \t 2)Subtraction \t 3)Multiplication \n4)Division"
      " \t 5)Power \t 6)Extra Features \n");
      
      //Input of operation, A SPACE before %d makes scanf ignore whitespace
      scanf(" %d", &ch);											
      
      //Condition for Extra Features option
      if(ch!=6)
      {
        //Asking user if he wants to use saved previous result
        printf("Do you want to use the previous result as "
        "one of the operands (Y/N)? \n");
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
          case 5: res=pow(var1,var2); break;
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
      printf("\nContinue y/n?  ");								
      scanf(" %c",&check);										
      
    }    				
   
    // Closing opened text file
    fclose(Log);													
   
return(0);
}


//! Function to use Extra features of the Calculator
void Extra()												
{ 
  int ch,r;
  //Variable for square root option
  float sq;
  printf("\nSelect from the following options: \n1)Fibonacci Series"
  " \n2)Bitwise Operations \n3)Square root \n");
  scanf(" %d",&ch);
  switch(ch)
  {
    case 1: printf("\nEnter the range of Fibonacci series: \n "); 
    		scanf(" %d",&r); CalcFib(r); break;
    		
    case 2: Bitwise(); break;
    //Case for square root
    case 3:	printf("Enter the number you want the square root of: ");
    		scanf(" %f",&sq);  printf("\n Square root of %f: ",sq); 
    		sq=sqrt(sq); printf("%f",sq);  break;
  }
}
 

//! Function to print Fibonacci Series according to input of the range by the user
void CalcFib(int r)											
{
  int j=0, k=1, res;
  long int sum=0;
  
  printf("FIBONACCI SERIES: ");
  //printing first two values.
  printf("%d %d",j,k); 

  /*!Using increment operator in for loop
  * Displaying Fibonacci series
  * Using "+=" operator
  * Finding Sum of Fibonacci series
  */
  
  for(int i=2;i<r;i++)
  {
    res=j+k;
    j=k;
    k=res; 
    printf(" %d",k); 
    sum+=k;
  }  
  printf("\nSum of Fibonacci series= %ld \n", sum); 
}

//!Function to use bit operations on variables (input from the user)
void Bitwise()
{
  int A, B, C;
  printf("Type two integers to learn about bitwise operations. A= ");
  scanf(" %d", &A);
  printf("\n B= ");
  scanf(" %d", &B);
  C= A & B;
  printf("AND: A & B = %d \n", C);
  C= A | B;
  printf("OR: A | B = %d \n", C);
  C= A ^ B;
  printf("XOR: A ^ B = %d \n", C);
  C= ~A;
  printf("COMPLEMENT: ~A = %d \n", C);
  C= A <<2;
  printf("LESFT SHIFT: A <<2 = %d \n", C);
  C= A >>2;
  printf("RIGHT SHIFT: A >>2 = %d \n", C);

}






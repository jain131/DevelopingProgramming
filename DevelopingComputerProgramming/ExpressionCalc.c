<<<<<<< HEAD
<<<<<<< HEAD
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
=======
=======
>>>>>>> elements
/*!*********************************************************************
*
* Original Author: Nishant Jain
* File Creation Date: 25 November 2014
* Description: A Calulator program with basic Arithmetic Operations
* and some extra features such as sum of Fibonacci series, 
* bitwise operations and square-root function
**********************************************************************/

#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
>>>>>>> master
=======
>>>>>>> elements
#include <math.h>

//Function prototype 
void Extra();
<<<<<<< HEAD
<<<<<<< HEAD
void CalcFib(int r);	
void Bitwise();											
=======
void CalcFib(int r);
void Bitwise();
>>>>>>> master

/*!
* 1 while loop
* 2 if- else selection (NESTED)
* 2 switch-case constructs
* 1 for loop
*/

=======
void CalcFib(int r);
void Bitwise();

/*!
* 1 while loop
* 2 if- else selection (NESTED)
* 2 switch-case constructs
* 1 for loop
*/

>>>>>>> elements
/*!**********************************************************************
* Module Name: main
*
* Original Author: Nishant
*
* Module Creation Date: November 25, 2014
*
* Description: Calls arithmetic functions and uses file to log outputs
*
* Required Files/Databases:
* Log.txt
*
* Non System Routines Called:
* None
*
* Return Value:
* Type Description
* int return(0)
*
* OS Specific Assumptions:
* None
*
* Local Variables:
* Name Type Description
* check char To see if user wants to continue
* ch int User's choice of operation
* opt char User's choice of getting value from log file
* var1 float Operand 1
* var2 float Operand 2
* res float Result of Arithmetic operation
*
* Modification History:
* Date Developer Action
* 8/20/2004 Jane Doe Changed the equation used to convert
* Celsius to Fahrenheit.
* 
***********************************************************************/
int main()
{
  //Welcome Screen
<<<<<<< HEAD
<<<<<<< HEAD
  printf("Welcome to Calculator. \n");	
=======
  printf("Welcome to Calculator. \n");
>>>>>>> master
=======
  printf("Welcome to Calculator. \n");
>>>>>>> elements
  /*! 
  * Flowchart diagram: 
  * \image html FlowchartCalc.jpeg
  */
<<<<<<< HEAD
<<<<<<< HEAD
						
  char check='y';
  int r;
=======

  char check='y';
>>>>>>> master
=======

  char check='y';
>>>>>>> elements
  int ch;
  char opt;
  float var1, var2;
  float res;
  FILE * Log;

  //Opening a new file for Logging info. Opening in reading and writing mode
<<<<<<< HEAD
<<<<<<< HEAD
  Log = fopen ("Log.txt", "w+");							
      
    while(check!='n')
    { 															
      printf("Please select an Arithmetic operation from the following: \n");			
      printf("1)Addition \t 2)Subtraction \t 3)Multiplication \n4)Division"
      " \t 5)Power \t 6)Extra Features \n");
=======
  Log = fopen ("Log.txt", "w+");
>>>>>>> master
=======
  Log = fopen ("Log.txt", "w+");
>>>>>>> elements
      
  while(check!='n')
  { 
    printf("Please select an Arithmetic operation from the following:\n");
    printf("1)Addition \t 2)Subtraction \t 3)Multiplication \n4)Division"
    "\t 5)Power \t 6)Extra Features \n");
    
    //Input of operation, A SPACE before %d makes scanf ignore whitespace
    scanf(" %d", &ch);
    
    //Condition for Extra Features option
    if(ch!=6)
    {
      //Asking user if he wants to use saved previous result
      printf("Do you want to use the previous result as"
        " one of the operands (Y/N)? \n");
      scanf(" %c", &opt);
      printf("Enter any values for operand(s): \n");
      
<<<<<<< HEAD
<<<<<<< HEAD
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
      
=======
      if(opt=='Y' || opt=='y')
      {
        printf("Operand 1 is the previous result: ");
>>>>>>> master
=======
      if(opt=='Y' || opt=='y')
      {
        printf("Operand 1 is the previous result: ");
>>>>>>> elements
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
      
<<<<<<< HEAD
<<<<<<< HEAD
      //Calling the CalcFib() function and passing range as parameter.
      else Extra(); 									 
      
      //Asking user to continue or exit
      printf("\nContinue y/n?  ");								
      scanf(" %c",&check);										
      
    }    				
   
    // Closing opened text file
    fclose(Log);													
   
=======
      printf("Operand 2: "); 
      /*! 
      * An optional starting asterisk or space indicates 
      * that the data is to be read from the stream but 
      * ignored, i.e. it is not stored in the corresponding argument.
      * Input of variable2 
      */
      scanf(" %f", &var2);
      
=======
      printf("Operand 2: "); 
      /*! 
      * An optional starting asterisk or space indicates 
      * that the data is to be read from the stream but 
      * ignored, i.e. it is not stored in the corresponding argument.
      * Input of variable2 
      */
      scanf(" %f", &var2);
      
>>>>>>> elements
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
      //Rewind to go back to the starting of the file
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
  
<<<<<<< HEAD
>>>>>>> master
=======
>>>>>>> elements
return(0);
}


//! Function to use Extra features of the Calculator
/*!**********************************************************************
* Module Name: Extra
*
* Original Author: Nishant Jain
*
* Module Creation Date: November 27, 2014
*
* Description: This function calculates square root. 
* Calls CalcFib() and Bitwise()
*
* Required Files/Databases:
* None
*
* Non System Routines Called:
* None
*
* Return Value: 
* None
*
* OS Specific Assumptions:
* None
*
* Local Variables:
* ch integer User's choice for operation
* r integer Parameter passed as range of fibonacci series
* sq float Square root of input number
*
***********************************************************************/
void Extra()
{ 
  int ch,r;
<<<<<<< HEAD
<<<<<<< HEAD
  //Variable for square root option
  float sq;
=======
  float sq;

>>>>>>> master
=======
  float sq;

>>>>>>> elements
  printf("\nSelect from the following options: \n1)Fibonacci Series"
  " \n2)Bitwise Operations \n3)Square root \n");
  scanf(" %d",&ch);
  
  switch(ch)
  {
<<<<<<< HEAD
<<<<<<< HEAD
    case 1: printf("\nEnter the range of Fibonacci series: \n "); 
    		scanf(" %d",&r); CalcFib(r); break;
    		
    case 2: Bitwise(); break;
    //Case for square root
    case 3:	printf("Enter the number you want the square root of: ");
    		scanf(" %f",&sq);  printf("\n Square root of %f: ",sq); 
    		sq=sqrt(sq); printf("%f",sq);  break;
=======
=======
>>>>>>> elements
    case 1:
    printf("\nEnter the range of Fibonacci series: \n "); 
    scanf(" %d",&r);
    CalcFib(r); break;
    
    case 2:
    Bitwise(); break;

    case 3:
    printf("Enter the number you want the square root of: ");
    scanf(" %f",&sq);
    printf("\n Square root of %f: ",sq); 
    sq=sqrt(sq);
    printf("%f",sq);  break;
<<<<<<< HEAD
>>>>>>> master
=======
>>>>>>> elements
  }
}
 

<<<<<<< HEAD
<<<<<<< HEAD
//! Function to print Fibonacci Series according to input of the range by the user
void CalcFib(int r)											
{
  int j=0, k=1, res;
=======
/*!**********************************************************************
* Module Name: CalcFib
*
* Original Author: Nishant Jain
*
* Module Creation Date: November 27, 2014
*
* Description:This function finds sum of Fibonacci Series
*
* Required Files/Databases:
* None
*
* Non System Routines Called:
* None
*
* Return Value: 
* None
*
* OS Specific Assumptions:
* None
*
* Local Variables:
* j integer used for calculating sum
* i integer used in for loop
* k integer used to calulate sum
* res integer used to calulate sum
* sum long integer to store sum of fibonacci series
*
***********************************************************************/ 
void CalcFib(int r)
{
  int j=0, i=2, k=1, res;
>>>>>>> master
=======
/*!**********************************************************************
* Module Name: CalcFib
*
* Original Author: Nishant Jain
*
* Module Creation Date: November 27, 2014
*
* Description:This function finds sum of Fibonacci Series
*
* Required Files/Databases:
* None
*
* Non System Routines Called:
* None
*
* Return Value: 
* None
*
* OS Specific Assumptions:
* None
*
* Local Variables:
* j integer used for calculating sum
* i integer used in for loop
* k integer used to calulate sum
* res integer used to calulate sum
* sum long integer to store sum of fibonacci series
*
***********************************************************************/ 
void CalcFib(int r)
{
  int j=0, i=2, k=1, res;
>>>>>>> elements
  long int sum=0;
  
  printf("FIBONACCI SERIES: ");
  //printing first two values.
  printf("%d %d",j,k); 

<<<<<<< HEAD
<<<<<<< HEAD
  /*!Using increment operator in for loop
=======
  /*
  * Using increment operator in for loop
>>>>>>> master
=======
  /*
  * Using increment operator in for loop
>>>>>>> elements
  * Displaying Fibonacci series
  * Using "+=" operator
  * Finding Sum of Fibonacci series
  */
  
<<<<<<< HEAD
<<<<<<< HEAD
  for(int i=2;i<r;i++)
=======
  for(i=2;i<r;i++)
>>>>>>> master
=======
  for(i=2;i<r;i++)
>>>>>>> elements
  {
    res=j+k;
    j=k;
    k=res; 
    printf(" %d",k); 
    sum+=k;
  }  
  printf("\nSum of Fibonacci series= %ld \n", sum); 
}

<<<<<<< HEAD
<<<<<<< HEAD
//!Function to use bit operations on variables (input from the user)
void Bitwise()
{
  int A, B, C;
=======
=======
>>>>>>> elements
/*!**********************************************************************
* Module Name: Bitwise
*
* Original Author: Nishant Jain
*
* Module Creation Date: November 27, 2014
*
* Description: This function uses and displays bit operations on variables
*
* Required Files/Databases:
* None
*
* Non System Routines Called:
* None
*
* Return Value: 
* None
*
* OS Specific Assumptions:
* None
*
* Local Variables:
* A integer used for calculating sum
* B integer used in for loop
* C integer used to calulate sum
*
***********************************************************************/
void Bitwise()
{
  int A, B, C;

<<<<<<< HEAD
>>>>>>> master
=======
>>>>>>> elements
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






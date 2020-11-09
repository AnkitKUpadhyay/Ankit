// #include<stdio.h>

// int main (void)

// {
//     int sum;

//     sum= 50 + 35;
//     printf("The sum of 50 and 35 is %i\n", sum);
//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     printf(" In C, lowercase letters are significant.\n");
//     printf(" main() is where program execution begins.\n");
//     printf(" Opening and closing brackets enclose programs within a routine.\n");
//     printf(" All program statements must be terminated by semicolon.\n");
//     return 0;
// }



// #include <stdio.h>

// int main(void)
// {
//     printf("Testing...");
//     printf("....1");
//     printf("...2");
//     printf("..3");
//     printf("\n");

//     return 0;
// }



// #include <stdio.h>

// int main(void)
// {
//     int first_number, second_number, difference;

//     first_number = 123;
//     second_number = 87;
//     difference = first_number - second_number;

//     printf("The difference of %#o and %#o is %i\n", first_number, second_number, difference);

//     return 0;
// }



// #include <stdio.h>

// int main (void)
// {
//     for (int i=0; i<3; i++)
// {    
//         printf("cough\n");
// }
// }


// #include <stdio.h>
// int main(void)

// {
// int rgbColor = 0xFFEF0D;
// printf("Color is %#x\n", rgbColor);
// }




// #include <stdio.h>

// int main(void)
// {
//     float first_number, second_number, difference;

//     first_number = 2.25e-6;
//     second_number =6.4e9 ;
//     difference = first_number - second_number;

//     printf("The difference of %f and %f is %f\n", first_number, second_number, difference);

//     return 0;
// }




// 1.calculating triangular number

// #include<stdio.h>
// int main(void)
// {
//     int triangularNumber;
//     triangularNumber= 1+2+3+4+5+6+7+8;
//     printf("The eighth triangular number is %i\n",triangularNumber);

//     return 0;
// }




// // 2. Introduction to "FOR" statement:
// #include<stdio.h>
// int main(void)
// {
//     int i, triangularNumber;
//     triangularNumber=0;
//     for(i=0; i<=200; i++)
//     {
//         triangularNumber = triangularNumber + i ;
//     }
// printf("The 200th triangular number is %i\n", triangularNumber);
// return 0;
// }



// Generating a table of trainglular numbers:

// #include<stdio.h>
// int main(void)
// {
//     int n, triangularNumber;
//     printf(" TABLE OF TRIANGULAR NUMBERS\n\n ");
//     printf("n              Sum from 1 to n\n");
//     printf("---           ------------------\n");

//     triangularNumber = 0;
//     for(n=1; n<=10; n++)
//         {triangularNumber += n;
//         printf("%2i                 %i\n",n,triangularNumber);
//         }
//     return 0;
// }


//Asking the user for INPUT:

// #include<stdio.h>
// int main(void)
// {
//     int n, number, triangularNumber;
//     printf("What triangular number do you want? ");
//     scanf(" %i", &number);

//     triangularNumber=0;
//     for(n=1; n<=number; n++)
//         triangularNumber+=n ;

//     printf("The triangular number is %i\n", triangularNumber);

//     return 0;
// }


//Using NESTED FOR loops:

// #include<stdio.h>
// int main(void)
// {
//     int i,n,number,triangularNumber ;
//     for( i=1; i<=5; i++)            ( init_expression, loop condition, loop expression)
//     {
//         printf("What triangular number do you want? ");
//         scanf("%i", &number);

//         triangularNumber=0;
//         for(n=1; n<=number; n++)
//         triangularNumber+=n;

//         printf("Triangular number is %i\n\n", triangularNumber);
//     }

//     return 0;
// }



// Use of WHILE statement:

// #include<stdio.h>
// int main(void)
// {
//     int count=1;     // (initial expression)
//     while(count<=5)     //(loop condition)
//     {
//         for();
//         count++ ;              //(loop expression)

//     }
//     return 0;
// }



/* program to find the greatest common divisor
of two non negative integers values  */

// #include<stdio.h>
// int main(void)
// {
//     int u,v,temp;

//     printf("Please type in two non-negative integers. ");
//     scanf("%i%i", &u, &v);

//     while(v!=0)
//     {
//         temp= u%v ;
//         u = v;
//         v = temp;
//     }

//     printf("Their greatest common divisor is %i\n", u);

//     return 0;
// }




// Reversing the digit of a number:

// #include <stdio.h>
// int main(void)
// {
//     int a, right_digit;

//     printf("Enter a number: ");
//     scanf("%i", &a);

//     while (a!=0)
//     {
//         right_digit= a%10;
//         printf("%i", right_digit);
//         a= a/10;
//     }
//     printf("\n");
//     return 0;
// }




//use of DO WHILE loop:

// #include<stdio.h>
// int main(void)
// {
//     int a, right_digit;
//     printf("Enter a number: ");
//     scanf("%i", &a);

//     do{
//         right_digit=a%10;
//         printf("%i", right_digit);
//         a=a/10;
    
//     }
//     while(a!=0);

//     printf("\n");

//     return 0;
    
// }






// Stephen G. Kochlan  Chapter 3 Q.No.2

// #include<stdio.h>
// int main(void)
// {
//     printf("Table representing number and its square\n");
//     printf("________________________________________\n\n\n");
//     printf("n                           n^2\n");
//     printf("--                          ----\n\n\n");

//     int n ;
//     for(n=1;n<=10;n++)
//     {
//         printf("%2i                        %3i\n",n,n*n );
//     }

//     printf("\n");
//     return 0;
// }



//Q.No.3

// #include<stdio.h>
// int main(void)
// {
//     int n,triangular_number, number, counter;
    


//     for(counter=1; counter<=5; ++counter)
//     {
//         printf("Which triangular number do you want: ");
//         scanf("%d", &number);
        
//         triangular_number=0;
//         for(n=1; n<=number; ++n)
//     {
//             triangular_number+=n;
        
//     }
//         printf("The %i triangular number is %i\n\n", number, triangular_number);
//     }
//     printf("\n");
//     return 0;
//     }



//Q.No. 4
// #include<stdio.h>
// int main(void)
// {
//     printf("n                        n!\n");
//     printf("---                     ----\n\n");

//     int n, factorial;
//     for(n=1; n<=10; n++)
//     {
//         factorial= 
//     }
// }






// //Q.No. 11   sum of digits
// #include <stdio.h>
// int main(void)
// {
//     int number, right_digit,sum;
//     printf("Enter a number ");
//     scanf("%i", &number);
//     sum=0;
//     do{
//         right_digit = number%10;
//         sum=sum+ right_digit;
//         number=number/10;
//     }
//     while(number!=0);
//     printf("sum= %i\n",sum );
//     return 0;
// }


// factorial of a number
// #include<stdio.h>
// int main (void)
// {
//     int number,factorial;
//     printf("Enter a number ");
//     scanf("%i", &number);
//     factorial=1;
//     do{
//         factorial=factorial*number;
//         number= number-1;
//     }
//     while(number!=0);
//     printf("factorial = %i\n",factorial);
//     return 0;
// }



// bool choice;
// if(choice==1)
// {
// printf("I am in");
// else
// printf("nope I will leave");
// }

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
                                                    // CPS ASSIGNMENT 2

// #include<stdio.h>
// int main()
// {
// int x, y = 5, z = 5;
// x = y == z;
// printf("%d", x);
// getchar();
// return 0;
// }

















// #include <stdio.h>
// int main()
// {
// int i = (1, 2, 3);
// printf("%d", i);
// return 0;
// }














// #include <stdio.h>
// int main()
// {
// int i = 1,2,3;
// printf("%d", i);
// return 0;
// }















// #include <stdio.h>
// int main()
// {
// int i;
// i = 1, 2, 3;
// printf("%d", i);
// return 0;
// }





// #include <stdio.h>
// int main()
// {
// int i = 3;
// printf("%d", (++i)++);
// return 0;
// }







// #include <stdio.h>
// int main()
// {
// int a = 1;
// int b = 1;
// int c = a || --b;
// int d = a-- && --b;
// printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
// return 0;
// }





// #include <stdio.h>
// int main()
// {
// int a = 10, b = 20, c = 30;
// if (c > b > a)
// printf("TRUE");
// else
// printf("FALSE");
// return 0;
// }




// #include <stdio.h>
// int main()
// {
// printf("%d", 1 << 2 + 3 << 4);
// return 0;
// }










// #include <stdio.h>
// int main()
// {
// int i = 0;
// do
// {
// printf("JSSATEB,CSE,SECTION’A’");
// i = i++;
// }
// while (i < 5);

// return 0;
// }





// #include <stdio.h>
// int main()
// {
// int i = 12;
// int j = sizeof(i++);
// printf("%d %d", i, j);
// return 0;
// }





// #include<stdio.h>
// int main()
// {
// int a = 2,b = 5;
// a = a^b;
// b = b^a;
// printf("%d %d",a,b);
// return 0;
// }






// # include <stdio.h>
// int main()
// {
// int x = 10;
// int y = 20;
// x += y += 10;
// printf (" %d %d", x, y);
// return 0;
// }





// #include <stdio.h>
// int main()
// {
// int a = 10, b = 100;
// float c = 10.5, d = 100.5;
// printf("++a = %d \n", ++a);
// printf("--b = %d \n", --b);
// printf("++c = %f \n", ++c);
// printf("--d = %f \n", --d);
// return 0;
// }




// #include <stdio.h>
// int main()
// {
// int a = 5, c;
// c = a; // c is 5
// printf("c = %d\n", c);
// c += a; // c is 10
// printf("c = %d\n", c);
// c -= a; // c is 5
// printf("c = %d\n", c);
// c *= a; // c is 25
// printf("c = %d\n", c);
// c /= a; // c is 5
// printf("c = %d\n", c);
// c %= a; // c = 0
// printf("c = %d\n", c);
// return 0;
// }






// #include <stdio.h>
// int main()
// {
// int a = 5, b = 5, c = 10;
// printf("%d == %d is %d \n", a, b, a == b);
// printf("%d == %d is %d \n", a, c, a == c);
// printf("%d > %d is %d \n", a, b, a > b);
// printf("%d > %d is %d \n", a, c, a > c);
// printf("%d < %d is %d \n", a, b, a < b);
// printf("%d < %d is %d \n", a, c, a < c);
// printf("%d != %d is %d \n", a, b, a != b);
// printf("%d != %d is %d \n", a, c, a != c);
// printf("%d >= %d is %d \n", a, b, a >= b);
// printf("%d >= %d is %d \n", a, c, a >= c);
// printf("%d <= %d is %d \n", a, b, a <= b);
// printf("%d <= %d is %d \n", a, c, a <= c);
// return 0;
// }


// #include <stdio.h>
// void main()
// {
//    int x=5;
//    if(x<1) 
//    printf("hello");
//    if(x==5)
//    printf("hi");
//    else
//    printf("no");
// }


// #include <stdio.h>
// main()
// {
//    char *s= "JSSATE";
//    *s='N';
//    printf("%s",s);
// }


// #include <stdio.h>
// int main()
// // {
//    int i,j,k,count;
//    count=0;
//    for(i=0;i<5;i++)
//    {
//       for (j=0; j<5; j++)
//       {
//          count++;
//       }
//    }
//    printf("%d",count);
//    return 0;
// }

// {
//    const int a=10;
//    printf("%d", ++a);
//    return 0;
// }

// {char c= 'A'+255;
// printf("%c",c);
// }

// {
//    int a=10;
//    printf("%d &i",a,10);
// }

// #include <stdio.h>
//  /* count lines in input */
// main()

// {
// int c, nl;
// nl = 0;
// while ((c = getchar()) != EOF)
//    if (c == '\n')
//       ++nl;
// printf("%d\n", nl);
// }

/*************************************************
 * C program to count no of lines, words and 	 *
 * characters in a file.			 *
 *************************************************/

// #include <stdio.h>

// int main()
// {
// FILE *fp;
// char filename[100];
// char ch;
// int linecount, wordcount, charcount;

// // Initialize counter variables
// linecount = 0;
// wordcount = 0;
// charcount = 0;

// // Prompt user to enter filename
// printf("Enter a filename :");
// gets(filename);
  
// // Open file in read-only mode
// fp = fopen(filename,"r");

// // If file opened successfully, then write the string to file
// if ( fp )
// {
// 	//Repeat until End Of File character is reached.	
// 	while ((ch=getc(fp)) != EOF) {
// 	   // Increment character count if NOT new line or space
// 	   if (ch != ' ' && ch != '\n') { ++charcount; }
		  
// 		// Increment word count if new line or space character
// 		if (ch == ' ' || ch == '\n') { ++wordcount; }
		   
// 		// Increment line count if new line character
// 		if (ch == '\n') { ++linecount; }
		   


// 	}

// 	if (charcount > 0) {
// 		++linecount;
// 		++wordcount;
// 	   }
//    }
//    else
//       {
//       printf("Failed to open the file\n");
//       }

//    printf("Lines : %d \n", linecount);
//    printf("Words : %d \n", wordcount);
//    printf("Characters : %d \n", charcount);

// getchar();
// return(0);
// }


// #include<stdio.h>
// int main()
// {
//     int test_number, remainder;
//     printf("Your number: ");
//     scanf("%d", &test_number);
//     remainder= test_number%2;
//     if(remainder==0)
//         printf("Number is even\n");
//     else
//         printf("Number is odd\n");
    
//     return 0;

// }

// #include<stdio.h>
// int main(void)
// {   
//     printf(" hello world\n");
//     return 0;
// }    

// #include<stdio.h>
// int main(void)
// {   
//     printf(" With ink in my weapon, I sit to fire my emotions,\n Raw and authentic, some dispersed and many condensed ,\nYou read my work and exclaim,\n It was the poet who was the sailor in this tidal sea,\nIt was the poet who brought snowfall in the blazing sun,\nIt was the poet who met the doom in life ,\nAnd you say , I am a poet and I am born to write !\nBut in the crooked silent corner of suppressed blazing flames,\nWhen my inks get dry and pages do cry,\nI exclaim,  I am a poet and I struggle!\n");
// 	return 0;
// }    


// #include<stdio.h>
// int main()
// {
//     int number, right_digit,sum;
//     printf("Enter a number ");
//     scanf("%i", &number);
//     sum=0;
//     do{
//         right_digit = number%10;
//         sum=sum+ right_digit;
//         number=number/10;
//     }
//     while(number!=0);
//     printf("sum= %i\n",sum );
//     return 0; 
// }


// Making Decisions.

// Example Program-1:

// #include<stdio.h>
// int main(void)
// {
//     int NumberOfGrades, i, grade;
//     int gradeTotal, failureCount;
//     float average;
//     gradeTotal=0;
//     failureCount=0;

//     printf("How many grades do you want to enter: ");
//     scanf("%i", &NumberOfGrades);

//     for(i=1; i<=NumberOfGrades; i+=1){
//         printf("Grade #%i:",i);
//         scanf("%i",&grade);
//         gradeTotal+=grade;
    

//         if(grade<65)
//             ++failureCount;
//     }

//     average= gradeTotal/NumberOfGrades;
//     printf("The average grade is %f\n", average);
//     printf("The number of failure grade is %i\n",failureCount);

//     return 0;

// }


// #include <stdio.h>
// int main(void)
// {
//     char c;
//     printf( "Enter a single character: ");
//     scanf("%c", &c);

//     if ((c>= 'a' && c<='z') || (c>='A' && c<='Z'))
//         printf("It is an alphabet.\n");
//     else if(c>='0' && c<='9')
//         printf("It is a digit.\n");
//     else
//         printf("It is special character.\n");

//     return 0;
// }



// #include <stdio.h>
// int main (void)
// {
// float value1, value2;
// char operator;
// printf ("Type in your expression.\n");
// scanf ("%f %c %f", &value1, &operator, &value2);
// switch (operator)
// {
// case '+':
//     printf ("%.2f\n", value1 + value2);
//     break;
// case '-':
//     printf ("%.2f\n", value1 - value2);
//     break;
// case '*':
//         printf ("%.2f\n", value1 * value2);
// break;
// case '/':
//     if ( value2 == 0 )
//         printf ("Division by zero.\n");
//     else
//         printf ("%.2f\n", value1 / value2);
//     break;
// default:
//     printf ("Unknown operator.\n");
//     break;
// }
//     return 0;
// }


// #include <stdio.h>
// #include<math.h>
// int main(void)
// {
//     int number, quotient, remainder, number2, remainder2,new_number,count, base, exp, power ;
    
    // printf("Enter an integer: ");
    // scanf("%d", &number);
//     new_number=number;
//     count=0;
//     while(number!=0){
    
//         remainder= number%10;
//         quotient= number/10;
//         number= quotient;
//         count++ ;
//     printf("%d",count); 
//     // printf("%d", remainder);
    
//     }
//     printf("\n");
    
    
//     while(new_number!=0){
    

//     base= 10;
    

//         while (exp != 0) {
//             exp= count-1;
//             power= base *= exp;
//             --exp;
//             remainder2= (new_number)%power;
//             number2= new_number/power;
//             new_number=number2;
            
        
//         printf("%d\n", remainder2);
//         printf("%d\n", new_number);
//             switch(new_number)
//     {
//                 case 0:
//                     printf("zero\t");
//                     break;
//                 case 1:
//                     printf("one\t");
//                     break;
//                 case 2:
//                     printf("two\t");
//                     break;
//                 case 3:
//                     printf("three\t");
//                     break;
//                 case 4:
//                     printf("four\t");
//                     break;
//                 case 5:
//                     printf("five\t");
//                     break;
//                 case 6:
//                     printf("six\t");
//                     break;
//                 case 7:
//                     printf("seven\t");
//                     break;
//                 case 8:
//                     printf("eight\t");
//                     break;
//                 case 9:
//                     printf("nine\t");
//                     break;

//     }
//     } 
//     }
    
//     printf("\n");

//     return 0;


// }


// Q no.6 Stephen G. Kochan
// #include <stdio.h>
// int main(void)
// {
//     int number, quotient, remainder, number2, remainder2,new_number,count, base, exp, power,result,counter ;
    
    
//     printf("Enter an integer: ");
//     scanf("%d", &number);
//     new_number=number;
//     count=0;
    

//     // for(counter!=0)
//     //         printf("zero"); 

//     while(number!=0){
    
//         remainder= number%10;
//         quotient= number/10;
//         number= quotient;
//         count++ ;
        
//     // printf("%d", remainder);
    
//     }
//     // printf("%d",count);
//     printf("\n");
    
    
//     while(new_number!=0){
    

//     base= 10;
//     exp= count-1;
//     result=1;

//         while (exp != 0) {
            
//             result= result *= base;
//             --exp;
//         } 
            
            
//         while(result!=0){    
//             remainder2= (new_number)%result;
//             number2= new_number/result;
//             new_number=remainder2;
//             result= result/10;
            
        
//         // printf("%d\n", remainder2);
//         // printf("%d\n", new_number);
//             switch(number2)
//     {
//                 case 0:
//                     printf("zero\t");
//                     break;
//                 case 1:
//                     printf("one\t");
//                     break;
//                 case 2:
//                     printf("two\t");
//                     break;
//                 case 3:
//                     printf("three\t");
//                     break;
//                 case 4:
//                     printf("four\t");
//                     break;
//                 case 5:
//                     printf("five\t");
//                     break;
//                 case 6:
//                     printf("six\t");
//                     break;
//                 case 7:
//                     printf("seven\t");
//                     break;
//                 case 8:
//                     printf("eight\t");
//                     break;
//                 case 9:
//                     printf("nine\t");
//                     break;

//     }
//     } 
//     }
    
//     printf("\n");

//     return 0;
// }


// #include<stdio.h>
// int main(void)
// {
//     int values[10], index;
//     values[0]= 197;
//     values[2]=-100;
//     values[5]=350;
//     values[3]=values[0]+values[5];
//     values[9]= values[5]/10;
//     --values[2];

//     for(index=0;index<10;++index)
//         printf("values[%i]=%i\n",index, values[index]);

//     return 0;
    
// }


// #include <stdio.h>
// int main (void)
// {
//   int ratingCounters[11], i, response;
//   for ( i = 1; i <= 10; ++i )
//     ratingCounters[i] = 0;
//     printf ("Enter your responses\n");
//   for ( i = 1; i <= 20; ++i ) {
//     scanf ("%i", &response);
//     if ( response < 1 || response > 10 )
//       printf ("Bad response: %i\n", response);
//     else
//       ++ratingCounters[response];
//   }
//   printf ("\n\nRating Number of Responses\n");
//   printf ("------ -------------------\n");
//   for ( i = 1; i <= 10; ++i )
//     printf ("%4i%14i\n", i, ratingCounters[i]);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int fibonacci[15],i;
//     fibonacci[0]=0;
//     fibonacci[1]=1;

//     for(i=2; i<15;i++){
//         fibonacci[i]= fibonacci[i-2]+ fibonacci[i-1];
//     }
//     for(i=0; i<15; i++){
//         printf("%i\n", fibonacci[i]);
//     }
//     return 0;
// }


// Program to convert a positive integer to another base 


// #include<stdio.h>
// int main(void)
// {
//     const char baseDigits[16]={
//         '0','1','2','3','4','5','6','7',
//         '8','9','A','B','C','D','E','F'};

//     int convertedNumber[64];
//     long int numberToConvert;
//     int nextDigit, base, index=0;

//     //get the number and the base

//     printf("Number to be converted: ");
//     scanf("%ld",&numberToConvert);
//     printf("Base: ");
//     scanf("%i",&base); 

//     // convert to the indicated base
//     do{
//         convertedNumber[index]= numberToConvert%base;
//         ++index;
//         numberToConvert=numberToConvert/base;

//     }
//     while(numberToConvert!=0);

//     //display the results in reverse order

//     printf("Converted Number= ");
//     for(--index; index>=0; --index){
//         nextDigit=convertedNumber[index];
//         printf("%c",baseDigits[nextDigit]);
//     }
//      printf("\n");
//      return 0;
// }





// program to initialize multidimensional array

// #include<stdio.h>
// int main(void)
// {
// int M[4][3]= {[0][0]=1, [1][1]=2, [2][2]=3};
// printf("%i",M);
// return 0;
// }


//program to calculate traingular number using fucntion:

// #include<stdio.h>
// void calculateTriangularNumber(int n)
// {
//     int i, triangularNumber=0;
//     for(i=1;i<=n;i++){
//         triangularNumber+=i;
//     }
//     printf("Triangular Number %i is %i",n, triangularNumber);
//     printf("\n");
    
// }
// int main(void)
// {
//     int n;
//     calculateTriangularNumber(5);
//     calculateTriangularNumber(6);

//     return 0;
// }


// #include<stdio.h>
// int main(void)
// {
//     int a, b;
//     a = 83%240;
//     b = 1026%405;
//     printf("%i\n",a);
//     printf("%i\n",b);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char a, b, sum;
//     printf("Enter first character ");
//     scanf("%c",&a);
//     printf("Enter second character ");
//     scanf("%c",&b);
//     sum= a+b;
//     printf("%c",sum);
//     return 0;
// }

// Function to calculate the absolute value of a number
// #include <stdio.h>
// float absoluteValue (float x)
// {
// if ( x < 0 )
// x = -x;
// return (x);
// }
// // Function to compute the square root of a number
// float squareRoot (float x)
// {
// const float epsilon = .00001;
// float guess = 1.0;
// while ( absoluteValue (guess * guess - x) >= epsilon )
// guess = ( x / guess + guess ) / 2.0;
// return guess;
// }
// int main (void)
// {
// printf ("squareRoot (2.0) = %f\n", squareRoot (2.0));
// printf ("squareRoot (144.0) = %f\n", squareRoot (144.0));
// printf ("squareRoot (17.5) = %f\n", squareRoot (17.5));
// return 0;
// }

// // Function to find the minimum value in an array
// #include <stdio.h>

// int minimum (int values[10])
// {
// int minValue, i;
// minValue = values[0];
// for ( i = 1; i < 10; ++i )
// if ( values[i] < minValue )
// minValue = values[i];
// return minValue;
// }
// int main (void)
// {
// int scores[10], i, minScore;
// int minimum (int values[10]);
// printf ("Enter 10 scores\n");
// for ( i = 0; i < 10; ++i )
// scanf ("%i", &scores[i]);
// minScore = minimum (scores);
// printf ("\nMinimum score is %i\n", minScore);
// return 0;
// }




// #include <stdio.h>
// int main (void)
// {

// void scalarMultiply (int matrix[3][5], int scalar);
// void displayMatrix (int matrix[3][5]);
// int sampleMatrix[3][5] =
// {
// { 7, 16, 55, 13, 12 },
// { 12, 10, 52, 0, 7 },
// { -2, 1, 2, 4, 9 }
// };
// printf ("Original matrix:\n");
// displayMatrix (sampleMatrix);
// scalarMultiply (sampleMatrix, 2);
// printf ("\nMultiplied by 2:\n");
// displayMatrix (sampleMatrix);
// scalarMultiply (sampleMatrix, -1);
// printf ("\nThen multiplied by -1:\n");
// displayMatrix (sampleMatrix);
// return 0;
// }
// // Function to multiply a 3 x 5 array by a scalar
// void scalarMultiply (int matrix[3][5], int scalar)
// {
// int row, column;
// for ( row = 0; row < 3; ++row )
// for ( column = 0; column < 5; ++column )
// matrix[row][column] *= scalar;
// }
// void displayMatrix (int matrix[3][5])
// {
// int row, column;
// for ( row = 0; row < 3; ++row) {
// for ( column = 0; column < 5; ++column )
// printf ("%5i", matrix[row][column]);
// Program 8.13 Continued

// printf ("\n");
// }
// }



// // Program to illustrate static and automatic variables
// #include <stdio.h>
// void auto_static (void)
// {
// int autoVar = 1;
// static int staticVar = 1;
// printf ("automatic = %i, static = %i\n", autoVar, staticVar);
// ++autoVar;
// ++staticVar;
// }
// int main (void)
// {

// int i;
// void auto_static (void);
// for ( i = 0; i < 5; ++i )
// auto_static ();
// return 0;
// }



// Program to determine tomorrow's date
// #include <stdio.h>
// int main (void)
// {
// struct date
// {
// int month;
// int day;
// int year;
// };
// struct date today, tomorrow;
// const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
// 31, 31, 30, 31, 30, 31 };
// printf ("Enter today's date (mm dd yyyy): ");
// scanf ("%i%i%i", &today.month, &today.day, &today.year);
// if ( today.day != daysPerMonth[today.month - 1] ) {
// tomorrow.day = today.day + 1;
// tomorrow.month = today.month;
// tomorrow.year = today.year;
// }

// else if ( today.month == 12 ) { // end of year
// tomorrow.day = 1;
// tomorrow.month = 1;
// tomorrow.year = today.year + 1;
// }
// else { // end of month
// tomorrow.day = 1;
// tomorrow.month = today.month + 1;
// tomorrow.year = today.year;
// }
// printf ("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month,
// tomorrow.day, tomorrow.year % 100);
// return 0;
// }



// // Program to determine tomorrow's date
// #include <stdio.h>
// #include <stdbool.h>
// struct date
// {
// int month;
// int day;
// int year;
// };
// int main (void)
// {

// struct date today, tomorrow;
// int numberOfDays (struct date d);
// printf ("Enter today's date (mm dd yyyy): ");
// scanf ("%i%i%i", &today.month, &today.day, &today.year);
// if ( today.day != numberOfDays (today) ) {
// tomorrow.day = today.day + 1;
// tomorrow.month = today.month;
// tomorrow.year = today.year;
// }
// else if ( today.month == 12 ) { // end of year
// tomorrow.day = 1;
// tomorrow.month = 1;
// tomorrow.year = today.year + 1;
// }
// else { // end of month
// tomorrow.day = 1;
// tomorrow.month = today.month + 1;
// tomorrow.year = today.year;
// }
// printf ("Tomorrow's date is %i/%i/%.2i.\n",tomorrow.month,
// tomorrow.day, tomorrow.year % 100);
// return 0;
// }
// // Function to find the number of days in a month
// int numberOfDays (struct date d)
// {
// int days;
// bool isLeapYear (struct date d);
// const int daysPerMonth[12] =
// { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// if ( isLeapYear (d) == true && d.month == 2 )
// days = 29;
// else
// days = daysPerMonth[d.month - 1];
// return days;
// }

// // Function to determine if it's a leap year
// bool isLeapYear (struct date d)
// {
// bool leapYearFlag;
// if ( (d.year % 4 == 0 && d.year % 100 != 0) ||
// d.year % 400 == 0 )
// leapYearFlag = true; // It's a leap year
// else
// leapYearFlag = false; // Not a leap year
// return leapYearFlag;
// }




// // Program to update the time by one second
// #include <stdio.h>
// struct time
// {
// int hour;
// int minutes;
// int seconds;
// };
// int main (void)
// {
// struct time timeUpdate (struct time now);
// struct time currentTime, nextTime;
// printf ("Enter the time (hh:mm:ss): ");
// scanf ("%i:%i:%i", &currentTime.hour,
// &currentTime.minutes, &currentTime.seconds);
// nextTime = timeUpdate (currentTime);
// printf ("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour,
// nextTime.minutes, nextTime.seconds );
// return 0;
// }
// // Function to update the time by one second
// struct time timeUpdate (struct time now)
// {
// ++now.seconds;

// if ( now.seconds == 60 ) { // next minute
// now.seconds = 0;
// ++now.minutes;
// if ( now.minutes == 60 ) { // next hour
// now.minutes = 0;
// ++now.hour;
// if ( now.hour == 24 ) // midnight
// now.hour = 0;
// }
// }
// return now;
// }




// // Program to illustrate structures and arrays
// #include <stdio.h>
// int main (void)
// {
// int i;
// struct month
// {
// int numberOfDays;
// char name[3];
// };
// const struct month months[12] =
// { { 31, {'J', 'a', 'n'} }, { 28, {'F', 'e', 'b'} },
// { 31, {'M', 'a', 'r'} }, { 30, {'A', 'p', 'r'} },
// { 31, {'M', 'a', 'y'} }, { 30, {'J', 'u', 'n'} },
// { 31, {'J', 'u', 'l'} }, { 31, {'A', 'u', 'g'} },
// { 30, {'S', 'e', 'p'} }, { 31, {'O', 'c', 't'} },
// { 30, {'N', 'o', 'v'} }, { 31, {'D', 'e', 'c'} } };
// printf ("Month Number of Days\n");
// printf ("----- --------------\n");
// for ( i = 0; i < 12; ++i )
// printf (" %c%c%c %i\n",
// months[i].name[0], months[i].name[1],
// months[i].name[2], months[i].numberOfDays);
// return 0;
// }






// // Function to concatenate two character arrays
// #include <stdio.h>
// void concat (char result[], const char str1[], int n1,
// const char str2[], int n2)
// {
// int i, j;
// // copy str1 to result
// for ( i = 0; i < n1; ++i )
// result[i] = str1[i];
// // copy str2 to result
// for ( j = 0; j < n2; ++j )
// result[n1 + j] = str2[j];
// }
// int main (void)
// {
// void concat (char result[], const char str1[], int n1,
// const char str2[], int n2);
// const char s1[5] = { 'T', 'e', 's', 't', ' '};
// const char s2[6] = { 'w', 'o', 'r', 'k', 's', '.' };
// char s3[11];
// int i;
// concat (s3, s1, 5, s2, 6);
// for ( i = 0; i < 11; ++i )
// printf ("%c", s3[i]);
// printf ("\n");
// return 0;
// }




// #include <stdio.h>
// int main (void)
// {
// void concat (char result[], const char str1[], const char str2[]);
// const char s1[] = { "Test " };
// const char s2[] = { "works." };
// char s3[20];
// concat (s3, s1, s2);
// printf ("%s\n", s3);
// return 0;
// }
// // Function to concatenate two character strings
// void concat (char result[], const char str1[], const char str2[])
// {
// int i, j;
// // copy str1 to result
// for ( i = 0; str1[i] != '\0'; ++i )
// result[i] = str1[i];
// // copy str2 to result

// for ( j = 0; str2[j] != '\0'; ++j )
// result[i + j] = str2[j];
// // Terminate the concatenated string with a null character
// result [i + j] = '\0';
// }







// // Function to determine if two strings are equal
// #include <stdio.h>
// #include <stdbool.h>
// bool equalStrings (const char s1[], const char s2[])
// {
// int i = 0;
// bool areEqual;
// while ( s1[i] == s2 [i] &&
// s1[i] != '\0' && s2[i] != '\0' )
// ++i;
// if ( s1[i] == '\0' && s2[i] == '\0' )
// areEqual = true;
// else
// areEqual = false;

// return areEqual;
// }
// int main (void)
// {
// bool equalStrings (const char s1[], const char s2[]);
// const char stra[] = "string compare test";
// const char strb[] = "string";
// printf ("%i\n", equalStrings (stra, strb));
// printf ("%i\n", equalStrings (stra, stra));
// printf ("%i\n", equalStrings (strb, "string"));
// return 0;
// }





// // Function to determine if a character is alphabetic
// #include <stdio.h>
// #include <stdbool.h>
// bool alphabetic (const char c)
// {
// if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
// return true;
// else
// return false;
// }
// /* Function to count the number of words in a string */
// int countWords (const char string[])
// {
// int i, wordCount = 0;
// bool lookingForWord = true, alphabetic (const char c);
// for ( i = 0; string[i] != '\0'; ++i )
// if ( alphabetic(string[i]) )
// {
// if ( lookingForWord )
// {
// ++wordCount;
// lookingForWord = false;
// }
// }
// else
// lookingForWord = true;
// return wordCount;
// }
// int main (void)
// {
// const char text1[] = "Well, here goes.";
// const char text2[] = "And here we go... again.";
// int countWords (const char string[]);
// printf ("%s - words = %i\n", text1, countWords (text1));
// printf ("%s - words = %i\n", text2, countWords (text2));
// return 0;
// }






// #include <stdio.h>
// #include <stdbool.h>
// /***** Insert alphabetic function here *****/
// /***** Insert readLine function here *****/
// /***** Insert countWords function here *****/
// int main (void)
// {
//     printf ("\aSYSTEM SHUT DOWN IN 5 MINUTES!!\n");
// // char text[81];
// // int totalWords = 0;
// // int countWords (const char string[]);
// // void readLine (char buffer[]);
// // bool endOfText = false;
// // printf ("Type in your text.\n");
// // printf ("When you are done, press 'RETURN'.\n\n");
// // while ( ! endOfText )
// // {
// // readLine (text);
// // if ( text[0] == '\0' )
// // endOfText = true;

// // else
// // totalWords += countWords (text);
// // }
// // printf ("\nThere are %i words in the above text.\n", totalWords);
// return 0;
// }





// // Program to use the dictionary lookup program
// #include <stdio.h>
// #include <stdbool.h>
// struct entry
// {
// char word[15];
// 10 0672326663 CH10 6/10/04 2:05 PM Page 220
// Character Strings, Structures, and Arrays 221
// char definition[50];
// };
// /***** Insert equalStrings function here *****/
// // function to look up a word inside a dictionary
// int lookup (const struct entry dictionary[], const char search[],
// const int entries)
// {
// int i;
// bool equalStrings (const char s1[], const char s2[]);
// for ( i = 0; i < entries; ++i )
// if ( equalStrings (search, dictionary[i].word) )
// return i;
// return -1;
// }
// int main (void)
// {
// const struct entry dictionary[100] =
// { { "aardvark", "a burrowing African mammal" },
// { "abyss", "a bottomless pit" },
// { "acumen", "mentally sharp; keen" },
// { "addle", "to become confused" },
// { "aerie", "a high nest" },
// { "affix", "to append; attach" },
// { "agar", "a jelly made from seaweed" },
// { "ahoy", "a nautical call of greeting" },
// { "aigrette", "an ornamental cluster of feathers" },
// { "ajar", "partially opened" } };
// char word[10];
// int entries = 10;
// int entry;
// int lookup (const struct entry dictionary[], const char search[],
// const int entries);
// printf ("Enter word: ");
// scanf ("%14s", word);
// entry = lookup (dictionary, word, entries);
// if ( entry != -1 )
// printf ("%s\n", dictionary[entry].definition);
// Program 10.9 Continued
// 10 0672326663 CH10 6/10/04 2:05 PM Page 221
// 222 Chapter 10 Character Strings
// else
// printf ("Sorry, the word %s is not in my dictionary.\n", word);
// return 0;
// }






// // Dictionary lookup program
// #include <stdio.h>
// struct entry
// {
// char word[15];
// char definition[50];
// };
// // Function to compare two character strings
// int compareStrings (const char s1[], const char s2[])
// {
// int i = 0, answer;
// while ( s1[i] == s2[i] && s1[i] != '\0'&& s2[i] != '\0' )
// ++i;
// if ( s1[i] < s2[i] )
// answer = -1; /* s1 < s2 */
// else if ( s1[i] == s2[i] )
// answer = 0; /* s1 == s2 */
// 10 0672326663 CH10 6/10/04 2:05 PM Page 224
// Character Strings, Structures, and Arrays 225
// else
// answer = 1; /* s1 > s2 */
// return answer;
// }
// // Function to look up a word inside a dictionary
// int lookup (const struct entry dictionary[], const char search[],
// const int entries)
// {
// int low = 0;
// int high = entries - 1;
// int mid, result;
// int compareStrings (const char s1[], const char s2[]);
// while ( low <= high )
// {
// mid = (low + high) / 2;
// result = compareStrings (dictionary[mid].word, search);
// if ( result == -1 )
// low = mid + 1;
// else if ( result == 1 )
// high = mid - 1;
// else
// return mid; /* found it */
// }
// return -1; /* not found */
// }
// int main (void)
// {
// const struct entry dictionary[100] =
// { { "aardvark", "a burrowing African mammal" },
// { "abyss", "a bottomless pit" },
// { "acumen", "mentally sharp; keen" },
// { "addle", "to become confused" },
// { "aerie", "a high nest" },
// { "affix", "to append; attach" },
// { "agar", "a jelly made from seaweed" },
// { "ahoy", "a nautical call of greeting" },
// { "aigrette", "an ornamental cluster of feathers" },
// { "ajar", "partially opened" } };
// Program 10.10 Continued
// 10 0672326663 CH10 6/10/04 2:05 PM Page 225
// 226 Chapter 10 Character Strings
// int entries = 10;
// char word[15];
// int entry;
// int lookup (const struct entry dictionary[], const char search[],
// const int entries);
// printf ("Enter word: ");
// scanf ("%14s", word);
// entry = lookup (dictionary, word, entries);
// if ( entry != -1 )
// printf ("%s\n", dictionary[entry].definition);
// else
// printf ("Sorry, the word %s is not in my dictionary.\n", word);
// return 0;
// }


// Function to convert a string to an integer
// #include <stdio.h>
// int strToInt (const char string[])
// {
// int i, intValue, result = 0;
// for ( i = 0; string[i] >= '0' && string[i] <= '9'; ++i )
// {
// intValue = string[i] - '0';
// result = result * 10 + intValue;
// }
// return result;
// }
// int main (void)
// {
// int strToInt (const char string[]);
// printf ("%i\n", strToInt("245"));
// printf ("%i\n", strToInt("100") + 25);
// printf ("%i\n", strToInt("13x5"));
// return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i,number_of_elements;
//     printf("Number of elements in your array: ");
//     scanf("%d",&number_of_elements);
//     int array[number_of_elements];
//     for (i=0;i<number_of_elements;i++){
//         printf("Enter the %d element ",i+1);
//         scanf("%d",&array[i]);
//     }
//     printf("Array elements are\t");
//     for(i=0;i<number_of_elements;i++){
//         printf("%d\t",array[i]);
        
//     }
//     printf("\n");
//     return 0;
// }



// #include <stdio.h>
// void create();
// void display();
// void insert();
// void delete();

// void linsearch();

// int a[150], number_of_elements,search_element;

// void main(){
//   create();
//   insert();
//   delete();
  
// }

// void create(){
//     int i;
//     printf("Number of elements in your array: ");
//     scanf("%d",&number_of_elements);
//     for(i=0; i<number_of_elements; i++){
//         printf("Enter the %d element ",i+1);
//         scanf("%d",&a[i]);
//     }
//     display();
// }

// void display(){
//     int i;
//     printf("Array elements are\t");
//     for(i=0;i<number_of_elements;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
// }


// void insert(){
//     int pos,element;
//     printf("Enter the position and the element you want to insert:");
//     scanf("%d%d",&pos, &element);
//     if(pos<0||pos>number_of_elements+1){
//         printf("Invalid position\n");
//     }
//     else{
//         int i;
//         --pos;
//         for (i=number_of_elements-1;i>=pos;i--){
//             a[i+1]=a[i];
           
//         }
//         a[pos]=element;
//         number_of_elements++;
            
//     display();
//     }
// }


// void delete(){
//     int pos,element;
//     printf("Enter the position of element you want to delete:");
//     scanf("%d",&pos);
//     if(pos<0||pos>number_of_elements){
//         printf("Invalid position\n");

//     }

//     else{
//         int i;
//         --pos;
//         element=a[pos];
//         for(i=pos;i<number_of_elements-1;i++){
//             a[i]=a[i+1];
                
//         }
//         number_of_elements--;
//     display();
        
//     }
 
// }

// void linsearch(){
//     int i;
//     printf("Which element you want to search in the array? ");
//     scanf("%i",&search_element);
//     for (i=0; i<number_of_elements; i++){
//         if(a[i]==search_element){
//             // printf("Element found in array");
//             printf("Element is found at position %d\n", i+1);
//             break;
//         }
//         else{
//             continue;
//         }
//         printf("Element not found in array\n");
//     }

// }





// #include <stdio.h>
// void binarysearch();
// void sort();
// int a[50],i,j, low,temp, number_of_elements,high, mid, search_element;


// void main(){
//     sort();
//     high=number_of_elements-1;
//     low=0;
//     printf("Which element you want to search in the array?");
//     scanf("%i",&search_element);
//     binarysearch();
// }

// void sort(){
    
//     printf("How many elements does your array contain? ");
//     scanf("%d", &number_of_elements);
//     printf("\n");

//     printf("Enter %d array elements", number_of_elements);
//     for(i=0;i<number_of_elements;i++){
        
//         scanf("%d",&a[i]);

//     }
//     printf("Array elements are: ");
//     for(i=0;i<number_of_elements;i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");



//     for(i=0;i<number_of_elements;i++){
//         for(j=i+1;j<number_of_elements;j++){
//             if(a[j]<a[i]){
//                 temp=a[j];
//                 a[j]=a[i];
//                 a[i]=temp;
                
//             }
//         }
//     }
//     printf("Sorted Array is: ");
//     for(i=0;i<number_of_elements;i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
// }


// void binarysearch(){
    
//     if(low<=high){
//         mid= (high+low)/2;

//         if(a[mid]==search_element){
//             printf("Element is found at position %d\n",mid+1);

//         }
//         else if(a[mid]<search_element){
//             low=mid+1;
//             high=number_of_elements-1;
//             binarysearch();

//         }

//         else{
//             high=mid-1;
//             low=0;
//             binarysearch();
//         }
//     }
//     else{
//         printf("Element is not found in the array\n");
//     }
// }







// #include<stdio.h>
// //void binary();
// //int i,a[100];
// void main()
// {
//  int n,i,a[100];
//  int mid,low,high,ele;
//  printf("Enter the number of elements:");
//  scanf("%d",&n);
//  printf("\nEnter the array elements in ASENDING ORDER\n");
//  for(i=0;i<n;i++)
//  scanf("%d",&a[i]);
//  printf("\nEnter element to be searched :");
//  scanf("%d",&ele);
//  low=0;
//  high=n-1;

//  printf("%d%d",mid,a[mid]);
//  while(low<=high)
//  {
//      mid=(high+low)/2;
//    if(ele<a[mid])
//    {
//     high=mid-1;
//    }else
//     if(a[mid]==ele)
//    {
//     printf("\nElement %d is found at position %d",ele,mid+1);
//     break;
//    }
//    else
//     if(ele>a[mid])
//    {
//     low=mid+1;
//    }
//  }
//  printf("\nElement %d is not found",ele);
//  //binary(n);
// }
// //void binary(int n)







// #include<stdio.h>
// void create();
// void display();
// void insert();
// void delete();
// int i,a[150];
// void main()
// {
//  int n;
//   printf("Enter the number of elements\n");
//   scanf("%d",&n);
//   create(n);
//   display(n);
//   insert(n);
// }
// void create(int n)
// {
//     int i;
//     printf("Enter the array elements\n");
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);

// }
// void display(int n)
// {
//     printf("The array elements are:\t");
//     for(i=0;i<n;i++)
//     printf("%d\t",a[i]);
//     printf("\n");

// }
// void insert(int n)
// {
//     int pos,ele;
//     printf("\n-------------------INSERTION--------------------\n");
//     printf("\nEnter the position and element to be inserted:");
//     scanf("%d%d",&pos,&ele);
//     if(pos<0||pos>n+1)
//     {
//         printf("\nInvalid position\n");

//     }
//     else
//     {
//        pos--;
    //    for(i=n-1;i>=pos;i--)
    //     a[i+1]=a[i];
    //     a[pos]=ele;
    //     n=n+1;
    //     printf("----AFTER INSERTION----\n");
    //     display(n);
    //     delete(n);
    // }
// }
// void delete(int n)
// {
//     int pos,ele;
//     printf("\n----------------------DELETION------------------\n");
//      printf("\nEnter the position of the element to delete:");
//     scanf("%d",&pos);
//     if(pos<0||pos>n)
//     {
//         printf("\nInvalid position\n");

//     }
//     else
//     {
//         ele=a[--pos];
//         for(i=pos;i<n-1;i++)
//             a[i]=a[i+1];
//         n--;
//         printf("the element %d deleted at position %d\n",ele,pos+1);
//         printf("-----AFTER DELETION-----\n");
//         display(n);

//     }
// }


// #include<stdio.h>
// void bubblesort();
// int i, j, number_of_elements,a[150],temp;

// int main(){
//     bubblesort();
// }


// void bubblesort(){
    
//     printf("How many elements does your array contain? ");
//     scanf("%d", &number_of_elements);
//     printf("\n");

//     printf("Enter %d array elements", number_of_elements);
//     for(i=0;i<number_of_elements;i++){
        
//         scanf("%d",&a[i]);

//     }
//     printf("Array elements are: ");
//     for(i=0;i<number_of_elements;i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");



//     for(i=0;i<number_of_elements;i++){
//         for(j=0;j<number_of_elements-i-1;j++){
//             if(a[j+1]<a[j]){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
                
//             }
//         }
//     }
//     printf("Sorted Array is: ");
//     for(i=0;i<number_of_elements;i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
// }






// // Program to illustrate structure pointers
// #include <stdio.h>
// int main (void)
// {
// struct date
// {
// int month;
// int day;
// int year;
// };
// struct date today, *datePtr;
// datePtr = &today;
// datePtr->month = 9;
// datePtr->day = 25;
// datePtr->year = 2004;
// printf ("Today's date is %i/%i/%.2i.\n",
// datePtr->month, datePtr->day, datePtr->year % 100);
// return 0;
// }





// Function to use structures containing pointers
// #include <stdio.h>
// int main (void)
// {
// struct intPtrs
// {
// int *p1;
// int *p2;
// };
// struct intPtrs pointers;
// int i1 = 100, i2;
// pointers.p1 = &i1;
// pointers.p2 = &i2;
// *pointers.p2 = -97;
// 11 0672326663 CH11 6/10/04 2:03 PM Page 243
// 244 Chapter 11 Pointers
// printf ("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
// printf ("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);
// return 0;
// }







// // Function to use linked Lists
// #include <stdio.h>
// int main (void)
// {
// struct entry
// {
// int value;
// struct entry *next;
// };
// struct entry n1, n2, n3;
// int i;
// 11 0672326663 CH11 6/10/04 2:03 PM Page 246
// Working with Pointers and Structures 247
// n1.value = 100;
// n2.value = 200;
// n3.value = 300;
// n1.next = &n2;
// n2.next = &n3;
// i = n1.next->value;
// printf ("%i ", i);
// printf ("%i\n", n2.next->value);
// return 0;
// }


// Program to traverse a linked list
// #include <stdio.h>
// int main (void)
// {
// struct entry
// {
// int value;
// struct entry *next;
// };

// struct entry n1, n2, n3;
// struct entry *list_pointer = &n1;
// n1.value = 100;
// n1.next = &n2;
// n2.value = 200;
// n2.next = &n3;
// n3.value = 300;
// n3.next = (struct entry *) 0; // Mark list end with null pointer
// while ( list_pointer != (struct entry *) 0 ) {
// printf ("%i\n", list_pointer->value);
// list_pointer = list_pointer->next;
// }
// return 0;
// }




// Program 11.9 Using Pointers to Exchange Values
// // More on pointers and functions
// #include <stdio.h>
// void exchange (int * const pint1, int * const pint2)
// {
// int temp;
// temp = *pint1;
// *pint1 = *pint2;
// *pint2 = temp;
// }
// int main (void)
// {
// void exchange (int * const pint1, int * const pint2);
// int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;
// printf ("i1 = %i, i2 = %i\n", i1, i2);
// Program 11.8 Continued
// 11 0672326663 CH11 6/10/04 2:03 PM Page 255
// 256 Chapter 11 Pointers
// exchange (p1, p2);
// printf ("i1 = %i, i2 = %i\n", i1, i2);
// exchange (&i1, &i2);
// printf ("i1 = %i, i2 = %i\n", i1, i2);
// return 0;
// }



// #include<stdio.h>
// void create();
// void display();
// void insert_pos();
// void del_pos();
// int n, a[150], count;
// int main(){
//     int ch;
//     while(1)
//     {
//         printf("\nARRAY OPERATIONS- MENU\n");
//         printf("1. CREATE AN ARRAY\n");
//         printf("2. DISPLAY ARRAY ELEMENTS\n");
//         printf("3. INSERT AN ARRAY ELEMENT AT A POSITION\n");
//         printf("4. DELETE AN ARRAY ELEMENT FROM A POSITION\n");
//         printf("5. EXIT\n");
//         printf("Enter your choice\n");
//         scanf("%d", &ch);
//         switch(ch){
//             case 1: if(count==0||n==0)
//                         create();
//                     else
//                         printf("ARRAY ALREADY CREATED");
//                         break;
//             case 2: if(count==0||n<0)
//                         printf("Array not created, create the array.\n");
//                     else
//                         display();
//                         break;
//             case 3: if(count==0|| n<0)
//                         printf("array not created, create the array.\n");
//                     else
//                     {
//                         insert_pos();
//                         break;
//                     }
//             case 4: if(count==0||n<0)
//                         printf("array not created, create the array\n");
//                     else
//                     {
//                         del_pos();
//                         break;
//                     }
//             case 5: return(0);
//             default: printf("Invalid choice\n");
//         }
//     }
//     }
//     void create(){
//         int i;
//         printf("enter the number of elements\n");
//         scanf("%d",&n);
//         printf("Enter the array elements\n");
//         for(i=0;i<n;i++){
//             scanf("%d", &a[i]);
//             count++;
//         }
//     }

//     void display(){
//         int i;
//         printf("The array elements are:\n");
//         for(i=0;i<n;i++){
//             printf("%d\t",a[i]);

//         }
//         printf("\n");
//     }

//     void insert_pos(){
//         int i, pos, item;
//         printf("Enter the position and value of the item to be inserted\n");
//         scanf("%d%d", &pos, &item);
//         if(pos<0||pos>n+1){
//             printf("Invalid position\n");
//         }
//         else{
//             --pos;
//             for(i=n-1;i>=pos;i--){
//                 a[i+1]=a[i];
//             }
//             a[pos]=item;
//             n++;
//         }
//     }

//     void del_pos(){
//        int i, pos, val;
//        printf("Enter the position of the element to be deleted\n");
//        scanf("%d", &pos);
//        if(pos<0||pos>n){
//            printf("Invalid position\n");
//        } 
//        else{
//            pos--;
//            val=a[pos];
//            for(i=pos;i<n-1;i++){
//                a[i]=a[i+1];
//            }
//             n--;
//             printf("The element deleted is %d\n",val);
           
//        }
//     }


// #include<stdio.h>
// int main()
// {
//       char str[200];
//       int i, line, word, ch;
//       line=word=ch=0;

//       printf("Enter a string in multiple lines terminated with ~ :\n");
//       scanf("%[^~]", str);

//       for(i=0; str[i]!='\0'; i++)
//       {
//         if(str[i]=='\n')
//         {
//           line++;
//           word++;
//         }
//         else
//         {
//           if(str[i]==' '||str[i]=='\t')
//           {
//             word++;
//             ch++;
//           }
//           else ch++;
//         }
//       }

//       printf("\nCharacter counts = %d\n",ch);
//       printf("Word counts = %d\n",word);
//       printf("Line counts = %d\n",line);

//       return 0;
//  }




// #include <stdio.h>
// struct entry
// {
// int value;
// struct entry *next;
// };
// struct entry *findEntry (struct entry *listPtr, int match)
// {
// while ( listPtr != (struct entry *) 0 )
// if ( listPtr->value == match )
// return (listPtr);
// else
// listPtr = listPtr->next;
// return (struct entry *) 0;
// }
// int main (void)
// {
// struct entry *findEntry (struct entry *listPtr, int match);
// struct entry n1, n2, n3;
// struct entry *listPtr, *listStart = &n1;
// int search;
// n1.value = 100;
// n1.next = &n2;
// n2.value = 200;
// n2.next = &n3;
// n3.value = 300;
// n3.next = 0;

// printf ("Enter value to locate: ");
// scanf ("%i", &search);
// listPtr = findEntry (listStart, search);
// if ( listPtr != (struct entry *) 0 )
// printf ("Found %i.\n", listPtr->value);
// else
// printf ("Not found.\n");
// return 0;
// }
    



// // Function to sum the elements of an integer array
// #include <stdio.h>
// int arraySum (int array[], const int n)
// {
// int sum = 0, *ptr;
// int * const arrayEnd = array + n;
// for ( ptr = array; ptr < arrayEnd; ++ptr )
// sum += *ptr;
// 11 0672326663 CH11 6/10/04 2:03 PM Page 262
// Pointers and Arrays 263
// return sum;
// }
// int main (void)
// {
// int arraySum (int array[], const int n);
// int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };
// printf ("The sum is %i\n", arraySum (values, 10));
// return 0;
// }
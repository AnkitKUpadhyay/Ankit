// #include<stdio.h>
// #include<string.h>

//     struct CENSUS{
//         char city_name[50];
//         long int population;
//         float area;
//     };

// int main(){

//     struct CENSUS cities[5];
//     int i,j,temp;
//     float max; 
//     char temp1[50];
//     char max_name[50];

//     for(i=0;i<5;i++){
//         printf("Enter city[%d] name: \n", i+1);
//         scanf("%s", &cities[i].city_name);
//         printf("Enter city[%d] population: \n",i+1);
//         scanf("%ld", &cities[i].population);
//         printf("Enter city[%d] area: \n", i+1);
//         scanf("%f", &cities[i].area);
//     }

//     // for(i=0;i<5;i++){
//     //     printf("%ld\t", cities[i].population);
//     // }
//     printf("\n\n\n");

//     for(i=0;i<4;i++){
//         for(j=0;j<5-i-1;j++){
//             if(cities[j].population>cities[j+1].population){
//                 temp=cities[j].population;
//                 cities[j].population=cities[j+1].population;
//                 cities[j+1].population=temp;

                
//             }
//         }
//     }

//     printf("The sorted list based on population of city is: \n");
//     for(i=0;i<5;i++){
//         printf("%s\t%ld\n",cities[i].city_name,cities[i].population);
//     }
//     printf("\n");

//     max=cities[0].area;
//     for(i=1;i<5;i++){
//         if(cities[i].area>max){
//             max=cities[i].area;
//             j=i;
            
//         }
    
//     }
//     printf("The city with the largest area is (%s) with area %f\n",cities[j].city_name, max);
    
        
    
//     for(i=0;i<4;i++){
//         for(j=0;j<5-i-1;j++){
//             if(strcmp(cities[j].city_name,cities[j+1].city_name)>0){
//                 strcpy(temp1,cities[j].city_name);
//                 strcpy(cities[j].city_name,cities[j+1].city_name);
//                 strcpy(cities[j+1].city_name,temp1);
//             }
//         }
//     }
//     printf("Order of Sorted Strings:\n");
//     for(i=0;i<5;i++){
//         printf("%s\t",cities[i].city_name);
//     }
//     printf("\n");
   
//     return 0;
// }










// #include <stdio.h>
 
// void main ()
// {
//     static int array[10][10];
//     int i, j, m, n;
//     int counter = 0;
 
//     printf("Enter the order of the matix \n");
//     scanf("%d %d", &m, &n);
//     printf("Enter the co-efficients of the matix \n");
//     for (i = 0; i < m; ++i)
//     {
//         for (j = 0; j < n; ++j)
//         {
//             scanf("%d", &array[i][j]);
//             if (array[i][j] == 0)
//             {
//                 ++counter;
//             }
//         }
//     }
//     if (counter > ((m * n) / 2))
//     {
//         printf("The given matrix is sparse matrix \n");
//     }
//     else
//         printf("The given matrix is not a sparse matrix \n");
//     printf("There are %d number of zeros\n", counter);
// }











// #include<stdio.h>
// #include<string.h>
// int find_match(char str[100],char pat[100],char rep[100],char ans[100]);
// void main()
// {
//     char str[100], pat[100], rep[100], ans[100];
//     int flag;
//     printf("Enter the main string:\n");
//     gets(str);
//     printf("Enter the pattern string to be searched\n");
//     gets(pat);
//     printf("Enter the replacement string\n");
//     gets(rep);
//     flag= find_match(str,pat,rep,ans);
//     if(flag){
//         printf("\nPattern Found\n");
//         printf("\nThe string after replacement is %s\n", ans);
//     }
//     else{
//         printf("\n Pattern not found\n");
//     }
// }

// int find_match(char str[100],char pat[100], char rep[100], char ans[100]){
//     int i,j,m,c,flag,k;
//     i=j=m=c=flag=0;
//     while(str[c]!='\0'){
//         if(str[m]==pat[i]){
//             i++;
//             m++;
//             if(pat[i]=='\0'){
//                 flag=1;
//                 for(k=0;rep[k]!='\0';k++,j++){
//                     ans[j]=rep[k];
//                 }
//                 i=0;
//                 c=m;
//             }
//         }
//         else{
//             ans[j]=str[c];
//             j++;
//             c++;
//             m=c;
//             i=0;
//         }
//     }

//     ans[j]='\0';
//     return flag;
// }





// #include<stdio.h>
// #include<stdlib.h>
// #define max 4
// typedef struct{
//     int key;
// }Stack;
// Stack st[max];
// int i, top=-1;
// void display();
// void push();
// int pop();
// int main()
// {
//     int choice;
//     while(1){
//         printf("\n--------OPTIONS--------\n");
//         printf("1. PUSH\n");
//         printf("2. POP\n");
//         printf("3.Display Stack\n");
//         printf("4. EXIT\n");
//         printf("Enter the choice: ");
//         scanf("%d", &choice);
//         switch(choice)
//         {
//             case 1: if(top==max-1)
//                         printf("Stack Overflow\n");
//                     else
//                         push();
//                     break;
                
//             case 2: if(top==-1)
//                         printf("Stack underflow\n");
//                     else
//                         printf("The element deleted is %d",pop());
//                     break;
            
//             case 3: display();
//                     break;

//             case 4: exit(0);
//                     break;

//             default: printf("Invalid choice\n");

            
//         }
//     }
// }

// void push()
// {
//     int ele;
//     printf("Enter the element to push: ");
//     scanf("%d", &ele);
//     st[++top].key=ele;
// }

// int pop()
// {
//     int ele;
//     ele=st[top--].key;
//     return ele;
// }

// void display()
// {
//     if(top==-1){
//         printf("Stack is empty\n");
//     }
//     else{
//         printf("Stack elements are:\n");
//         for(i=top;i>=0;i--){
//             printf("%d\n",st[i].key);
//         }
//     }
    
// }







// #include<stdio.h>
// #include<stdlib.h>
// #define max 100
// typedef struct{
//     int key;
// } Stack;
// Stack st[max];
// int i,j,rem, top=-1;
// int number;
// void display();
// int pop();
// int main()
// {
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     for(j=1;;j++){
//         if(rem!=0){
//             rem=number%10;
//             number/=10;
//         }
//         else
//             break;
//     }
//     printf("%d",j);

//     for(i=0;i<6;i++){
//         rem=number%10;
//         if(rem!=0){
//             st[++top].key=rem;
//             number=number/10;
//         }
//         else{
//             break;
//         }
//     }
//     // display();

//     rem=number%10;
//     for(i=top; i>=0; i--){
//         if(pop()==rem)
//             continue;
        
        
        
//         else{
//             printf("This is not a palindrome.\n");
//             break;
//         }

        
    
//     }
// }
// void display()
// {
//     if(top==-1){
//         printf("Stack is empty\n");
//     }
//     else{
//         printf("Stack elements are:\n");
//         for(i=top;i>=0;i--){
//             printf("%d\n",st[i].key);
//         }
//     }
    
// }

// int pop()
// {
//     int ele;
    
//     ele=st[top--].key;
//     // printf("%d\n",ele);
//     return ele;

// }


// #include<stdio.h>
// #include<stdlib.h>
// #define max 100
// typedef struct{
//     int key;
// } Stack;
// Stack st[max];
// int i,rem,num2, top=-1;
// int number;
// void display();
// int pop();
// int main()
// {
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     num2=number;
//     for(i=0;i<6;i++){
//         rem=num2%10;
//         if(rem!=0){
//             st[++top].key=rem;
//             num2=num2/10;
//         }
//         else{
//             break;
//         }
//     }
//     // display();

    
//     for(i=top; i>=0; i--){
//         rem=number%10;
//         if(pop()==rem)
//             number/=10;
//         else{
//             printf("This is not a palindrome.\n");
//             exit(0);
//         }
        
//     }
//     printf("It is a palindrome\n");
    
    
// }
// void display()
// {
//     if(top==-1){
//         printf("Stack is empty\n");
//     }
//     else{
//         printf("Stack elements are:\n");
//         for(i=top;i>=0;i--){
//             printf("%d\n",st[i].key);
//         }
//     }
    
// }

// int pop()
// {
//     int ele;
    
//     ele=st[top--].key;
//     // printf("%d\n",ele);
//     return ele;

// }






// #include<stdio.h>

// #include<string.h>
// #include<math.h>

// int k=1,i,j,m,num,n,p[10][10],q[10][10],ct=0,R=1,C,r1,r2,c1,c2;
// void read(int a[10][10],int r,int c)
// {
// 	k=1;
// 	R=1;
// 	ct=0;
// 	printf("
// Enter the matrix:
// ");
// 	for(i=0;i<r;i++)
// 	{
// 		for(j=0;j<c;j++)
// 		{
// 			scanf("%d",&num);
// 			if(num!=0)
// 			{
// 				a[R][C]=i;
// 				a[R][++C]=j;
// 				a[R][++C]=num;
// 				ct++;
// 				R++;
// 				C=0;
// 			}
// 		}
// 	}
// 	a[0][0]=r;
// 	a[0][1]=c;
// 	a[0][2]=ct;
// 	printf("
// Sparse Matrix in memory:
// ");
// 	for(i=0;i<=ct;i++)
// 	{
// 		for(j=0;j<3;j++)
// 			printf(" %d ",a[i][j]);
// 		printf("
// ");
// 	}
// }

// void trans()
// {
// 	printf("
// Enter row & coloumn: ");
// 	scanf("%d %d",&r1,&c1);
// 	read(p,r1,c1);
// 	printf("
// TRANSPOSE: 
// ");
// 	k=1;
// 	for(i=0;i<r1;i++)
// 	{
// 		for(j=0;j<c1;j++)
// 		{
// 			if(p[k][0]==i&&p[k][1]==j)
// 			{
// 				q[j][i]=p[k][2];
// 				k++;
// 			}
// 			else
// 				q[j][i]=0;
// 		}
// 	}
// 	for(i=0;i<c1;i++)
// 	{
// 		for(j=0;j<r1;j++)
// 		{
// 			printf(" %d ",q[i][j]);
// 		}
// 		printf("
// ");
// 	}
// }
// void add()
// {
// 	printf("Enter the row & coloumn of 1st matrix: ");
// 	scanf("%d %d",&r1,&c1);
// 	printf("Enter the row & coloumn of 2nd matrix: ");
// 	scanf("%d %d",&r2,&c2);
// 	if(r1==r2&&c1==c2)
// 	{
// 		read(p,r1,c1);
// 		read(q,r2,c2);
// 		k=1;
// 		printf("
// Sum Matrix:
// ");
// 		for(i=0;i<r1;i++)
// 		{
// 			for(j=0;j<c1;j++)
// 			{
// 				if((p[k][0]==i&&p[k][1]==j)&&(q[k][0]==i&&q[k][1]==j))
// 				{
// 					printf(" %d ",p[k][2]+q[k][2]);
// 					k++;
// 				}
// 				else if(p[k][0]==i&&p[k][1]==j)
// 				{
// 					printf(" %d ",p[k][2]);
// 					k++;
// 				}
// 				else if(q[k][0]==i&&q[k][1]==j)
// 				{
// 					printf(" %d ",q[k][2]);
// 					k++;
// 				}
// 				else
// 					printf(" 0 ");
// 		}
// 		printf("
// ");
// 	}
//  }
//  else
// 	printf("
// Addition not possible!
// ");
// }

// void main()
// {
// 	char ch;
// 	fflush(stdin);
// 	clrscr();
// 	do
// 	{
// 		ct=0;
// 		fflush(stdin);
// 		fflush(stdout);
// 		clrscr();
// 		printf("				MAIN
// MENU
// 				*********

// 				1.ADD
// 				2.TRANSPOSE
// ");
// 		printf("
// Enter ur choice: ");
// 		scanf("%d",&n);
// 		switch(n)
// 		{
// 			case 1:  add();
// 							 break;
// 			case 2:  trans();
// 							 break;
// 			case 3:  exit(0);
// 							 break;
// 			default: printf("
// WRONG CHOICE!! 
// ");
// 							 break;
// 		}
// 		printf("

// Do you want to continue? y/n: ");
// 		ch=getch();
// 	}while(ch=='y');
// }






//Adding two polynomials

// #include<stdio.h>
// //declare structure for polynomial

// struct poly
// {
//     int coeff;
//     int expo;
// };
// struct poly p1[10],p2[10],p3[10];
// int readPoly(struct poly[]);
// void displayP(struct poly[],int);
// int addPoly(struct poly [],struct poly [],int ,int ,struct poly []);

// int main()
// {
//     int t1, t2, t3;
//     //read and display first polynomial
//     t1= readPoly(p1);
//     printf("\n First Polynomial: ");
//     displayP(p1,t1);

//     //read and display second polynomial
//     t2= readPoly(p2);
//     printf("\n Second polynomial: ");
//     displayP(p2,t2);

//     t3=addPoly(p1,p2,t1,t2,p3);
// 	printf(" \n\n Resultant polynomial after addition : ");
// 	displayP(p3,t3);
// 	printf("\n");

//     return 0;
// }

// int readPoly(struct poly p[10]){
//     int t1, i;
//     printf("\n\n Enter total number of terms in a polynomial: ");
//     scanf("%d", &t1);
//     printf("\n Enter the COEFFICIENT and EXPONENT in DESCENDING order\n");
//     for(i=0;i<t1;i++){
//         printf("Enter the coefficient (%d):", i+1);
//         scanf("%d", &p[i].coeff);
//         printf("Enter the exponent(%d): ", i+1);
//         scanf("%d", &p[i].expo);
//     }
//     return t1;
// }

// void displayP(struct poly p[10],int term){
//     int k;
//     for(k=0;k<term-1;k++){
//         printf("%d(x^%d)+",p[k].coeff, p[k].expo);
//     }
//     printf("%d(x^%d)",p[term-1].coeff,p[term-1].expo);
// }

// int addPoly( struct poly p1[10], struct poly p2[10], int t1, int t2, struct poly p3[10]){
//     int i, j,k;
//     i=0;j=0;k=0;

//     while(i<t1 && j<t2){

//         if(p1[i].expo==p2[j].expo){
//             p3[k].coeff= p1[i].coeff + p2[j].coeff;
//             p3[k].expo= p1[i].expo;
//             i++;
//             j++;
//             k++;
//     }

//         else if( p1[i].expo > p2[j].expo){
//             p3[k].coeff= p1[i].coeff;
//             p3[k].expo= p1[i].expo;
//             i++;
//             k++;
//     }

//         else
//     {
//             p3[k].coeff= p2[j].coeff;
//             p3[k].expo= p2[j].expo;
//             j++;
//             k++;
//     }

//     }

//     // for rest of the terms of polynomial 1

//     while(i<t1){
//         p3[k].coeff= p1[i].coeff;
//         p3[k].expo= p1[i].expo;
//         i++;
//         k++;
//     }

//     // for rest of polynomials p2

//     while(j<t2){
//         p3[k].coeff= p2[j].coeff;
//         p3[k].expo= p2[j].expo;
//         j++;
//         k++;
//     }

//     return k;
// }




//Program to check if given matrix is sparse matrix

// #include<stdio.h>
// void main()
// {
//     static int array[10][10];
//     int i, j, m, n;
//     int counter=0;

//     printf("Enter the order of the matrix\n");
//     scanf("%d%d",&m, &n);
//     printf("Enter the coefficient of the matrix\n");
//     for(i=0;i<m;++i){
//         for(j=0;j<n;++j){
//             scanf("%d", &array[i][j]);
//             if(array[i][j]==0){
//                 ++counter;
//             }
//         }
//     }


//     if (counter>((m*n)/2)){
//         printf("The given matrix is sparse matrix\n");
//     }

//     else
//         printf("The given matrix is not a sparse matrix\n");

//     printf("There is %d number of zeroes\n", counter);
// }



// #include<stdio.h>
// int main()
// {
    

//     static int array[10][10];
//     int i, j, m, x,  n;
   
//     for (x=0; x<2; x++){
//         printf("Enter the order of the matrix\n");
//         scanf("%d%d",&m, &n);
//         printf("Enter the coefficient of the matrix\n");
//         for(i=0;i<m;++i){
//             for(j=0;j<n;++j){
//                 scanf("%d", &array[i][j]);
//             }
//         }

//     // Finding total non-zero values in the sparse matrix
//         int size = 0;
//         for (int row = 0; row < m; row++)
//             for (int column = 0; column < n; column++)
//                 if (array[row][column] != 0)
//                     size++;

//     // Defining result Matrix
//         int resultMatrix[size][3];

//     // Generating result matrix
//         int k = 0;
//         for (int row = 0; row < m; row++)
//             for (int column = 0; column < n; column++)
//                 if (array[row][column] != 0)
//                 {
//                     resultMatrix[k][0] = row;
//                     resultMatrix[k][1] = column;
//                     resultMatrix[k][2] = array[row][column];
//                     k++;
//                 }

//     // Displaying result matrix
//         printf("Triplet Representation : \n");
//         for (int row=0; row<size; row++)
//         {
//             for (int column = 0; column<3; column++)
//                 printf("%d ",resultMatrix[row][column]);

//             printf("\n");
//         }
        
//     }
// }

 

// #include<stdio.h>
// #include<stdlib.h>
// #define MAX 20
// void printsparse(int b[MAX][3]);
// void readsparse(int b[MAX][3]);
// void addsparse( int b1[MAX][3], int b2[MAX][3], int b3[MAX][3]);
// void main()
// {
//     int b1[MAX][3], b2[MAX][3], b3[MAX][3];
//     readsparse(b1);
//     readsparse(b2);
//     addsparse( b1, b2, b3);
//     printsparse(b3);
// }

// void readsparse( int b[MAX][3]){
//     int i, t, m,n;
//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &m, &n);
//     printf("Number of non zero triples: ");
//     scanf("%d", &t);
//     b[0][0]=m;
//     b[0][1]=n;
//     b[0][2]=t;

//     for( i=1; i<=t; i++){
//         printf("Enter the triples( row, column, value): ");
//         scanf("%d %d %d", &b[i][0], &b[i][1], &b[i][2]);
//     }
// }

// void addsparse( int b1[MAX][3], int b2[MAX][3]; int b3[MAX][b3]){
//     int t1, t2, i, j, k;
//     if( b1[0][0]!= b2[0][0]|| b1[0][1]!=b2[0][1]){
//         printf("You have entered invalid matrix! Size must be equal.\n");
//         exit(0);
//     }
// }

// t1= b1[0][2]








//  #include <stdio.h>
 
// void main ()
// {
//     static int array[10][10];
//     int i, j, m, n;
//     int counter = 0;
 
//     printf("Enter the order of the matix \n");
//     scanf("%d %d", &m, &n);
//     printf("Enter the co-efficients of the matix \n");
//     for (i = 0; i < m; ++i)
//     {
//         for (j = 0; j < n; ++j)
//         {
//             scanf("%d", &array[i][j]);
//             if (array[i][j] == 0)
//             {
//                 ++counter;
//             }
//         }
//     }
//     if (counter > ((m * n) / 2))
//     {
//         printf("The given matrix is sparse matrix \n");
//     }
//     else
//         printf("The given matrix is not a sparse matrix \n");
//     printf("There are %d number of zeros\n", counter);
// }
















// Program 3:

// #include<stdio.h>
// #include<stdlib.h>
// #define smax 5
// void push();
// int pop();
// void palin();
// void display();
// int top=-1, stack[smax];
// void main()
// {
//     int ch,d;
//     while(1){
//         printf("\nSTACK MENU\n");
//         printf("1. PUSH\n");
//         printf("2. Pop\n");
//         printf("3. PALINDROME CHECK\n");
//         printf("4. DISPLAY\n");
//         printf("5. EXIT\n");
//         printf("ENTER THE CHOICE\n");
//         scanf("%d", &ch);
//         switch(ch){
//             case 1: push();
//                     break;
//             case 2: pop();
//                     break;
//             case 3: palin();
//                     break;
//             case 4: display();
//                     break;
//             case 5: exit(0);
//             default: printf("Invalid Choice\n");
//         }
//     }
// }

// void push()
// {
//     int item;
//     if(top==smax-1){
//         printf("\nSTACK FULL\n");
//     }
//     else{
//         printf("Enter the item to be inserted\n");
//         scanf("%d",&item);
//         stack[++top]=item;
//     }
// }

// int pop()
// {
//     int d;
//     if(top==-1){
//         printf("\n STACK EMPTY\n");
//     }
//     else{
//         d=stack[top];
//         top--;
//         printf("The deleted element is %d\n",d);
//     }
// }

// void display()
// {
//     int i;
//     if(top==-1){
//         printf("\nSTACK EMPTY\n");
//     }
//     else{
//         printf("Contents of the stack are: \n");
//         for(i=top;i>=0;i--){
//             printf("%d\n", stack[i]);
//         }
//     }
// }

// void palin()
// {
//     int j=0, flag=1;
//     int reverse[smax],i;
//     if(top==0||top==-1){
//         printf("\n PALINDROME CANNOT BE CHECKED\n");
//         return;
//     }
//     else{
//         for(i=top;i>=0;i--,j++){
//             reverse[j]=stack[i];
//         }
//         for(i=0;i<=top;i++){
//             if(reverse[i]!=stack[i]){
//                 flag=0;
//                 break;
//             }
//         }
    
// }
//     if(flag){
//         printf("\n IT IS A PALINDROME\n");
//     }
//     else{
//         printf("\n IT IS NOT A PALINDROME\n");
//     }
// }




// #include<stdio.h>
// int stack_precedence(char);
// int input_precedence(char);
// char pop();
// void push(char);
// char postfix[50], infix[50],s[50];
// int top=-1;
// void main()
// {
//     int i, j=0;
//     char ch, element;
//     printf("Enter a valid infix operation: \n");
//     gets(infix);
//     push('#');
//     for(i=0;infix[i]!='\0';i++){
//         ch=infix[i];
//         if(isalnum(ch)){
//             postfix[j++]=ch;
//         }
//         else if(ch=='('){
//             push(ch);
//         }
//         else if(ch==')'){
//             while(s[top]!='('){
//                 postfix[j++]=pop();
//             }
//             element=pop();
//         }
//         else{
//             while(stack_precedence(s[top])>=input_precedence(ch)){
//                 postfix[j++]=pop();
//             }
//             push(ch);
//         }
//     }

//     while (s[top]!='#'){
//         postfix[j++]=pop();
//     }
//     postfix[j]='\0';
//     printf("The postfix expression is %s\n",postfix);
// }

// int stack_precedence(char e){
//     switch(e)
//     {
//         case '+':
//         case '-': return(2);
//         case '*':
//         case '/':
//         case '%': return(4);
//         case '^': return(5);
//         case '(':
//         case '#': return(0);
//     }
// }

// int input_precedence(char e){
//     switch(e)
//     {
//         case '+':
//         case '-': return(1);
//         case '*':
//         case '/': return(2);
//         case '%': return(3);
//         case '^': return(6);
//         case '(':
//         case '#': return(0);
//     }
// }

// void push(char ele){
//     ++top;
//     s[top]=ele;
// }

// char pop(){
//     char e;
//     e=s[top];
//     --top;
//     return e;
// }


#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define max 20
int a[max];
int i, top=-1;
void push();
int pop();
void main()
{
    char post[max], ch;
    int i,result,op1, op2;
    printf("PROGRAM TO EVALUATE POSTFIX EXPRESSION\n");
    printf("Enter the postfix expression: \n");
    scanf("%s",post);
    for(i=0;post[i]!='\0';i++){
        ch=post[i];
        if(isdigit(ch)){
            push(ch-'0');
        }
        else{
            op2=pop();
            op1=pop();
            switch(ch){
                case '+': result= op1+op2;
                            break;
                case '-': result= op1-op2;
                            break;
                case '*': result= op1*op2;
                            break;
                case '/': result= op1/op2;
                            break;
                case '^': result= pow(op1,op2);
                            break;
                case '%': result= op1%op2;
                            break;
                default: printf("Invalid character\n");
            }
        push(result);
        }
    }
    printf("Result of the above expression is %d",pop());

}

void push(int e){
    ++top;
    a[top]=e;
}

int pop(){
    int ele;
    ele=a[top];
    --top;
    return (ele);
}
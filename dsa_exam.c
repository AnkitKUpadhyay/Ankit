//Stack Functions Menu Based:

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




//-----------------------------------------------------------------------------------------------------------------------
//Stack program using structures:


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


//--------------------------------------------------------------------------------------------------------
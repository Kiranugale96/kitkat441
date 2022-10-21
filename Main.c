#include<stdio.h>

int cprogramming()

{

     int key,i;

      printf("1)Basics Of C \n");

      printf("2)Control Structure \n");

      printf("3)Loop\n");

       printf("4)Array\n");

      printf("5)Strings\n");

      printf("6)Structures\n");

      printf("7)function and Pointers\n");

     printf("8)EXIT\n\n");

    

    printf("choice one\n");

    scanf("%d",&key);

    

    switch(key)

 {

     case 1:

     {

      printf("a procedural programming language.\n It was initially developed by Dennis Ritchie in the year 1972.\n It was mainly developed as a system programming language to\n write an operating system.\n The main features of the C language include low-level\n memory access,a simple set of keywords,\n and a clean style, \nthese features make C language suitable for system programmings \nlike an operating system or compiler development. ");

        printf("\t Header Files Inclusion: The first and foremost component is the inclusion of the Header files in a C program.");

printf("A header file is a file with extension .h which contains C function declarations and macro definitions to be shared between several source files.");

  printf("Stucture of C programming\n");

printf("\n1) Header files: stddef.h – Defines several useful types and macros.\nstdint.h – Defines exact width integer types.\nstdio.h – Defines core input and output functions\nstdlib.h – Defines numeric conversion functions, pseudo-random network generator, memory allocation\nstring.h – Defines string handling functions\nmath.h – Defines common mathematical functions");

 printf("\n\n 2)Main Method Declaration: The next part of a C program is to declare the main() function.\n The syntax to declare the main function is:\n\nSyntax to Declare the main method:\n\nint main()\n{}");      

 printf("\n\n\n1)Variable Declaration: The next part of any C program is the variable declaration. It refers to the variables that are to be used in the function. Please note that in the C program, no variable can be used without being declared. Also in a C program, the variables are to be declared before any operation in the function.\nExample: \nint main()\n{\nint a;\n}");

 printf("\n\nBody: The body of a function in the C program, refers to the operations that are performed in the functions. It can be anything like manipulations, searching, sorting, printing, etc.\nExample:\n\nint main()\n{\n int a;\n\nprintf(" ", a);\n\n}\n\nReturn Statement: The last part of any C program is the return statement. The return statement refers to the returning of the values from a function. This return statement and return value depend upon the return type of the function. For example, if the return type is void, then there will be no return statement. In any other case, there will be a return statement and the return value will be of the type of the specified return type.\nExample: \nint main()\n{\nint a;\n\nprintf("", a);\n  return 0;\n}");

 

      

            break;

      }

      

  case 2:

      {

         printf("Control Structures are just a way to specify flow of control in programs. Any algorithm or program can be more clear and understood if they use self-contained modules called as logic or control structures. It basically analyzes and chooses in which direction a program flows based on certain parameters or conditions. There are three basic types of logic, or flow of control, known as:\nSequence logic, or sequential flow\nSelection logic, or conditional flow\nIteration logic, or repetitive flow\n\nLet us see them in detail:");

      	      	printf("\n\n1)Sequential Logic \n\n(Sequential Flow)\nSequential logic as the name suggests follows a serial or sequential flow in which the flow depends on the series of instructions given to the computer. Unless new instructions are given, the modules are executed in the obvious sequence. The sequences may be given, by means of numbered steps explicitly. Also, implicitly follows the order in which modules are written. Most of the processing, even some complex problems, will generally follow this elementary flow pattern.");

      	printf("\n\n2)Selection Logic (Conditional Flow)\n\nSelection Logic simply involves a number of conditions or parameters which decides one out of several written modules. The structures which use these type of logic are known as Conditional Structures. These structures can be of three types:\n");

      	printf("\n\n#Single AlternativeThis structure has the form:\n\nIf (condition) then:\n [Module A]   \n[End of If structure]\n\n#Double Alternative\nThis structure has the form:\nIf (Condition), then:\n[Module A]\nElse:\n[Module B]\n[End if structure]\n\n#Multiple Alternatives\nThis structure has the form:\n\nIf (condition A), then:\n[Module A]\nElse if (condition B), then:\n    [Module B]\nElse if (condition N), then:\n [Module N]\n[End If structure]");

         break;

      	}

    case 3:

    {

      printf("\n\n What is Loop in C?\n\nLooping Statements in C execute the sequence of statements many times until the stated condition becomes false. A loop in C consists of two parts, a body of a loop and a control statement. The control statement is a combination of some conditions that direct the body of the loop to execute until the specified condition becomes false. The purpose of the C loop is to repeat the same code a number of times.");

      printf(" \n\n ‘C’ programming language provides us with three types of loop constructs:\n\n1. The while loop\n2. The do-while loop\n3. The for loop");

  printf("____________________________________________________________________________________\n\n");

      printf("\n\n 1) While Loop in C\n\nA while loop is the most straightforward looping structure. While loop syntax in C programming language is as follows:\nSyntax of While Loop in C:\n\nwhile (condition) { statements; }");   

    printf("\n\nwhile loop is execute is first check condition condition is true then execute block statement other wise end loop\n\n");

    printf("2) For loop in C\n\nA for loop is a more efficient loop structure in ‘C’ programming. The general structure of for loop syntax in C is as follows:\n\nSyntax of For Loop in C:\n\nfor (initial value; condition; incrementation or decrementation ) { statements; }");

    printf(" \n\n3) Do-While loop in C\n\A do…while loop in C is similar to the while loop except that the condition is always executed after the body of a loop. It is also called an exit-controlled loop.\n\nSyntax of do while loop in C programming language is as follows:\n\nSyntax of Do-While Loop in C:\n\ndo { statements } while (expression);");

     break;

    }

    case 4:

    {

    printf("\n\n 4)Arrays\n\n\nArrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.\n\nTo create an array, define the data type (like int) and specify the name of the array followed by square brackets [].\n\nTo insert values to it, use a comma-separated list, inside curly braces:\n\nint myNumbers[] = {25, 50, 75, 100};\n\nWe have now created a variable that holds an array of four integers.\n\nAccess the Elements of an Array\n\nTo access an array element, refer to its index number.\n\nArray indexes start with 0: [0] is the first element. [1] is the second element, etc.\n\nThis statement accesses the value of the first element [0] in myNumbers:\n\n\nExample\n\n\nint myNumbers[] = {25, 50, 75, 100};\n\nprintf(" ", myNumbers[0]);\n\n//Outputs 25\n\n\nChange an Array Element\n\nTo change the value of a specific element, refer to the index number:\n\n\nExample\n\nmyNumbers[0] = 33;\n\n\nExample\n\nint myNumbers[] = {25, 50, 75, 100};\n\nmyNumbers[0] = 33;\n\nprintf("", myNumbers[0]);\n\n// Now outputs 33 instead of 25\n\n\n\n#Loop Through an Array\n\nYou can loop through the array elements with the for loop.\n\n\nThe following example outputs all elements in the myNumbers array:\n\n\nExample\n\n\nint myNumbers[] = {25, 50, 75, 100};\n\nint i;\n\nfor (i = 0; i < 4; i++) {\n printf("", myNumbers[i]);\n}\n\n\n#Set Array Size\n\n\nAnother common way to create arrays, is to specify the size of the array, and add elements later:\n\n\nExample\n\n\n// Declare an array of four integers:\n\nint myNumbers[4];\n\n// Add elements\nmyNumbers[0] = 25;\nmyNumbers[1] = 50;\nmyNumbers[2] = 75;\nmyNumbers[3] = 100;\n\n\nUsing this method, you should know the size of the array, in order for the program to store enough memory.\n\nYou are not able to change the size of the array after creation.");

    break;

    }

    case 5:

    {

      printf("5) Strings in C\n\n String in C programming is a sequence of characters terminated with a null character ‘/0’. Strings are defined as an array of characters. The difference between a character array and a string is the string is terminated with a unique character ‘/0’.\n\nExample of C String:\n\n\Declaration of Strings\n\nDeclaring a string is as simple as declaring a one-dimensional array. Below is the basic syntax for declaring a string.\n\nchar str_name[size];\n\nIn the above syntax str_name is any name given to the string variable and size is used to define the length of the string, i.e the number of characters strings will store. \n\nNote: There is an extra terminating character which is the Null character (‘0’) used to indicate the termination of a string that differs strings from normal character arrays. When a Sequence of characters enclosed in the double quotation marks is encountered by the compiler, a null character ‘\0’ is appended at the end of the string by default.");

         break;

    }

      	case 6:

      	{

      		FILE *fptr=fopen("main.txt","r");

   if(fptr==NULL)

   {

     printf("sorry\n");

     return 1;

   	}

   	char output[256];

   	for(i=1;fgets(output,sizeof(output),fptr)!=NULL;i++)

   	{

        printf("%o2d: %s",i,output);	

   		

   		}

    fclose(fptr);  

  

  return 0;

}

     break;

      		

  case 7:

     {

     

     {

     FILE *fptr=fopen("pointer.txt","r");

   if(fptr==NULL)

   {

     printf("sorry\n");

     return 1;

   	}

   	char output[256];

   	for(i=1;fgets(output,sizeof(output),fptr)!=NULL;i++)

   	{

        printf("%o2d: %s",i,output);	

    }

   fclose(fptr);  

  

  return 0;

    }

	break;	

       }

       case 8:

       {

         int main();

       	

       	}

  

   default :

 printf("invalid operation\n");

}

    

    

    

    

    

    

    

    

    

    

} 

int main()

{

    cprogramming();

    printf("hi");

}

    

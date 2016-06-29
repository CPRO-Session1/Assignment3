# Assignment 3

## Objectives

To gain a solid understanding of loops in C Programming. 

### Part 1

1. Write a program to calculate the sum of first n natural numbers.
2. Write a program to find factorial of a number
3. Write a program to add numbers until user enters zero


### Part 2
In a text file `assignment3.txt`, answer the following questions:

1. How many times does "Programming in C rocks!" print?

  ```c 
  #include<stdio.h>
  int main()
  {
      int x;
      for(x=-1; x<=10; x++)
      {
          if(x < 5)
              continue;
          else
              break;
          printf("Programming in C Rocks!");
      }
      return 0;
  }
  ```


2. Explain the difference between a while and a do while loop. 

3. 

### Submission Guidelines
Please include your name and a description in a comment at the top of your code files. Please also include your name at the top of your assignment3.txt file.

All files must be submitted via GitHub by 10:00am 7/1.

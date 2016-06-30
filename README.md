# Assignment 3

## Objectives

To gain a solid understanding of loops in C Programming. 

### Part 1

1. Using while loops, print all powers of 2 such that 2^n is less than 1000.

2. Using for loops, print a half diamond of asterisks (*) as shown below:
  ```
  *
  **
  ***
  ****
  *****
  ****
  ***
  **
  *
```
The size (defined as the length of the middle row) will be determined by you. 

3. Implement a program that allows a user to play “Rock Paper Scissors” with the computer. Write this program as efficiently as possible. You should use a menu for the user decision and not string input.


### Part 2
In a text file `assignment3.txt`, answer the following questions:

1. Is the following code valid?  If so, what information or assumptions must be given for it to be valid?  If not, why not?
	```c 
	for(;i < 1000;i*=2) 
	{
	    printf(“%d\n”);
	}
	  ```

2. What, if anything, is wrong with the following code fragment?  You may assume all variables are defined.
	```c 
	for(i=0;i<10;i--);
	{
		i=(int) (i*0.5);
	}
	```

3. Determine the complexity of the following code snippets:

i. 
```c
sum = 0;
for( i = 0; i < n; i++ )
	for( j = 0; j < n; j++ )
		sum++;
```

ii. 
```c
sum = 0;
for( i = 1; i < n; i++ )
	for( j = 1; j < i * i; j++ )
		if( j % i == 0 )
			for( k = 0; k < j; k++ )
				sum++;
```

iii. 

```c 
sum = 0;
for( i = 0; i < n; i++ )
	sum++;
for( j = 0; j < n ; j++ )
	sum++;
```

### Submission Guidelines
Please include your name and a description in a comment at the top of your code files. Please also include your name at the top of your assignment3.txt file.

All files must be submitted via GitHub by 10:00am 7/1.

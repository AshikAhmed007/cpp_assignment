# cpp_assignment
 
PRINCIPLES OF PROGRAMMING / INTRODUCTION TO C++ 
ASSIGNMENT QUESTION PAPER  
 
1.	Given the names and marks of n=10 students in the course Introduction to C++ Programming.  
 
(a)	Calculate their grades (0 - 49 = F, 50 - 64 = C, 65 - 79 = B, 80 - 100 = A). 
(b)	Calculate the average, grade statistics, lowest and highest marks. 
 
	Write a program to generate a report that resembles the below. 
  
	EXAMINATION REPORT 
	INTRODUCTION TO C++ PROGRAMMING 
 
	No. 	Student name 	 	Mark 	 	Grade 
	1       AAA 	 	 	88 	 	A 
	2 	BBB 	 	 	45 	 	F 
	3 	CCC 	 	 	60		C
 
	Average mark = … 
        Lowest mark = … 
        Highest mark = … 
	No. of A = … 
 
 
2.	A factory has n=20 staff and they are paid an hourly rate of RM9.50. Their salaries are calculated as follows: 
 
	salary 	= hours * rate  	for hours between 0 and <=40 
	          	=  300 + (hours – 40) * rate * 1.5     	for hours >40 and <= 60      
	                        =  525 + (hours – 60) * rate * 2.0     	for hours > 60                                                              
 
	Write a program to generate a report that resembles the below. 
 
 
	PAYROLL REPORT 
 
	No. 	Employee name 	 	Hours  	Salary (RM) 
	1       AAA 	 	 	10 	75.00 
	2 	BBB 	 	 	45 	356.25 
	3 	CCC 	 	 	60 	675.00 
 	...
        Total salary = RM … 
 	
 
3.	Write a program to generate 200 integer random numbers in the range [1000, 9999]. 
 
(a)	How many of these numbers fall in the ranges 1000-2499, 2500-4999, 5000-7499 and 7500-9999? 
(b)	How many of these numbers are: (i) even, (ii) divisible by 5? 
 
4.	Create a text file called contacts using Notepad (Programs > Accessories > Notepad) with n=15 records for storing their name, sex, age, telephone and email address that resembles the below. 
 
	“Ahmad”, “M”, 20, 1234567, “aaa@must.edu.my” ... 
 
	Write a program to read the file and display your contact information. 
 
5.	Write a program to simulate the sum of points on a pair of dice. If the user guesses it correctly, it displays the message “Good guess - Congratulations!” or the message “Bad guess - Try again!” if the guess is wrong. The program terminates when the user makes 	a correct guess within a maximum of 5 attempts. 
 
6.	Create a text file called countries to store n=12 country names and their capitals. Write a program to read the file and store the country names and their capitals in arrays country and capital respectively. Then when the user enters a country name, the program 	displays a message that resembles “The capital of … is ….” if there is a match or the message “The country name is not in the list.” 
 
7.	The data below represents a list of products sold at My Street Shop. 
 
	ProdCode 	Price (RM) 	 
	AAA		5.00 	 	 
	BBB		7.00 	 	 
	CCC		2.30 	 	 
	DDD		1.70 	 	 
	EEE		9.00 
 
	Write a program to print a receipt for the below purchase.  
 
     ProdCode  	 	Quantity  	 
     	BBB 	 	   2 	 	 
	DDD		   4 	 	 
	EEE		   1 	 	 
 
	The receipt should resemble something like the one shown below. 
 
	My Street Shop 	
	ProdCode     	 Quantity 	 	Price  		Amount (RM) 
	BBB 	 	     2 	 		7.00            14.00 
	DDD 	 	     4 	 		1.70             6.80 
	EEE 	 	     1 	 		9.00             9.00 
	Total purchase = RM xxx.xx 	
 
8.	Write a program using functions to calculate the areas and circumferences of circles given their radii 5.2, 7, 12, 
	7.7 and 23.5. Round your output to 4 decimal places. 
 
9.	Given the following strings:  
	“It is a nice and beautiful day” 
	“Time and tide wait for no man” 
	“It is a small, small world” 
 
	Write a program to  
a)	count the number of ‘a’s in each string 
b)	replace all occurrence of ‘a’ with ‘A’ 
c)	remove all embedded blanks 
d)	right and justify each string 
 
10.	Given 10 countries and their capitals. Write a program to: 
a)	Display the capital, given the country  
b)	Display the country, given the capital  
	(If a country or capital is not in the list, display a suitable message.) 
 
11.	What is a collection? Write a program to manipulate (add, insert, remove, reverse) a set of student objects using the collection ArrayList. 
 
12.	Write a program using structure to store club members' names, area codes and telephone numbers. Input values for these members and display them according to their area code. 
 
13.	Generate 100 unique integer random numbers in array x[]. Sort the numbers in ascending order of magnitude. Then, use a binary search to match a given number in the array. Display the position of the element in the array if a match is found; if not, display the 	message "No match". 
 
14.	Enter a string and store it in an array. Then determine the position(s) of a specified character in the array. (For example, if the input string is "I love Malaysia", the positions of the character 'a' are 8, 10 and 
	14) 
 
15.	Write a program to compute the product of (a) two integer numbers and (b) two double numbers using a constructor and a destructor. 

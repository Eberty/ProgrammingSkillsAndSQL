# Programming skills and PL/SQL

## **Overview**

Solutions to problems related to the questionnaire available at: <https://forms.office.com/r/pfjpbWFNtP>

**Keywords:** C++, SQL, Programming, EngSearch.

&nbsp;

### **1 - Identification**

Eberty Alves da Silva, <eberty.silva@hotmail.com>

&nbsp;

### **2 - C++: FooBaa**

Consider the following problem:

Write a C/C++ or Java program that prints each number from 1 to 100 on a new line.

For each multiple of 3, print "Foo" instead of the number.
For each multiple of 5, print "Baa" instead of the number.
For multiple numbers simultaneously of 3 and 5, print "FooBaa", instead of the number.

Your solution should be using as few lines of code as possible, but you should produce efficient code.

#### **Answer in C++ code: [2.cpp](2.cpp)**

How to compile and run:

``` sh
g++ 2.cpp -o FooBaa
./FooBaa
```

&nbsp;

### **3 - C++: ConcatRemove**

Consider a string containing lowercase characters from the Portuguese alphabet. You can perform two types of operations on this string:

1. Concat a lowercase character from the Portuguese alphabet at the end of the string.
2. Remove the last character from the string. If the string is empty, it will remain empty.

Given an integer k and two strings s and t, determine if you can convert s to t using exactly k operations described above on s. If possible, the program prints 'yes', otherwise it prints 'no'.

For example, string s = [a, b, c] and string t = [d, e, f]. The number of moves k = 6. To convert s to t, we first remove all characters using 3 moves. Then we concatenate each of the characters of t in the order. In the sixth move, you will have the expected string s. If more movements are available than necessary, they can be eliminated by performing multiple removals on an empty string. If there are fewer movements, it would not be possible to create the new string.

Develop a C/C++ or Java language program that implements and uses the ConcatRemove (s, t, k) function. It should return the results 'yes' or 'no'.

The function has the following parameters:

- s: starting string
- t: desired string
- k: an integer that represents the number of operations

Input format

- The first line contains the string s, the starting string.
- The second line contains the string t, the desired string.
- The third line contains an integer k, the number of operations.

Constrains

- 1 <= | s | <= 100
- 1 <= | t | <= 100
- 1 <= k <= 100
- s and t consists of lowercase letters of the Portuguese alphabet, ascii [a-z]

Output format

- Print 'yes' if you can get the string t by executing exactly k operations on the string s, and print 'no' otherwise.

#### **Answer in C++ code: [3.cpp](3.cpp)**

How to compile and run:

``` sh
g++ 3.cpp -o ConcatRemove
./ConcatRemove
```

&nbsp;

### **4 - C++: ConcatRemoveUnitTest**

Write an Unit Test using C/C++ or Java for the function ConcatRemove(s,t,k).

#### **Answer in C++ code: [4.cpp](4.cpp)**

How to compile and run (You need to have google-test installed on your machine, see [gtest installation](https://gist.github.com/dlime/313f74fd23e4267c4a915086b84c7d3d):

``` sh
g++ 4.cpp -o ConcatRemoveUnitTest -lgtest -lpthread
./ConcatRemoveUnitTest
```

&nbsp;

### **5 - SQL: Students and Notes**

Consider the following problem

- Two tables are provided: Students and Notes.
- Students contains three columns: ID, Name and Value.
- The table Notes contains three Integers columns: Grade, Min_Value and Max_Value filled according example bellow:

``` text
Grade | Min_Value | Max_Value
1     | 0         |  9
2     | 10        | 19
3     | 20        | 29
4     | 30        | 39
5     | 40        | 49
6     | 50        | 59
7     | 60        | 69
8     | 70        | 79
9     | 80        | 89
10    | 90        | 100
```

Joana gives Eva the task of generating a report containing three columns: Name, Grade and Value. Joana does not want the names of students who received a grade lower than 8. The report must be in descending order by grade, that is, the highest grades are inserted first. If there are more than one student with the same grade (8-10) assigned to them, sort those students in particular by their names in alphabetical order. Finally, if the grade is less than 8, use "NULL" as the name and list them in grades in descending order. If there are more than one student with the same grade (1-7) assigned to them, sort those students in particular by their grades in ascending order.

Write an SQL query to help Eva.

#### **Answer in SQL query: [5.sql](5.sql)**

&nbsp;

### **6 - Question: OOP**

#### **Question and answer: [6.md](6.md)**

&nbsp;

### **7 - SQL: Pet names**

Information about pets is kept in two separate tables:

``` sql
TABLE dogs
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL

TABLE cats
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL
```

Write an SQL query that select all distinct pet names.

#### **Answer in SQL query: [7.sql](7.sql)**

&nbsp;

### **8 - Question: bq program**

#### **Question and answer: [8.md](8.md)**

&nbsp;

### **9 - C++: StringLength**

Make a program in C/C++ or Java language that calculates the length of a string informed by the user (do not use any pre-existing function or method for this, such as len(), count(), strlen() or lenght());

#### **Answer in C++ code: [9.cpp](9.cpp)**

How to compile and run:

``` sh
g++ 9.cpp -o StringLength
./StringLength
```

&nbsp;

### **10 - C++: ReverseString**

Make a program in C/C++ or Java language that reverses a string informed by the user without using any temporary variable, buffer or any pre-existing function or method for this.

#### **Answer in C++ code: [10.cpp](10.cpp)**

How to compile and run:

``` sh
g++ 10.cpp -o ReverseString
./ReverseString
```

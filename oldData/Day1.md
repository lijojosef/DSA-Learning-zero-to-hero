# Day 1
## How to solve a programming problem?
**Understand** the problem  
check the **Given values**  
Figure out an **approach**  
Write **code**  

### Pseudocode
A very simple and high-level form of a computer language that is used in program design
### Flowchart
A flowchart is a diagramatic representation of an approach. This draws out all the steps of your approach

## Pseudocode for :
### Calculate simple interest
- Start
- Read p, r, t
- SI = (p*r*t)/100
- print SI
- End

### Determine if a<b
- Start
- Read a, b
- if a<b
  - then print "Yes"
- else
  - print "No"
- End

### check if a number is even or odd
- Read n
- if n%2 == 0
  - print "Even"
- else
  - print "Odd"

### Check if a number is positive, negative, zero
- Read n
- if n>0
  - print "Positive"
- else if n<0
  - print "Negative"
- else
  - print "Zero"

### Check if a triangle is valid
_Hint a+b>c, a+c>b and c+b >a_

- Read a, b, c
- if a+b>c && a+c>b && b+c>a
  - print "Valid triangle"
- else
  - print "Invalid triangle"

### Print even numbers between 1 and n (exclusive)
- Read n, num = 2
- while num < n
  - print num
  - num = num + 2

### Print all odd numbers from 1 to n(inclusive)
- Read n, num = 1
- while num < n
  - print num
  - num+=2

### Find the sum from 1 to n
- Read n, sum = 0, num =1
- while num < n
  - sum+=num
  - num++
- print sum

### Find n!
- Read n, ans = 1, num = 1
- while num <= n
  - ans = ans*num
  - num++
- print ans

### check if n is prime
- Read n
- div = 2
- while div < 2
  - if n%div = 0
    - print "No"
    - end
  - else
    - div ++
- print "Yes"


***Source code---------->Compiler--------->Binary***
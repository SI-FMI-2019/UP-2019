Tasks for Basic operations, Conditional statetemts and Logical Operators

------------------------------------
0. Check whether a year is leap

  2012 -> true
  1900 -> false
  2000 -> true

------------------------------------
1. Given a number of seconds, transform it into HH:MM:SS. Do the reverse operation - given HH MM SS, transform it into seconds

  1 a) 10000 -> 2 H 46 M 40 S
       130 -> 0 H 2 M 10 S
       
  1 b) 2 46 50 -> 10010 S

------------------------------------
2. You are given a number, an arithmetic symbol and a number. Interpret the mathematical statement correctly

    - 10 / 3 should print 3
    - 11 * 5 should print 55
    - 3 + 4 should print 7
    - 8 - 11 should print -3
    - 20 % 6 should print 2

------------------------------------
3. Validate date (DD MM YYYY) (example: February cannot have 30 days)

  30 06 2011 -> true
  31 06 2011 -> false
  33 08 2021 -> false
  29 02 2001 -> false
  29 02 2000 -> true
  
------------------------------------
4. You have a starting time in (hh mm ss) format and ending time in the same format. Calculate how much time has passed between the two. (Midnight is a thing) 

  22 40 30
  
   2 30 20
   
            -> 3 49 50
            
   7 10 40
   
  12 30 50
  
            -> 5 20 10
            

------------------------------------
5. Check whether a point is in a rectangle *

  x1 = 2, y1 = 4, x2 = 5, y2 = 1
  
  3 3 -> true
  
  -1 3 -> false

------------------------------------
6. Check whether a point is in a circle given its radius **

  radius = 3
  
  2.99 2.99 -> true
  
  3.01 3.01 -> false

------------------------------------
7. Calculate overlapping area of rectangles *

  x1 = 2, y1 = 5, x2 = 6, y2 = 2
  
  x3 = 5, y3 = 4, x4 = 9, y4 = 1
  
  overlapping area -> 2

------------------------------------
8. Given a letter, print its base16 equivalent 

  A -> 10
  
  B -> 11
  
  F -> 15
  
  G -> "Error!"
  
  Z -> "Error!"
  

------------------------------------
9. Find (and print) the biggest digit of a given 3 (or 4, your choice) digit number. Print the sum of all digits.

  4567 -> 7, sum is 22
  
  341 -> 4, sum is 8

------------------------------------
10. Check whether 2 symbols are the lower and upper of the same letter and print "Yes" or "No". 

  A a -> true
  
  S t -> false
  
  T % -> false

------------------------------------
11. Check if a (3 or 4 digit) number is a palindrome (a palindrome is a string (or a number) that is read in the same way forwards and backwards - aba, racecar, 123321)

  123 -> false
  
  121 -> true
  
  5665 -> true
  
  5666 -> false

------------------------------------
12. Swap two numbers

------------------------------------
* A rectangle is defined by (x1, y1) -> top left corner and (x2, y2) -> bottom right corner.

** Assume the circle's centre is (0, 0). If you want a greater challenge, make the centre ot the circle a part of the input.

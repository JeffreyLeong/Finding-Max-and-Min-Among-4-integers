# Finding Max and Min Among 4 integers
 CIS-054


1. Take in 4 integers
2. Find the max and min

Algorithm 1 - find Max/Min

For: n1, n2, n3, n4
1. Compare n1 to n2, swap if n2 is bigger.
2. Compare n1 to n3, swap if n3 is bigger.
3. Compare n1 to n4, swap if n4 is bigger.
4. Compare n2 to n3, swap if n3 is bigger.
5. Compare n2 to n4, swap if n4 is bigger.
6. Compare n3 to n4, swap if n4 is bigger.

now n1 >= n2 >= n3 >= n4


Algorithm 2 - find Max/Min

For n1, n2, n3, n4
1. Compare n1 to n2, swap if n2 is bigger.
2. Compare n3 to n4, swap if n4 is bigger.
3. Compare n1 to n3, swap if n3 is bigger.
4. Compare n2 to n4, swap if n4 is bigger.

now n1 is max, n4 is min
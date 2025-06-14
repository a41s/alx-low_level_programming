# Project 
## **0x01. C - Variables, if, else, while**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. Positive anything is better than negative nothing](#0)
	- [1. The last digit](#1)
	- [2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](#2)
	- [3. alphABET](#3)
	- [4. When I was having that alphabet soup, I never thought that it would pay off](#4)
	- [5. Numbers](#5)
	- [6. Numberz](#6)
	- [7. Smile in the mirror](#7)
	- [8. Hexadecimal](#8)
	- [9. Patience, persistence and perspiration make an unbeatable combination for success](#9)
	- [10. Inventing is a combination of brains and materials. The more brains you use, the less material you need](#10)
	- [11. The success combination in business is: Do what you do better... and: do more of what you do...](#11)
	- [12. Software is eating the World](#12)
---
## Author Details
- *a41s*

## Project Description
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl "betty-doc.pl")

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. Positive anything is better than negative nothing**
- This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.
    - You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c "here")
    - The variable `n` will store a different value every time you will run this program
    - You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
    - The output of the program should be:
        - The number, followed by
            - if the number is greater than 0: `is positive`
            - if the number is 0: `is zero`
            - if the number is less than 0: `is negative`
        - followed by a new line
            ```
            julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
            julien@ubuntu:~/0x01$ ./0-positive_or_negative 
            -520693284 is negative
            ```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `0-positive_or_negative.c`
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. The last digit**
- This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.
    - You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/1-last_digit_c "here")
    - The variable `n` will store a different value every time you run this program
    - You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
    - The output of the program should be:
        - The string `Last digit of`, followed by
        - `n`, followed by
        - the string `is`, followed by
            - if the last digit of `n` is greater than 5: the string `and is greater than 5`
            - if the last digit of `n` is 0: the string `and is 0`
            - if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
        - followed by a new line
            
            ```
            julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
            julien@ubuntu:~/0x01$ ./1-last_digit 
            Last digit of 629438752 is 2 and is less than 6 and not 0           
            ```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `1-last_digit.c`
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
- Write a program that prints the alphabet in lowercase, followed by a new line.
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` twice in your code

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `2-print_alphabet.c`
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. alphABET**
- Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` three times in your code

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `3-print_alphabets.c`
---
#### 4
###### [Table of Contents](#table-of-contents)
**4. When I was having that alphabet soup, I never thought that it would pay off**
- Write a program that prints the alphabet in lowercase, followed by a new line.
    - Print all the letters except `q` and `e`
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` twice in your code

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `4-print_alphabt.c`
---
#### 5
###### [Table of Contents](#table-of-contents)
**5. Numbers**
- Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
    - All your code should be in the `main` function

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `5-print_numbers.c`
---
#### 6
###### [Table of Contents](#table-of-contents)
**6. Numberz**
- Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
    - You are not allowed to use any variable of type `char`
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - You can only use `putchar` twice in your code
    - All your code should be in the `main` function


<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `6-print_numberz.c`
---
#### 7
###### [Table of Contents](#table-of-contents)
**7. Smile in the mirror**
- Write a program that prints the lowercase alphabet in reverse, followed by a new line.
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` twice in your code
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `7-print_tebahpla.c`
---
#### 8
###### [Table of Contents](#table-of-contents)
**8. Hexadecimal**
- Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` three times in your code
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `8-print_base16.c`
---
#### 9
###### [Table of Contents](#table-of-contents)
**9. Patience, persistence and perspiration make an unbeatable combination for success**
- Write a program that prints all possible combinations of single-digit numbers.
    - Numbers must be separated by `,`, followed by a space
    - Numbers should be printed in ascending order
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - All your code should be in the `main` function
    - You can only use `putchar` four times maximum in your code
    - You are not allowed to use any variable of type `char`
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `9-print_comb.c`
---
#### 10
###### [Table of Contents](#table-of-contents)
**10. Inventing is a combination of brains and materials. The more brains you use, the less material you need**
- Write a program that prints all possible different combinations of two digits.

    - Numbers must be separated by `,`, followed by a space
    - The two digits must be different
    - `01` and `10` are considered the same combination of the two digits `0` and `1`
    - Print only the smallest combination of two digits
    - Numbers should be printed in ascending order, with two digits
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - You can only use `putchar` five times maximum in your code
    - You are not allowed to use any variable of type `char`
    - All your code should be in the `main` function

    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
    julien@ubuntu:~/0x01$ ./100-print_comb3
    01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
    ```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `100-print_comb3.c`
---
#### 11
###### [Table of Contents](#table-of-contents)
**11. The success combination in business is: Do what you do better... and: do more of what you do...**
- Write a program that prints all possible different combinations of three digits.
    - Numbers must be separated by `,`, followed by a space
    - The three digits must be different
    - `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
    - Print only the smallest combination of three digits
    - Numbers should be printed in ascending order, with three digits
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - You can only use `putchar` six times maximum in your code
    - You are not allowed to use any variable of type `char`
    - All your code should be in the `main` function

    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
    julien@ubuntu:~/0x01$ ./101-print_comb4
    012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
    ```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `101-print_comb4.c`
---
#### 12
###### [Table of Contents](#table-of-contents)
**12. Software is eating the World**
- Write a program that prints all possible combinations of two two-digit numbers.
    - The numbers should range from `0` to `99`
    - The two numbers should be separated by a space
    - All numbers should be printed with two digits. `1` should be printed as `01`
    - The combination of numbers must be separated by comma, followed by a space
    - The combinations of numbers should be printed in ascending order
    - `00 01` and `01 00` are considered as the same combination of the numbers `0` and `1`
    - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    - You can only use `putchar` eight times maximum in your code
    - You are not allowed to use any variable of type `char`
    - All your code should be in the `main` function

    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
    julien@ubuntu:~/0x01$ ./102-print_comb5
    00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
    ```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x01-variables_if_else_while`
    - File: `102-print_comb5.c`
---

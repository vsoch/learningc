# Learning C

These scripts are mostly useless, and just helpful for me to learn C!

# Hello

This is your typical hello world script. To compile and run:

      gcc hello.c -o hello
      ./hello
      Hello, World!

# Number

This is figuring out how to take a single argument from standard input.

      gcc number.c -o number
      ./number
      Please enter a number: 
      12
      The number is 12 

If you make your number too big, you will break things:

      Please enter a number: 
      123456789123456789
      The number is -1395630315 

# Mile to Kilometer

I wanted to try a simple loop, in this case a while loop. 

      gcc miletokm.c -o miletokm
      ./miletokm

This script prints a table of miles and kilometer conversions, and note that the miles are rounded to one decimal, and kilometers to two:

      MILES	KILOMETERS
      0.0	0.00
      1.0	1.61
      2.0	3.22
      3.0	4.83
      4.0	6.44
      5.0	8.05
      6.0	9.66

      ...

      24.0	38.62
      25.0	40.23
      26.0	41.84
      27.0	43.45
      28.0	45.06
      29.0	46.67
      30.0	48.28

# Kilometer to Mile

This is my first script with a function other than main, and with input arguments.

      gcc kmtomile.c -o kmtomile
      ./kmtomile

If you run without input arguments, it prints another table:

      KMs	MILES
      0.0	0.00
      1.0	0.62
      2.0	1.24
      3.0	1.86
      4.0	2.49
      5.0	3.11
      6.0	3.73
      
      ...
 
      14.0	8.70
      15.0	9.32
      16.0	9.94
      17.0	10.56
      18.0	11.18
      19.0	11.81
      20.0	12.43

If you provide an input value (a number of kilometers) it will convert it to miles!

      ./kmtomile 5.0
      5.00 kilometers is 3.11 miles.


# Planet Weights

I'm just having fun at this point. This script asks for your weight in pounds, and then returns your weight on several planets and the sun!

      gcc planetweights.c -o planetweights
      ./planetweights

      Please enter your weight in pounds: 
      130
      Your weight on Earth is 130.00 pounds.
      Your weight on Jupiter is 307.32 pounds.
      Your weight on Mars is 49.01 pounds.
      Your weight on Mercury is 49.14 pounds.
      Your weight on Moon is 21.58 pounds.
      Your weight on Neptune is 146.25 pounds.
      Your weight on Pluto is 8.71 pounds.
      Your weight on Saturn is 138.32 pounds.
      Your weight on Sun is 3519.36 pounds.
      Your weight on Uranus is 115.57 pounds.

Learning new languages is so great :)

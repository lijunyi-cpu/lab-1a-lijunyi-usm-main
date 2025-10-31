[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/z7d0SubI)
# EEE123 - Computer Programming for Engineers (Lab 1A)

## Make sure you've read and understand all the instructions in this readme file.

VIEW THIS FILE ONLY IN YOUR BROWSER (AT GITHUB) FOR BETTER READABILITY

### Instruction to students:
1. A piece of wire is to be bent in the form of a circle to put around a picture frame. Write a program that prompts the user to input the **length** of the wire (in meter, **fractional** number) and output the **radius** and **area** of the circle. You may assume that pi = 3.14159265358979324 and declare it as a named constant:

   const double pi = 3.14159265358979324;

   at the top of your code (i.e. as global variable). This is how we declare a constant, and we can use the name (pi) everywhere in our code, and it cannot be changed (compilation error will be thrown if we try).

   **Use the radius obtained to determine the area next**. Display both the radius and area of the circle in **5** decimal places.

   Use the formula:
    - <img src="https://latex.codecogs.com/svg.image?r=C/2\pi" title="r=C/2\pi" /> (<img src="https://latex.codecogs.com/svg.image?r" title="r" /> is radius and <img src="https://latex.codecogs.com/svg.image?C" title="C" /> is the circumference of a circle)
    - <img src="https://latex.codecogs.com/svg.image?A=\pi&space;r^2" title="A=\pi r^2" /> (<img src="https://latex.codecogs.com/svg.image?A" title="A" /> is the area of a circle)
   
3. Input from user:
    - &lt;type&gt; length;&nbsp;&nbsp;&nbsp;&nbsp;(use **any name** and **data type** suitable).
4. Function(s) that is/are required (feel free to add more functions if necessary):
    - &lt;type&gt; **getRadius**(&lt;type&gt; length)
    - &lt;type&gt; **getArea**(&lt;type&gt; radius).

   For the function(s) above:
    - (**MUST**) Use the **exact function name** as shown.
    - (**MUST**) Use the **same order** for the input arguments as shown.
    - Use **data type** (i.e. return value) suitable for the function(s).

   For the input argument(s) of the function(s) above:
    - Use **any variable name** suitable for the argument(s).
    - Use **data type** suitable, according to what you've chosen in 2. above etc.
5. Example output on the terminal:\
\
Length of the cable (meter) > 12.5\
Radius of the circle: 1.98944 meter.\
Area of the circle: 12.43398 meter squared.
6. Marks:
    - There are **2** test files:
      - test1.cpp - for the getRadius() function (3 tests for 3 marks), and
      - test2.cpp - for the getArea() function (3 tests for 3 marks).

      that will be executed by the GitHub Classroom Workflow to automatically grade your codes/program, for a **full marks of 6**. Your codes/program **must pass all the 3 tests** to qualify for the **3** marks **for each test file** i.e. you can get either 0, 3, or 6 marks.

    - Your codes/program must be **free from any warning** - your final mark later will be deducted for the warnings.
7. Take note:
    - The repository by default, after you clone it, is not compilable due to a lot of missing things.
    - Use any required header file(s), e.g. &lt;iostream&gt;, &lt;math&gt;, etc.
    - Use the main.hpp file for your function(s) declaration stated in 3. above.
    - Any variable (including variable(s) described in 2.) needs to be declared inside the main(), or inside the function(s) that you created - **do not use global variables**.
    - You need to make sure that your codes/program **can be executed** by the GitHub Classroom Workflow, so that the auto-grading can be performed (observe for the **green tick** on the repository page).
    - **DO NOT DELETE OR EDIT** the other files/folder (i.e. LICENSE, Makefile, catch.hpp and the test file(s)).
    - This repository hasn't been configured in Visual Studio Code yet. Add the "-Wall" and "Wconversion" inside the tasks.json for debugging while you are on Visual Studio Code. Use only G++ compiler.
8. Before you commit for grading, make sure you have **editted/filled your details below and inside the main.cpp file**.
	
### Student's details:

Declaration: I have read all the instructions given to me above.

**Name**: Write your full-name here\
**USM Email**: abc123@student.usm.my\
**GitHub Username**: abc123\
**Matric No.**: 987654

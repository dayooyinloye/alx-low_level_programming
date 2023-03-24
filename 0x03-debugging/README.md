# Debugging

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.

The debugging process normally begins with identifying the steps to reproduce the problem. This can be a non-trivial task, particularly with parallel processes and some Heisenbugs for example. The specific user environment and usage history can also make it difficult to reproduce the problem.

After the bug is reproduced, the input of the program may need to be simplified to make it easier to debug. For example, a bug in a compiler can make it crash when parsing a large source file. However, after simplification of the test case, only few lines from the original source file can be sufficient to reproduce the same crash. Simplification may be done manually using a divide-and-conquer approach, in which the programmer attempts to remove some parts of original test case then checks if the problem still occurs. When debugging in a GUI, the programmer can try skipping some user interaction from the original problem description to check if the remaining actions are sufficient for causing the bug to occur.

After the test case is sufficiently simplified, a programmer can use a debugger tool to examine program states (values of variables, plus the call stack) and track down the origin of the problem(s). Alternatively, tracing can be used. In simple cases, tracing is just a few print statements which output the values of variables at particular points during the execution of the program

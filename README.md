# Libunit
Framework to make a C testsuite

# Authorized functions
- malloc / free
- exit
- fork / wait
- write
- MACRO de <sys/wait.h>
- MACRO de <signal.h>

# Architecture

framework/
|_Makefile
tests/
|_Makefile
|_main.c
|_function_to_test_1/
  |_00_Launcher
  |_01_test01
  |_02_test02
  |_ ... 
|_function_to_test_2/
  |_00_Launcher
  |_01_test01
  |_02_test02
  |_ ... 
real-tests
|_Makefile


test routine : tests/<function_to_test>
srcs : framework/
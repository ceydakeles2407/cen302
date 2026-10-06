\# CEN 302 - Week 2 Lab: Byte Counter



\## Lab Information



\- Course: CEN 302 Operating Systems

\- Lab: Week 2 - Linux C Byte Counter

\- Date: 06.10.2026

\- Repository: https://github.com/ceydakeles2407/cen302



\## Goal



The goal of this lab is to implement a C program that counts the

number of bytes in a file using open(), read(), and close().



The program also demonstrates file descriptors, standard output,

standard error, and process exit status.



\## Environment



\- Operating System: Windows PowerShell environment

\- Compiler: C compiler (to be recorded after compilation)

\- Git: Git repository with GitHub remote



\## Progress



The repository was created and the initial lab files were committed

and pushed to GitHub.



Initial commit:

`29dae6e` - Start Week 2 bytecount lab

\## Test Results



| Test | Expected | Actual | Result |

|---|---:|---:|---|

| sample.txt (`abc\\n`) | 4 | 4 | PASS |

| empty.txt | 0 | 0 | PASS |

| missing.txt | exit 1 + error | exit 1 + error | PASS |

| no argument | exit 2 + usage | exit 2 + usage | PASS |



\## Build



Compiler: GCC 15.2.0 (Ubuntu 15.2.0-16ubuntu1)



Compile command:

cc -std=c11 -Wall -Wextra -Werror -o bytecount bytecount.c



\## What I Learned



1\. `open()` returns a file descriptor used by `read()` and `close()`.

2\. `read()` returns the number of bytes read; `0` means EOF and a negative value means an error.

3\. stdout, stderr, and exit status are separate parts of a command-line program's interface.



\## Git History



Initial commit: 29dae6e — Start Week 2 bytecount lab

Lab implementation commit: 25090f7 — Complete Week 2 bytecount lab



\## Final Status



The program compiles with `-Wall -Wextra -Werror` and passes the four mandatory tests.


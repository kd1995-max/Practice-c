kdev@LAPTOP-UF60BB07:~/practice/pointers/memmory_leak$ valgrind --leak-check=full ./memmory_leak
==342== Memcheck, a memory error detector
==342== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==342== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==342== Command: ./memmory_leak
==342==
2
4
8
16
32
==342==
==342== HEAP SUMMARY:
==342==     in use at exit: 5,242,880 bytes in 5 blocks
==342==   total heap usage: 6 allocs, 1 frees, 5,243,904 bytes allocated
==342==
==342== 5,242,880 bytes in 5 blocks are definitely lost in loss record 1 of 1
==342==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==342==    by 0x10919E: leak (in /home/kdev/practice/pointers/memmory_leak/memmory_leak)
==342==    by 0x1091C4: main (in /home/kdev/practice/pointers/memmory_leak/memmory_leak)
==342==
==342== LEAK SUMMARY:
==342==    definitely lost: 5,242,880 bytes in 5 blocks
==342==    indirectly lost: 0 bytes in 0 blocks
==342==      possibly lost: 0 bytes in 0 blocks
==342==    still reachable: 0 bytes in 0 blocks
==342==         suppressed: 0 bytes in 0 blocks
==342==
==342== For lists of detected and suppressed errors, rerun with: -s
==342== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

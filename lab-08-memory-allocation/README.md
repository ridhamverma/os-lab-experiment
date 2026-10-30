# Lab 08 — Memory Allocation and Usage in C

## Objective

Allocate memory dynamically, observe process memory usage, and release the allocation with free.

## Setup

Ubuntu with GCC, a terminal, and top or ps. Start with a small allocation such as 16 MB that comfortably fits available memory.

## Practical work

Read `memory-exercises.txt`, then run the examples below from this lab folder.

### Programs

| File | Purpose |
|---|---|
| `memory-allocation.c` | Validate a size, allocate and touch memory, wait for Enter, and release it. |

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic memory-allocation.c -o memory-allocation
./memory-allocation 16

# While the program waits, open a second terminal:
ps -C memory-allocation -o pid,comm,vsz,rss
# Or inspect the process interactively:
top
```

The program uses 1 MB = 1024 × 1024 bytes (technically a MiB). It writes every byte before waiting so the allocation becomes resident. ps reports VSZ and RSS in KiB on Ubuntu; total usage also includes the program and libraries. Press Enter once in the first terminal to free memory and exit.

## Observations and result

Record the commands or steps you completed, the output you observed, and any difficulties. Add your own screenshots to `screenshots/`; useful evidence includes compilation, successful allocation, memory usage while waiting, and memory release.

Complete the result after performing the practical work.

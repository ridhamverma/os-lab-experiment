# Lab 07 — String Operations in Bash and C

## Objective

Extract a substring, find string length, and compare execution time for equivalent Bash and C programs.

## Setup

Ubuntu with Bash and GCC. Use ASCII text when comparing results: Bash can count characters according to the locale, while this C example counts bytes.

## Practical work

Read `string-exercises.txt`, then run the examples below from this lab folder.

### Programs

| File | Purpose |
|---|---|
| `substring.sh` | Read a full line, extract a substring, and report its length in Bash. |
| `substring.c` | Perform the same operations in C with validated bounds. |

```bash
bash substring.sh
gcc -std=c11 -Wall -Wextra -Wpedantic substring.c -o substring
./substring

# Use identical input for timing, excluding human typing time.
printf 'Operating Systems\n1\n9\n' > /tmp/os-lab-07-input.txt
time bash substring.sh < /tmp/os-lab-07-input.txt
time ./substring < /tmp/os-lab-07-input.txt
```

Both programs use a 1-based starting position. A start at string length + 1 returns an empty substring; a substring extending past the end is truncated. The C input buffer supports lines up to 1022 bytes. Tiny timing results include program startup and can vary between runs.

## Observations and result

Record the commands or steps you completed, the output you observed, and any difficulties. Add your own screenshots to `screenshots/`; useful evidence includes identical substring output, string lengths, boundary cases, and timing results.

Complete the result after performing the practical work.

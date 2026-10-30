# Lab 06 — User Information and Text Processing

## Objective

Display user information and login history, count lines, words, and characters, extract lines, search and replace text, and sort file contents.

## Setup

Ubuntu with Bash and the standard whoami, id, who, date, last, wc, sed, grep, and sort commands. Login history may be empty on a new system.

## Practical work

Read `user-text-exercises.txt`, then run the examples below from this lab folder.

### Programs

| File | Purpose |
|---|---|
| `user-info.sh` | Display the current user, IDs, sessions, and date. |
| `login-history.sh` | Display the five most recent login records and current user. |
| `text-processing.sh` | Demonstrate counting, line extraction, searching, replacement, unique lines, and sorting. |

```bash
bash user-info.sh
bash login-history.sh
bash text-processing.sh
```

The text-processing script creates temporary sample files and removes them on exit. The sed substitution displays modified text without changing the original sample.

## Observations and result

Record the commands or steps you completed, the output you observed, and any difficulties. Add your own screenshots to `screenshots/`; useful evidence includes user information, login history, counts, extracted lines, search matches, and sorted output.

Complete the result after performing the practical work.

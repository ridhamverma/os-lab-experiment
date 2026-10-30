# Lab 05 — Shell Arguments and File Operations

## Objective

Pass arguments to Bash scripts, identify path types, and practise copying, renaming, and changing file extensions.

## Setup

Bash and a separate practice directory containing disposable sample files.

## Practical work

Read `scripting-exercises.txt`, then run the two scripts using the examples below.

### Scripts

| File | Purpose |
|---|---|
| `path-type.sh` | Report whether an argument is a regular file, directory, another existing path, or missing. |
| `file-actions.sh` | Rename or copy a regular file, or change its extension. |

Run these commands from this lab folder:

```bash
bash path-type.sh scripting-exercises.txt
bash path-type.sh screenshots

mkdir -p practice
cd practice
echo "Operating Systems Lab" > notes.txt
bash ../file-actions.sh rename notes.txt lab-notes.txt
bash ../file-actions.sh copy lab-notes.txt backup.txt
bash ../file-actions.sh ext backup.txt md
```

Quote paths containing spaces. The file operations refuse existing destinations. Changing an extension changes the name only, not the file format.

## Observations and result

Record the commands or steps you completed, the output you observed, and any difficulties. Add your own screenshots to `screenshots/`; useful evidence includes path classification and the output of each file operation.

Complete the result after performing the practical work.

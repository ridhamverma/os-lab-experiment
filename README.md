# Operating Systems Lab Workbook

A topic-by-topic workbook for Linux and Operating Systems practicals, covering virtual machines, terminal commands, text processing, process management, Bash scripting, string operations, and dynamic memory allocation in C.

## Lab index

| Lab | Topic | Worksheet |
|---|---|---|
| 01 | [Ubuntu in a Virtual Machine](./lab-01-ubuntu-virtual-machine/) | [`installation-steps.txt`](./lab-01-ubuntu-virtual-machine/installation-steps.txt) |
| 02 | [Linux Command Basics](./lab-02-linux-command-basics/) | [`command-reference.txt`](./lab-02-linux-command-basics/command-reference.txt) |
| 03 | [Streams, Pipes, and Text Tools](./lab-03-streams-and-text-tools/) | [`text-processing-exercises.txt`](./lab-03-streams-and-text-tools/text-processing-exercises.txt) |
| 04 | [Processes and Terminal Editors](./lab-04-processes-and-editors/) | [`process-editor-exercises.txt`](./lab-04-processes-and-editors/process-editor-exercises.txt) |
| 05 | [Shell Arguments and File Operations](./lab-05-shell-arguments-and-files/) | [`scripting-exercises.txt`](./lab-05-shell-arguments-and-files/scripting-exercises.txt) |
| 06 | [User Information and Text Processing](./lab-06-user-info-and-text-processing/) | [`user-text-exercises.txt`](./lab-06-user-info-and-text-processing/user-text-exercises.txt) |
| 07 | [String Operations in Bash and C](./lab-07-string-operations/) | [`string-exercises.txt`](./lab-07-string-operations/string-exercises.txt) |
| 08 | [Memory Allocation and Usage in C](./lab-08-memory-allocation/) | [`memory-exercises.txt`](./lab-08-memory-allocation/memory-exercises.txt) |

## Working through a lab

1. Open the lab folder and read its README for the objective and setup.
2. Follow the accompanying text worksheet in an Ubuntu environment.
3. Run the supplied Bash scripts or compile and execute the C programs using each lab's examples. For Lab 05, use disposable sample files in a practice directory.
4. Record your observations and result after carrying out the work.
5. Save screenshots of your session in the lab's `screenshots/` folder.

Each lab keeps its instructions, worksheet, evidence, and any runnable programs together. Labs 07–08 require GCC; the worksheets target an Ubuntu environment. Commands that create, move, or remove files should be practised with disposable sample data.

## Folder guide

```text
lab-01-ubuntu-virtual-machine/          VirtualBox and Ubuntu installation
lab-02-linux-command-basics/            Navigation, files, and system commands
lab-03-streams-and-text-tools/          Redirection, pipes, grep, sed, and find
lab-04-processes-and-editors/           Job control, nano, and vi/vim
lab-05-shell-arguments-and-files/       Path checks and filename operations
lab-06-user-info-and-text-processing/   User details, login history, and text tools
lab-07-string-operations/               Substrings, string lengths, and timing
lab-08-memory-allocation/               Dynamic allocation and process memory usage
```

The text worksheets contain procedures and examples; they are not scripts to execute as a whole. Results and screenshots are to be added after completing each lab.

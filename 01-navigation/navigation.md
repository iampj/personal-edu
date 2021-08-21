# Navigating the Command Line Interface (CLI)

## `$`

In the terminal, the first thing you see is the `$`.

`$` is called the shell prompt, it appears when the terminal is ready to accept a command.

---

## `ls`

The `ls` command looks at the directory you are in and lists the files and directories within it.

For example an output would look like this:
```bash
$ ls
Documents Downloads readme.txt 
```

---

## `pwd`

The `pwd` command outputs the full directory name that you are in. `pwd` stands for "Print Working Directory"

```bash
$ pwd
/home/user
```

---

## `cd`

The `cd` command which stands for "Change Directory" does exactly what you think. You can access directories quickly in the current directory, or give it the full working directory and change your location completely. 

```bash
$ pwd
/bin
$ cd /home
$ ls
user admin default
$ cd user
$ ls 
Documents Downloads readme.txt 
$ cd ../admin
$ pwd 
/home/admin
```

---

## `mkdir`

The `mkdir` command creates a new directory & `mkdir` is short for "Make Directory".

```bash
$ ls
Documents Downloads readme.txt
$ mkdir Workspace
$ ls
Documents Downloads Workspace readme.txt
$ mkdir Documents/taxes.txt
```

---

## `touch`

The `touch` command creates a new file.

```bash
$ ls
Documents Downloads Workspace readme.txt
$ touch gabagool.txt
$ ls
Documents Downloads Workspace gabagool.txt readme.txt
```
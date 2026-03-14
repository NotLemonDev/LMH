> [!Warning]
> THIS IS FOR EDUCATIONAL AND TESTING PURPOSES ONLY!

# Lemon's ***minimal*** Memory Hacker
Simple memory hacking program written in C! (with a test program included)

> #### How 2 use 
>  the commands:
> - write
> - read
> - getpid
> - scan
> - safescan
> - nextscan
>
> *write* requires the program PID and the adress of the value you would like to write in.
> 
> *read* requires the program PID and the adress of the value you would like to read.
>
> *getpid* lists every program + the pid
>
> *scan* requires the program PID and the value you would like to scan for. WARNING: DO NOT USE ON REAL GAMES, USE SAFESCAN INSTEAD.
>
> *safescan* the same as scan but limits entries to 1000
>
> *nextscan* similar to CE's (Cheat Engine) multi stage scan.

kind of simple

# Compiling

Linux/macOS:
(you need gcc)
```bash
gcc main.c -o LMH
```
then run with:
```bash
./LMH
```
Windows:
install MSYS2: https://www.msys2.org/
(run MSYS2 MINGW64)
then install gcc:
```bash
pacman -S gcc
```
Finally compile and run:
```bash
gcc main.c -o LMH
```












Powershell:

```ps1
./LMH
```

Command Prompt
```bash
LMH
```

MSYS2 (bash)
```bash
./LMH
```

# Installing
Run setup-win-mingw.exe

ELSE

Download manually LMH.exe and msys-2.0.dll
keep them in the same directory or else lmh will break

# Latest Updates
LMH - v1.1

new commands (getpid, scan, safescan, nextscan)

new training programs

scan command can be multi stage

safescan limits every scan to 1000 entries

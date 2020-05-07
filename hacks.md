# Some hacks for competitive programming
Copy and paste these in your **~/.bashrc** file.

1. Create an alias for quickly accessing your competitive programming directory.
```
alias compi="cd PATH_TO_YOUR_COMPI_DIRECTORY"
```

2. Create a function to compile and run your cpp files in one command.
```
doit () { g++ "$@".cpp -o "$@" && ./"$@";}
# Usage: doit FILENAME(don't write .cpp)
```

3. Create a function that makes a subdirectory for a particular contest in your competitive programming directory, makes a copy of your code template into it(Ensure that you have a template source file in your competitive programming directory) and opens this directory in the visual studio code.
```
contest () { cd COMPI_DIRECTORY; mkdir "$@"; cp TEMPLATE_FILE.cpp "$@"; cd "$@"; code .;}
# Usage: contest CONTEST_NAME
```

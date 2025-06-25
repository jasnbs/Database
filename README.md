Something went wrong so I need to write it again...
Im currently building my first project in c lanuguage, it is simple data base based on SQLlite(simpler to understand).
This project compiles sql text into bytecode and then runs that code trough virtual machine.
https://sqlite.org/arch.html here you can see architecture of SQLite and this project is mainly based on it.
I wanted to understand databases better and that is the reason i choose it as a project.

1.Simple REPL(read-execute-print-loop)
  this is infinite loop that reads user output until it detects .exit
  in struct im using type integer in input_lenght thats because im on windows but if u use linux or MacOS u can use ssize_t(signed size_t)thats one alterantive for ssize_t
  there is windows library that that defines windows exuvalents for POSIX types(written for MacOS or Linux) this is seccond alterantive 
  and for third u can use function ptrdiff_t(signed version of ssize_t) but make sure u include <stddef.h>library 

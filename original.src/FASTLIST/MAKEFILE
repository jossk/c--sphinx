# Use the C or C++ compiler
Compiler                = wcl

# compiler options for code that has to run from an interrupt:
Compiler_Options       = /4 /ms /zp1 /c /fp3 /ox /ot /y /cc++
#/oxl+ /j /s /Iinclude

Linker_options          = op c

# Compile using dos4g or pmodew
System                  = dos

Exe_file                = fastlist.exe

####################
## Makefile rules ##
####################

all        : fastlist.exe

fastlist.exe : fastlist.obj

             *wlink system $(System) $(Linker_Options) name fastlist &
             file {$<}

clean
        del *.obj
        del *.err
        del *.bak

# next are the exceptions that don't have to be compiled with the /zu option
# since they will never be called from a interrupt. hey.. I _tried_ to find
# a clean solution..

fastlist.obj :  fastlist.cpp
                $(Compiler) $(Compiler_Options) $<

.cpp.obj:
        $(Compiler) $(Compiler_Options) $<


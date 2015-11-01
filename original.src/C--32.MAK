#
# Borland C++ IDE generated makefile
# Generated 14.04.01 at 11:01:08
#
.AUTODEPEND


#
# Borland C++ tools
#
IMPLIB  = Implib
BCC32   = Bcc32 +BccW32.cfg
BCC32I  = Bcc32i +BccW32.cfg
TLINK32 = TLink32
ILINK32 = Ilink32
TLIB    = TLib
BRC32   = Brc32
TASM32  = Tasm32
#
# IDE macros
#


#
# Options
#
IDE_LinkFLAGS32 =  -LC:\BC5\LIB
LinkerLocalOptsAtC32_cxx32dexe =  -Tpe -ap -c -went -wdup -wdef -wimt -wbdl -wsrf -wmsk
ResLocalOptsAtC32_cxx32dexe =
BLocalOptsAtC32_cxx32dexe =
CompInheritOptsAt_cxx32dexe = -IC:\BC5\INCLUDE
LinkerInheritOptsAt_cxx32dexe = -x
LinkerOptsAt_cxx32dexe = $(LinkerLocalOptsAtC32_cxx32dexe)
ResOptsAt_cxx32dexe = $(ResLocalOptsAtC32_cxx32dexe)
BOptsAt_cxx32dexe = $(BLocalOptsAtC32_cxx32dexe)

#
# Dependency List
#
Dep_Cxx32 = \
   c--32.exe

C--32 : BccW32.cfg $(Dep_Cxx32)
  echo MakeNode

Dep_cxx32dexe = \
   outle.obj\
   switch.obj\
   disasm.obj\
   errors.obj\
   tokr.obj\
   outpe.obj\
   outobj.obj\
   debug.obj\
   toke.obj\
   tokc.obj\
   tokb.obj\
   toka.obj\
   main.obj\
   class.obj\
   pointer.obj\
   new_type.obj\
   optreg.obj\
   libobj.obj\
   res.obj

c--32.exe : $(Dep_cxx32dexe)
  $(ILINK32) @&&|
 /v $(IDE_LinkFLAGS32) $(LinkerOptsAt_cxx32dexe) $(LinkerInheritOptsAt_cxx32dexe) +
C:\BC5\LIB\c0x32.obj+
outle.obj+
switch.obj+
disasm.obj+
errors.obj+
tokr.obj+
outpe.obj+
outobj.obj+
debug.obj+
toke.obj+
tokc.obj+
tokb.obj+
toka.obj+
main.obj+
class.obj+
pointer.obj+
new_type.obj+
optreg.obj+
libobj.obj+
res.obj
$<,$*
C:\BC5\LIB\bidsf.lib+
C:\BC5\LIB\import32.lib+
C:\BC5\LIB\cw32.lib



|
outle.obj :  outle.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ outle.cpp
|

switch.obj :  switch.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ switch.cpp
|

disasm.obj :  disasm.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ disasm.cpp
|

errors.obj :  errors.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ errors.cpp
|

tokr.obj :  tokr.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ tokr.cpp
|

outpe.obj :  outpe.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ outpe.cpp
|

outobj.obj :  outobj.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ outobj.cpp
|

debug.obj :  debug.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ debug.cpp
|

toke.obj :  toke.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ toke.cpp
|

tokc.obj :  tokc.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ tokc.cpp
|

tokb.obj :  tokb.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ tokb.cpp
|

toka.obj :  toka.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ toka.cpp
|

main.obj :  main.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ main.cpp
|

class.obj :  class.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ class.cpp
|

pointer.obj :  pointer.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ pointer.cpp
|

new_type.obj :  new_type.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ new_type.cpp
|

res.obj :  res.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ res.cpp
|

optreg.obj :  optreg.cpp
  $(BCC32) -c @&&|
 $(CompOptsAt_cxx32dexe) $(CompInheritOptsAt_cxx32dexe) -o$@ optreg.cpp
|
# Compiler configuration file
BccW32.cfg :
   Copy &&|
-w
-R
-v
-WM-
-vi
-H
-H=c--32.csm
-WC
-O2
-Og
-4
-D_OPTREG_
| $@



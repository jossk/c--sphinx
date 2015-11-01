@echo off
wmake 
rem compile watcom with zordex
rem wcl386 /5r /zp1 /d2 /hw /c /fp3 /ox /ot /y /cc++ /d_WC_ /mf main.cpp toka.cpp tokb.cpp tokc.cpp toke.cpp tokr.cpp errors.cpp
rem wlink op map n c-- f main.obj f toka.obj f tokb.obj f tokc.obj f toke.obj f tokr.obj f errors.obj sys dos4g op c op stub=zrdx.exe op st=32768
rem del *.obj
copy c--.exe c:\c--\*.*

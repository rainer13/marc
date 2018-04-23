@echo off

REM incerc sa numar argumentele; in Ubuntu aveai $#, dar astia nu sunt asa destepti
SET /A ARGS_COUNT=0
FOR %%A in (%*) DO SET /A ARGS_COUNT+=1

ECHO %ARGS_COUNT%

IF /I %ARGS_COUNT% NEQ 3 (goto :labela) else (goto :labelb)

REM nu poti face grupuri de instructiuni la un if, trebuie sa fie ca o functie
:labela
ECHO "nr gresit de argument"
EXIT /b 2

:labelb
"C:\Users\rainer\Documents\Visual Studio 2017\Projects\marcMakePacket\Debug\marcMakePacket.exe" %1 %2
"C:\Users\rainer\Documents\Visual Studio 2017\Projects\marcReconstruct\Debug\marcReconstruct.exe" %2 %3

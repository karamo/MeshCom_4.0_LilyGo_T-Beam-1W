::@echo off
set builds=.pio\build
dir /B /A:D %builds% >builds.txt
type builds.txt

for /F %%i in (builds.txt) do md firmware\%%i

for /F %%i in (builds.txt) do copy /Y %builds%\%%i\firmware.bin firmware\%%i\firmware.bin
for /F %%i in (builds.txt) do copy /Y %builds%\%%i\bootloader.bin firmware\%%i\bootloader.bin
for /F %%i in (builds.txt) do copy /Y %builds%\%%i\partitions.bin firmware\%%i\partitions.bin
for /F %%i in (builds.txt) do copy /Y %builds%\%%i\firmware.elf firmware\%%i\firmware.elf

pause

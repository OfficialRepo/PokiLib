# Poki Lib Source Files and DLL Files for Windows

## Linux
----
To build this on Linux/macOS just run `make`

## Windows
----
To build this on Windows you need Visual Studio and the provided Visual Studio Command Prompt. For this compile I used Visual Studio 2015 Community Edition.

* Open `VS2015 x64 Native Tools Command Prompt` for 64bit or `VS2015 x86 Native Tools Command Prompt` for 32bit
* Run `build_dll.bat`

----

To use the provided binary DLL files just download them raw and drop them into the required location.

* encrypt.dll is for 32bit
* encrypt_64.dll is for 64bit

----

## Original credit goes to the Unknown6 team for figuring this out and the raw files came from http://pgoapi.com/pgoencrypt.tar.gz - I claim nothing more than compiling the binary dll files and adding the build_dll.bat file.
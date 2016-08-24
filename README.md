# Source and DLL Files for Windows

## Binary Files

To use the provided binary DLL files just download them raw and drop them into the required location.

* encrypt.dll is for 32bit
* encrypt_64.dll is for 64bit

## Building

### Linux

To build this on Linux/macOS just run clone this repo and run `make`

### Windows

To build this on Windows you need Visual Studio and the provided Visual Studio Command Prompt. For this compile I used Visual Studio 2015 Community Edition.

#### Build 64bit DLL

* Open `VS2015 x64 Native Tools Command Prompt`
* Run `build_dll_64.bat`

#### Build 32bit DLL

* Open `VS2015 x86 Native Tools Command Prompt`
* Run `build_dll.dll`

## Credit

* Unknown6 team for figuring this out
* Raw files came from [pgoencrypt.tar.gz](http://pgoapi.com/pgoencrypt.tar.gz "pgoencrypt.tar.gz") 
* I claim nothing more than compiling the binary dll files and adding the `build_dll.bat` and `build_dll_64.bat` files and file.
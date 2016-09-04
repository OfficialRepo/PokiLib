## Binary Files

To use the provided binary DLL and SO files for select operating systems. Just download them using the links below and put them in the required location.

**Windows**

* encrypt.dll for 32bit Windows ([Direct Link](https://github.com/OfficialRepo/PokiLib/raw/master/Windows/encrypt.dll "encrypt.dll"))
* encrypt_64.dll for 64bit Windows ([Direct Link](https://github.com/OfficialRepo/PokiLib/raw/master/Windows/encrypt_64.dll "encrypt_64.dll"))

**macOS**

* encrypt.so for macOS ([Direct Link](https://github.com/OfficialRepo/PokiLib/raw/master/macOS/encrypt.so "encrypt.so"))

**Ubuntu**

* encrypt.so for 64bit Ubuntu ([Direct Link](https://github.com/OfficialRepo/PokiLib/raw/master/Ubuntu/encrypt.so "encrypt.so"))

## Building

### Building in Linux or macOS

*If you need encrypt.so for an operating system we do not currently provide for then you will have to compile it yourself using these directions:*

```
git clone https://github.com/OfficialRepo/PokiLib.git
cd PokiLib
make
```

You will no have an `encrypt.so` file that you can copy to the required location.

### Windows

To build this on Windows you need Visual Studio and the provided Visual Studio Command Prompt. For this compile I used Visual Studio 2015 Community Edition.

#### Build 32bit DLL

* Open `VS2015 x86 Native Tools Command Prompt`
* Run `build_dll.bat`

#### Build 64bit DLL

* Open `VS2015 x64 Native Tools Command Prompt`
* Run `build_dll_64.bat`

## Credit

* Unknown6 team for figuring this out
* Raw files came from [pgoencrypt.tar.gz](http://pgoapi.com/pgoencrypt.tar.gz "pgoencrypt.tar.gz") 
* I claim nothing more than compiling the binary dll files and adding the `build_dll.bat` and `build_dll_64.bat` files and file.

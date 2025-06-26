<!-- 🌐 Language: [English](README.md) | [中文](README-CN.md) -->

# CMD Launcher

A simple Windows utility that launches `cmd.exe` in the current directory where the executable is located. If run with administrator privileges, it will open an elevated command prompt.

## 🚀 Features
- Opens `cmd.exe` in the directory where the executable resides.
- Automatically detects if the program is running as an administrator.
- Launches an elevated command prompt if running as an administrator.
- Fully supports directory names with spaces.

## 🌟 Main Advantages
- ✅ CMD starts in the same directory as the EXE, unaffected by the default `cmd.exe` path.
- ✅ Automatic elevation to administrator privileges without manual confirmation.
- ✅ Shorter and more efficient code with fewer API calls, improving stability.
- ✅ Fully compatible with paths containing spaces (such as `C:\Program Files\MyApp\app.exe`).

## 🛠️ How to Build
### Requirements
- Windows operating system
- MinGW or MSVC compiler

### Build with MinGW
```sh
gcc cmd-here.c -o CMD-help.exe -mwindows
```

### Build with MSVC
```sh
cl cmd-here.c /Fe:CMD-help.exe
```

## 📌 Usage
Simply place the compiled `CMD-help.exe` in any directory and execute it to open the command prompt in that directory.

## 📜 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```

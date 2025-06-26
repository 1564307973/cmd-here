## Language Options

- [中文](README_CN.md)
- English

---

# CMD Launcher

A simple Windows tool that launches `cmd.exe` in the current directory where the executable resides. If run as administrator, it will start an elevated command prompt.

## 🚀 Features

- Opens `cmd.exe` in the directory of the executable.
- Automatically detects if running as administrator.
- Launches an elevated command prompt if running as administrator.
- Fully supports directory names with spaces.

## 🌟 Advantages

- ✅ CMD starts in the EXE's directory, not affected by the default `cmd.exe` path.
- ✅ Automatically elevates to administrator privileges, no manual confirmation needed.
- ✅ Shorter and more efficient code, fewer API calls, greater stability.
- ✅ Fully compatible with paths containing spaces (like `C:\Program Files\MyApp\app.exe`).

## 🛠️ How to Build

### Requirements

- Windows OS
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

Simply place the compiled `CMD-help.exe` in any directory and run it. The command prompt will open in that directory.

## 📜 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

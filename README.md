```markdown
# CMD Launcher

[中文文档](README-CN.md)

A simple Windows tool that launches `cmd.exe` in the current directory where the executable is located. If run with administrator privileges, it will launch an elevated command prompt.

## 🚀 Features
- Opens `cmd.exe` in the directory of the executable.
- Automatically detects administrator privileges.
- Auto-elevates command prompt when needed.
- Full support for paths with spaces.

## 🌟 Key Advantages
- ✅ Always starts in EXE's directory
- ✅ Automatic privilege elevation
- ✅ Lightweight and efficient code
- ✅ Space-safe path handling

## 🛠️ Compilation
### With MinGW:
```sh
gcc cmd-here.c -o CMD-help.exe -mwindows
```

### With MSVC:
```sh
cl cmd-here.c /Fe:CMD-help.exe
```

## 📌 Usage
Place `CMD-help.exe` in any directory and run it.

## 📜 License
MIT - see [LICENSE](LICENSE)
```

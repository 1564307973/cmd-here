根据您的要求，我创建了英文版的 `README.md` 文件，并在开头添加了语言选择选项，同时保留了原始中文文档 `README-CN.md` 不变。以下是完整的英文 `README.md` 内容：

```markdown
[中文文档](README-CN.md) | [English Documentation](#)

> *Language: [中文](README-CN.md) | English*

# CMD Launcher

A simple Windows tool that launches `cmd.exe` in the current directory where the executable is located. If run with administrator privileges, it will launch an elevated command prompt.

## 🚀 Features
- Opens `cmd.exe` in the directory of the executable.
- Automatically detects if the program is run as administrator.
- Launches an elevated command prompt if run as administrator.
- Fully supports directory names with spaces.

## 🌟 Key Advantages
- ✅ CMD starts in the directory of the EXE, unaffected by the default path of `cmd.exe`.
- ✅ Automatically elevates administrator privileges without manual confirmation.
- ✅ Shorter and more efficient code, reducing API calls and improving stability.
- ✅ Fully compatible with paths containing spaces (e.g., `C:\Program Files\MyApp\app.exe`).

## 🛠️ How to Compile
### Dependencies
- Windows OS
- MinGW or MSVC compiler

### Compiling with MinGW
```sh
gcc cmd-here.c -o CMD-help.exe -mwindows
```

### Compiling with MSVC
```sh
cl cmd-here.c /Fe:CMD-help.exe
```

## 📌 Usage
Simply place the compiled `CMD-help.exe` in any directory and execute it to open a command prompt in that directory.

## 📜 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```

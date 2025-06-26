# CMD 启动器

一个简单的 Windows 工具，可在可执行文件所在的当前目录中启动 `cmd.exe`。如果以管理员权限运行，它将启动一个提升权限的命令提示符。

## 🚀 功能特点
- 在可执行文件所在的目录中打开 `cmd.exe`。
- 自动检测程序是否以管理员权限运行。
- 如果以管理员身份运行，则启动一个提升权限的命令提示符。
- 完全支持带空格的目录名称。

## 🌟 主要优势
- ✅ CMD 在 EXE 所在目录启动，不受 `cmd.exe` 默认路径影响。
- ✅ 自动提升管理员权限，无需手动确认。
- ✅ 代码更短、更高效，减少 API 调用，提高稳定性。
- ✅ 完全兼容带空格的路径（如 `C:\Program Files\MyApp\app.exe`）。

## 🛠️ 如何编译
### 依赖要求
- Windows 操作系统
- MinGW 或 MSVC 编译器

### 使用 MinGW 编译
```sh
gcc cmd-here.c -o CMD-help.exe -mwindows
```

### 使用 MSVC 编译
```sh
cl cmd-here.c /Fe:CMD-help.exe
```

## 📌 使用方法
只需将编译后的 `CMD-help.exe` 放入任意目录并执行，即可打开命令提示符并进入该目录。

## 📜 许可证
本项目采用 MIT 许可证 - 详见 [LICENSE](LICENSE) 文件。

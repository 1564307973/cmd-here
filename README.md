# cmd-here
以下是对 `cmd-here.exe` 程序的说明以及如何编译它的步骤：         
**程序说明**:      
`cmd-here.exe` 是一个简单的 Windows 应用程序，它的目的是以当前用户的权限启动命令提示符。如果当前用户是管理员，程序将尝试以管理员权限启动命令提示符。程序的工作目录是用户双击或从命令提示符中运行它时所在的目录。   
**编译方式**:   
1. **确保 MinGW 安装**:   
   - 如果您还没有安装 MinGW，您需要下载并安装它。可以从 [MinGW 官网](http://www.mingw.org/) 获取安装程序。   
2. **配置环境变量**:   
   - 确保您已经将 MinGW 的 `bin` 目录添加到系统环境变量 `PATH` 中。这可以通过系统属性设置或使用命令行工具如 `setx` 完成。   
3. **编写源代码**:   
   - 编写您的 C 源代码文件，例如 `cmd-here.c`。   
4. **编译程序**:   
   - 打开命令提示符窗口。   
   - 切换到包含 `cmd-here.c` 的目录。   
   - 使用以下命令编译程序：   
     ```sh   
     gcc -o cmd-here.exe cmd-here.c -lshell32   
     ```   
     这将编译 `cmd-here.c` 并生成 `cmd-here.exe` 可执行文件。`-lshell32` 选项告诉 GCC 链接到 `shell32.lib` 库，这是执行某些 Windows Shell 操作所必需的。   
5. **运行程序**:   
   - 编译完成后，您可以在同一目录下找到 `cmd-here.exe`。   
   - 双击它或者在命令提示符中运行它来测试它是否按预期工作。   
请注意，GCC 通常需要 MinGW 的支持库，这些库通常在 MinGW 安装过程中自动安装。如果您遇到任何问题，请确保 MinGW 安装正确，并且您的环境变量设置正确。   
如果您在编译或运行时遇到任何问题，请检查环境变量和路径设置是否正确，以及 MinGW 是否已正确安装。   
   
   
编译后体积过大可依次执行以下命令   
gcc -Os -o cmd-here.exe cmd-here.c -lshell32   
strip cmd-here.exe   

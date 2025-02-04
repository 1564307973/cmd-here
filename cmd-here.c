#include <windows.h>
#include <shellapi.h>
#include <stdio.h>

BOOL IsUserAdmin() {
    BOOL isAdmin = FALSE;
    HANDLE hToken = NULL;
    
    if (OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hToken)) {
        TOKEN_ELEVATION elevation;
        DWORD size;
        if (GetTokenInformation(hToken, TokenElevation, &elevation, sizeof(elevation), &size)) {
            isAdmin = elevation.TokenIsElevated;
        }
        CloseHandle(hToken);
    }
    return isAdmin;
}

void GetExecutableDirectory(char* path, DWORD size) {
    GetModuleFileName(NULL, path, size);
    char* lastSlash = strrchr(path, '\\');
    if (lastSlash) *lastSlash = '\0';  // 截断字符串，保留目录
}

int main() {
    char path[MAX_PATH];
    GetExecutableDirectory(path, MAX_PATH);

    ShellExecute(NULL, IsUserAdmin() ? "runas" : "open", "cmd.exe", NULL, path, SW_SHOW);
    return 0;
}

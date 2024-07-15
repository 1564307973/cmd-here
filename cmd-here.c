#include <windows.h>
#include <shlobj.h>
#include <shellapi.h>
#include <stdio.h>

int main() {
    char path[MAX_PATH];
    if (!GetCurrentDirectory(MAX_PATH, path)) {
        MessageBox(NULL, "无法获取当前目录", "错误", MB_ICONERROR);
        return 1;
    }

    char command[MAX_PATH * 2];
    snprintf(command, sizeof(command), "cmd.exe /K \"cd /D \"%s\"\"", path);

    BOOL bIsAdmin = FALSE;
    SID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;
    PSID AdministratorsGroup;
    if (AllocateAndInitializeSid(&NtAuthority, 2, SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS, 0, 0, 0, 0, 0, 0, &AdministratorsGroup)) {
        CheckTokenMembership(NULL, AdministratorsGroup, &bIsAdmin);
        FreeSid(AdministratorsGroup);
    }

    if (bIsAdmin) {
        ShellExecute(NULL, "runas", "cmd.exe", command, NULL, SW_SHOW);
    } else {
        ShellExecute(NULL, "open", "cmd.exe", command, NULL, SW_SHOW);
    }

    return 0;
}

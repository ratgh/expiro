
HANDLE _ADVAPI32=0;

BOOL (WINAPI *_CryptAcquireContext)(HCRYPTPROV *phProv,LPCTSTR pszContainer,LPCTSTR pszProvider,DWORD dwProvType,DWORD dwFlags);
BOOL (WINAPI *_CryptCreateHash)(HCRYPTPROV hProv,ALG_ID Algid,HCRYPTKEY hKey,DWORD dwFlags,HCRYPTHASH *phHash);
BOOL (WINAPI *_CryptHashData)(HCRYPTHASH hHash,BYTE *pbData,DWORD dwDataLen,DWORD dwFlags);
BOOL (WINAPI *_CryptGetHashParam)(HCRYPTHASH hHash,DWORD dwParam,BYTE *pbData,DWORD *pdwDataLen,DWORD dwFlags);
BOOL (WINAPI *_CryptDestroyHash)(HCRYPTHASH hHash);
BOOL (WINAPI *_CryptReleaseContext)(HCRYPTPROV hProv,DWORD dwFlags);
LONG   (WINAPI *_RegOpenKeyEx)(HKEY hKey,LPCTSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult);
LONG   (WINAPI *_RegEnumKeyEx)(HKEY hKey,DWORD dwIndex,LPTSTR lpName,LPDWORD lpcName,LPDWORD lpReserved,LPTSTR lpClass,LPDWORD lpcClass,PFILETIME lpftLastWriteTime);
LONG   (WINAPI *_RegQueryValueEx)(HKEY hKey,LPTSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData);
LONG   (WINAPI *_RegCreateKeyEx)(HKEY hKey,LPCWSTR lpSubKey,DWORD Reserved,LPWSTR lpClass,DWORD dwOptions,REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult,LPDWORD lpdwDisposition);
LONG   (WINAPI *_RegSetValueEx)(HKEY hKey,LPCWSTR lpValueName,DWORD Reserved,DWORD dwType,const BYTE* lpData,DWORD cbData); 
LONG   (WINAPI *_RegSetKeySecurity)(HKEY hKey,SECURITY_INFORMATION SecurityInformation,PSECURITY_DESCRIPTOR pSecurityDescriptor);
LONG   (WINAPI *_RegCloseKey)(HKEY hKey);
BOOL   (WINAPI *_GetUserName)(LPTSTR lpBuffer,LPDWORD nSize);
BOOL   (WINAPI *_OpenProcessToken)(HANDLE ProcessHandle,DWORD DesiredAccess,PHANDLE TokenHandle);
BOOL   (WINAPI *_LookupPrivilegeValue)(LPCTSTR lpSystemName,LPCTSTR lpName,PLUID lpLuid);
BOOL   (WINAPI *_GetTokenInformation)(HANDLE TokenHandle,TOKEN_INFORMATION_CLASS TokenInformationClass,LPVOID TokenInformation,DWORD TokenInformationLength,PDWORD ReturnLength);
BOOL   (WINAPI *_AdjustTokenPrivileges)(HANDLE TokenHandle,BOOL DisableAllPrivileges,PTOKEN_PRIVILEGES NewState,DWORD BufferLength,PTOKEN_PRIVILEGES PreviousState,PDWORD ReturnLength);
BOOL   (WINAPI *_InitializeSecurityDescriptor)(PSECURITY_DESCRIPTOR pSecurityDescriptor,DWORD dwRevision);
BOOL   (WINAPI *_SetSecurityDescriptorDacl)(PSECURITY_DESCRIPTOR pSecurityDescriptor,BOOL bDaclPresent,PACL pDacl,BOOL bDaclDefaulted);
BOOL   (WINAPI *_SetSecurityDescriptorOwner)(PSECURITY_DESCRIPTOR pSecurityDescriptor,PSID pOwner,BOOL bOwnerDefaulted);
PSID_IDENTIFIER_AUTHORITY (WINAPI *_GetSidIdentifierAuthority)(PSID pSid);
PDWORD (WINAPI *_GetSidSubAuthority)(PSID pSid,DWORD nSubAuthority);
PUCHAR (WINAPI *_GetSidSubAuthorityCount)(PSID pSid);
BOOL   (WINAPI *_SetFileSecurity)(LPCTSTR lpFileName,SECURITY_INFORMATION SecurityInformation,PSECURITY_DESCRIPTOR pSecurityDescriptor);
BOOL   (WINAPI *_CloseServiceHandle)(SC_HANDLE hSCObject);
BOOL   (WINAPI *_QueryServiceConfig)(SC_HANDLE hService,LPQUERY_SERVICE_CONFIG lpServiceConfig,DWORD cbBufSize,LPDWORD pcbBytesNeeded);
BOOL   (WINAPI *_EnumServicesStatus)(SC_HANDLE hSCManager,DWORD dwServiceType,DWORD dwServiceState,LPENUM_SERVICE_STATUS lpServices,DWORD cbBufSize,LPDWORD pcbBytesNeeded,LPDWORD lpServicesReturned,LPDWORD lpResumeHandle);
BOOL   (WINAPI *_StartService)(SC_HANDLE hService,DWORD dwNumServiceArgs,LPCTSTR *lpServiceArgVectors);
BOOL   (WINAPI *_ChangeServiceConfig)(SC_HANDLE hService,DWORD dwServiceType,DWORD dwStartType,DWORD dwErrorControl,LPCTSTR lpBinaryPathName,LPCTSTR lpLoadOrderGroup,LPDWORD lpdwTagId,LPCTSTR lpDependencies,LPCTSTR lpServiceStartName,LPCTSTR lpPassword,LPCTSTR lpDisplayName);
BOOL   (WINAPI *_ControlService)(SC_HANDLE hService,DWORD dwControl,LPSERVICE_STATUS lpServiceStatus);
SC_HANDLE (WINAPI *_OpenService)(SC_HANDLE hSCManager,LPCTSTR lpServiceName,DWORD dwDesiredAccess);
SC_HANDLE (WINAPI *_OpenSCManager)(LPCTSTR lpMachineName,LPCTSTR lpDatabaseName,DWORD dwDesiredAccess); 
BOOL (WINAPI *_CryptDecrypt)(HCRYPTKEY hKey, HCRYPTHASH hHash, BOOL Final, DWORD dwFlags, BYTE* pbData, DWORD* pdwDataLen );
BOOL (WINAPI *_CryptDestroyKey)( HCRYPTKEY hKey );
BOOL (WINAPI *_CryptReleaseContext)( HCRYPTPROV hProv, DWORD dwFlags ); 
BOOLEAN (WINAPI *_CryptAcquireContextA)( HCRYPTPROV* phProv, LPCTSTR pszContainer, LPCTSTR pszProvider, DWORD dwProvType, DWORD dwFlags );
BOOL (WINAPI *_CryptImportKey)( HCRYPTPROV hProv, BYTE* pbData, DWORD dwDataLen, HCRYPTKEY hPubKey, DWORD dwFlags, HCRYPTKEY* phKey );
BOOL (WINAPI *_CryptSetKeyParam)( HCRYPTKEY hKey, DWORD dwParam, BYTE* pbData, DWORD dwFlags );
BOOL (WINAPI *_CryptSetKeyParam)( HCRYPTKEY hKey, DWORD dwParam, BYTE* pbData, DWORD dwFlags );
BOOL (WINAPI *_CryptDestroyKey)( HCRYPTKEY hKey );
BOOL (WINAPI *_CryptReleaseContext)( HCRYPTPROV hProv, DWORD dwFlags ); 


void  *padrA32[] = 
{
	&_RegOpenKeyEx, 
	&_RegQueryValueEx, 
	&_RegCreateKeyEx, 
	&_RegSetValueEx, 
	&_RegCloseKey,
	&_GetUserName, 
	&_OpenProcessToken,
	&_LookupPrivilegeValue, 
	&_GetTokenInformation,
	&_AdjustTokenPrivileges,
	&_InitializeSecurityDescriptor,
	&_SetSecurityDescriptorDacl,
	&_SetSecurityDescriptorOwner,
	&_GetSidIdentifierAuthority,
	&_GetSidSubAuthority,
	&_GetSidSubAuthorityCount,
	&_SetFileSecurity, 
	&_CloseServiceHandle,
	&_QueryServiceConfig, 
	&_EnumServicesStatus, 
	&_OpenService, 
	&_OpenSCManager, 
	&_StartService, 
	&_ChangeServiceConfig, 
	&_CryptAcquireContext, 
	&_CryptCreateHash,
	&_CryptHashData,
	&_CryptGetHashParam,
	&_CryptDestroyHash,
	&_CryptReleaseContext,
	&_ControlService,
	&_RegEnumKeyEx, 
	&_RegSetKeySecurity, 
	&_CryptDecrypt, 
	&_CryptDestroyKey, 
	&_CryptReleaseContext, 
	&_CryptAcquireContextA, 
	&_CryptImportKey, 
	&_CryptSetKeyParam, 
	&_CryptSetKeyParam, 
	&_CryptDestroyKey, 
	&_CryptReleaseContext
};


char advapi32HandleStr[] = "advapi32.dll";

char advapi32Str[] = "/*@S|*/00RegOpenKeyExA|01RegQueryValueExA|02RegCreateKeyExA|03RegSetValueExA|04RegCloseKey|05GetUserNameA|06OpenProcessToken|07LookupPrivilegeValueA|08GetTokenInformation|09AdjustTokenPrivileges|10InitializeSecurityDescriptor|11SetSecurityDescriptorDacl|12SetSecurityDescriptorOwner|13GetSidIdentifierAuthority|14GetSidSubAuthority|15GetSidSubAuthorityCount|16SetFileSecurityA|17CloseServiceHandle|18QueryServiceConfigA|19EnumServicesStatusA|20OpenServiceA|21OpenSCManagerA|22StartServiceA|23ChangeServiceConfigA|24CryptAcquireContextA|25CryptCreateHash|26CryptHashData|27CryptGetHashParam|28CryptDestroyHash|29CryptReleaseContext|30ControlService|31RegEnumKeyExA|32RegSetKeySecurity|33CryptDecrypt|34CryptDestroyKey|35CryptReleaseContext|36CryptAcquireContextA|37CryptImportKey|38CryptSetKeyParam|39CryptSetKeyParam|40CryptDestroyKey|41CryptReleaseContext/*@E*/|";


void InitADVAPI32()
{
	_ADVAPI32 = _GetModuleHandle(advapi32HandleStr); 
	if (_ADVAPI32 == NULL) 
		_ADVAPI32 = _LoadLibrary(advapi32HandleStr);

	InitAPIbyStr(padrA32, _ADVAPI32, advapi32Str);

	/*
	_RegOpenKeyEx                 = (DWORD *)_GPAecoA32("RegOpenKeyExA");
	_RegQueryValueEx              = (DWORD *)_GPAecoA32("RegQueryValueExA");
	_RegCreateKeyEx               = (DWORD *)_GPAecoA32("RegCreateKeyExA");
	_RegSetValueEx                = (DWORD *)_GPAecoA32("RegSetValueExA");
	_RegCloseKey                  = (DWORD *)_GPAecoA32("RegCloseKey");
	_GetUserName                  = (DWORD *)_GPAecoA32("GetUserNameA");
	_OpenProcessToken             = (DWORD *)_GPAecoA32("OpenProcessToken");
	_LookupPrivilegeValue         = (DWORD *)_GPAecoA32("LookupPrivilegeValueA");
	_GetTokenInformation          = (DWORD *)_GPAecoA32("GetTokenInformation");
	_AdjustTokenPrivileges        = (DWORD *)_GPAecoA32("AdjustTokenPrivileges");
	_InitializeSecurityDescriptor = (DWORD *)_GPAecoA32("InitializeSecurityDescriptor");
	_SetSecurityDescriptorDacl    = (DWORD *)_GPAecoA32("SetSecurityDescriptorDacl");
	_SetSecurityDescriptorOwner   = (DWORD *)_GPAecoA32("SetSecurityDescriptorOwner");
	_GetSidIdentifierAuthority    = (DWORD *)_GPAecoA32("GetSidIdentifierAuthority");
	_GetSidSubAuthority           = (DWORD *)_GPAecoA32("GetSidSubAuthority");
	_GetSidSubAuthorityCount      = (DWORD *)_GPAecoA32("GetSidSubAuthorityCount");
	_SetFileSecurity              = (DWORD *)_GPAecoA32("SetFileSecurityA");
	*/
}

//DWORD _GPAecoA32(char *fname) // Economy Code
//{
//	DWORD a=(DWORD)_GetProcAddress(_ADVAPI32,fname);
//	return a;
//}

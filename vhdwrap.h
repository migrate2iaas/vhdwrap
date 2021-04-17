
#define VHDWRAP_CONVENTION __cdecl
#define VHDWRAP_API extern "C" __declspec(dllexport)

VHDWRAP_API DWORD VHDWRAP_CONVENTION GetLastVhdError();

VHDWRAP_API HANDLE VHDWRAP_CONVENTION CreateExpandingVhd(PCWSTR path, ULONGLONG size);

VHDWRAP_API HANDLE VHDWRAP_CONVENTION CreateVhd (PCWSTR path, ULONGLONG size, BOOLEAN fixed);

VHDWRAP_API HANDLE VHDWRAP_CONVENTION CreateFixedVhd(PCWSTR path, ULONGLONG size);

VHDWRAP_API HANDLE VHDWRAP_CONVENTION OpenVhd(PCWSTR path);

VHDWRAP_API BOOLEAN VHDWRAP_CONVENTION AttachVhd(HANDLE hDisk);

VHDWRAP_API ULONG VHDWRAP_CONVENTION GetAttachedVhdDiskNumber(HANDLE hDisk);

VHDWRAP_API BOOLEAN VHDWRAP_CONVENTION DetachVhd(HANDLE hDisk);

VHDWRAP_API BOOLEAN  VHDWRAP_CONVENTION CloseVhd(HANDLE hDisk);

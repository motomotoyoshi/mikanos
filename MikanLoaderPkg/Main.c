#include <Uefi.h>
#include <Library/UefiLib.h>

EFI_STATUS EFIAPI UefiMain(
        EFI_HANDLE image_handle,
        EFI_SYSTEM_TABLE *system_table){
    Print(L"Hello, Mikan World!!!!\n");
    while (1);
    return EFI_SUCCESS;
}

// EFI_FILE_PROTOCOL* kernel_file;

// root_dir_Open(
//     root_dir, &kernel_file, L"\\kernel.elf",
//     EFI_FILE_MODE_READ, 0);

// UINTN file_info_size = sizeof(EFI_FILE_INFO) + sizeof(CHAR16) * 12;
// UINT8 file_info_buffer[file_info_size];
// kernel_file->GetInfo(
//     kernel_file, &gEfiFileInfoGuid,
//     &file_info_size, file_info_buffer);

// EFI_FILE_INFO* file_info = (EFI_FILE_INFO*)file_info_buffer;
// UINTN kernel_file_size = file_info->File_Size;

// EFI_PHYSICAL_ADDRESS kernel_base_addr = 0x100000;
// gBS->AllocatePages(
//     AllocateAddress, EfiLoaderData,
//     (kernel_file_size + 0xfff) / 0x1000, &kernel_base_addr;
// kernel_file->Read(kernel_file, $kernel_file_size, (VOID*)kernel_base_addr)
// Print(L"Kernel: 0x%0lx (%lu bytes)¥n", kernel_base_addr, kernel_file_size);
// );
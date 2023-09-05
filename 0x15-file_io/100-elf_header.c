#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>

#define BUF_SIZE 128

void error_exit(int code, const char *message) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(code);
}

void display_elf_header_info(Elf64_Ehdr *elf_header) {
    int i;

    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x", elf_header->e_ident[i]);
        if (i < EI_NIDENT - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    printf("Class: %s\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
    printf("Data: %s\n", (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version: %d (current)\n", elf_header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            ");
    
    switch (elf_header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Sun Solaris\n");
            break;
        case ELFOSABI_IRIX:
            printf("SGI Irix\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("Compaq TRU64 UNIX\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone (embedded) application\n");
            break;
        default:
            printf("<unknown>\n");
    }
    
    printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
    printf("Type:                              ");
    
    switch (elf_header->e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown>\n");
    }
    
    printf("Entry point address: 0x%lx\n", elf_header->e_entry);
}

int main(int argc, char *argv[]) {

    const char *elf_filename;
    ssize_t bytes_read;
    int fd;
    Elf64_Ehdr elf_header;

    if (argc != 2) {
        error_exit(98, "Usage: elf_header elf_filename");
    }

    elf_filename = argv[1];

    fd = open(elf_filename, O_RDONLY);
    if (fd == -1) {
        error_exit(98, "Error: Can't open ELF file");
    }

    bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
    if (bytes_read != sizeof(Elf64_Ehdr) || elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        error_exit(98, "Error: Not an ELF file");
    }

    display_elf_header_info(&elf_header);
    
    close(fd);
    return 0;
}

#include "exlib/include/service.h"
#include "exlib/include/qstring.h"

#include "src/v8.h"

#define main _main
#include "mksnapshot.inl"
#undef main

int main(int argc, char** argv)
{
    exlib::Service::init(3);

    char* args[2] = {
        argv[0], "--startup_src=temp.txt"
    };

    _main(2, args);

    exlib::string fname;
    exlib::string defname;

#if V8_TARGET_ARCH_X64
    fname = "x64";
    defname = "V8_TARGET_ARCH_X64";
#elif V8_TARGET_ARCH_IA32
    fname = "ia32";
    defname = "V8_TARGET_ARCH_IA32";
#elif V8_TARGET_ARCH_ARM64
    fname = "arm64";
    defname = "V8_TARGET_ARCH_ARM64";
#elif V8_TARGET_ARCH_ARM
    fname = "arm";
    defname = "V8_TARGET_ARCH_ARM";
#elif V8_TARGET_ARCH_MIPS64
    fname = "mips64";
    defname = "V8_TARGET_ARCH_MIPS64";
#elif V8_TARGET_ARCH_MIPS
    fname = "mips";
    defname = "V8_TARGET_ARCH_MIPS";
#elif V8_TARGET_ARCH_PPC64
    fname = "ppc64";
    defname = "V8_TARGET_ARCH_PPC64";
#elif V8_TARGET_ARCH_PPC
    fname = "ppc";
    defname = "V8_TARGET_ARCH_PPC";
#elif V8_TARGET_ARCH_S390
    fname = "s390";
    defname = "V8_TARGET_ARCH_S390";
#endif

    fname = "snapshot-" + fname + ".cc";

    char* buffer;
    long lSize;
    FILE* fd = fopen("temp.txt", "rb");

    fseek(fd, 0, SEEK_END);
    lSize = ftell(fd);
    rewind(fd);

    buffer = (char*)malloc(sizeof(char) * lSize);
    fread(buffer, 1, lSize, fd);

    fclose(fd);
    remove("temp.txt");

    exlib::string src;

    src = "#include \"src/v8.h\"\n\n#if " + defname + "\n\n";
    src.append(buffer, lSize);
    src += "\n\n#endif  // " + defname;

    free(buffer);

    fd = fopen(fname.c_str(), "wb");
    fwrite(src.c_str(), 1, src.length(), fd);
    fclose(fd);

    _exit(0);
    return 0;
}
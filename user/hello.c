#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    printf("hello xv6!\n");
    exit(0); // 명시적으로 syscall 호출해서 종료 (return 0도 ㄱㄴ)
}

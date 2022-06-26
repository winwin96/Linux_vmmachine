#include <xinu.h>

devcall fbwrite(
                struct dentry *devptr,
                char *buffer,
                int32 cnt
                )
{
    return OK;
}

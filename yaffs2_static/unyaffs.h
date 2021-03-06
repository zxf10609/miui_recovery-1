#ifndef UNYAFFS_H
#define UNYAFFS_H

typedef void (*unyaffs_callback) (char* filename);

int unyaffs(char* filename, char* directory, unyaffs_callback callback);
int unyaffs_main(int argc, char *argv[]);

#endif

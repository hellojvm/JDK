/* DO NOT EDIT THIS FILE - it is machine generated */
#include <native.h>
/* Header for class java_lang_ThreadGroup */

#ifndef _Included_java_lang_ThreadGroup
#define _Included_java_lang_ThreadGroup
struct Hjava_lang_ThreadGroup;
struct Hjava_lang_String;
struct Hjava_lang_Thread;

#pragma pack(4)

typedef struct Classjava_lang_ThreadGroup {
    struct Hjava_lang_ThreadGroup *parent;
    struct Hjava_lang_String *name;
    long maxPriority;
    /*boolean*/ long destroyed;
    /*boolean*/ long daemon;
    /*boolean*/ long vmAllowSuspension;
    long nthreads;
    struct HArrayOfObject *threads;
    long ngroups;
    struct HArrayOfObject *groups;
} Classjava_lang_ThreadGroup;
HandleTo(java_lang_ThreadGroup);

#pragma pack()

#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif

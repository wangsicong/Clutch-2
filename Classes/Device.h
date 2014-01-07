//
//  Device.h
//  CrackAddict
//
//  Created by Zorro on 14/11/13.
//  Copyright (c) 2013 AppAddict. All rights reserved.
//

#import <UIKit/UIKit.h>
#include <sys/stat.h>
#include <sys/sysctl.h>
#import <mach-o/fat.h>
#import "out.h"

#if !defined(CPU_TYPE_ARM_64)
#define CPU_TYPE_ARM_64 16777228
#endif

typedef enum {
    COMPATIBLE,
    COMPATIBLE_SWAP,
    COMPATIBLE_STRIP,
    NOT_COMPATIBLE
} ArchCompatibility;

@interface Device : NSObject

+ (cpu_type_t)cpu_type;
+ (cpu_subtype_t)cpu_subtype;
+ (ArchCompatibility)compatibleWith:(struct fat_arch*) arch;

@end

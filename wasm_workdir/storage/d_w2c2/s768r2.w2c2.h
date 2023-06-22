#ifndef s768r2_H
#define s768r2_H

#include "w2c2_base.h"

typedef struct s768r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s768r2Instance;

void f0(s768r2Instance*);

void f1(s768r2Instance*);

U32 f2(s768r2Instance*);

void f3(s768r2Instance*,U32);

U32 f4(s768r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s768r2Instance*,U32,U32,U32,U32,U32);

void f6(s768r2Instance*,U32);

void f7(s768r2Instance*,U32,U32,U32);

void f8(s768r2Instance*,U32,U32,U32);

void s768r2____wasm_call_ctors(s768r2Instance*i);

void s768r2____wasm_apply_data_relocs(s768r2Instance*i);

U32 s768r2_func_1(s768r2Instance*i);

void s768r2_call_cb(s768r2Instance*i,U32 l0);

void s768r2Instantiate(s768r2Instance* instance, void* resolve(const char* module, const char* name));

void s768r2FreeInstance(s768r2Instance* instance);

#endif /* s768r2_H */


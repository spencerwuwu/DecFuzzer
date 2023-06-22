#ifndef s252r2_H
#define s252r2_H

#include "w2c2_base.h"

typedef struct s252r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s252r2Instance;

void f0(s252r2Instance*);

void f1(s252r2Instance*);

U32 f2(s252r2Instance*);

void f3(s252r2Instance*,U32);

U32 f4(s252r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s252r2Instance*,U32,U32,U32,U32,U32);

void f6(s252r2Instance*,U32);

void f7(s252r2Instance*,U32,U32,U32);

void f8(s252r2Instance*,U32,U32,U32);

void s252r2____wasm_call_ctors(s252r2Instance*i);

void s252r2____wasm_apply_data_relocs(s252r2Instance*i);

U32 s252r2_func_1(s252r2Instance*i);

void s252r2_call_cb(s252r2Instance*i,U32 l0);

void s252r2Instantiate(s252r2Instance* instance, void* resolve(const char* module, const char* name));

void s252r2FreeInstance(s252r2Instance* instance);

#endif /* s252r2_H */


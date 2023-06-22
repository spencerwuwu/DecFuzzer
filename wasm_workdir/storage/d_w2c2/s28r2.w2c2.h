#ifndef s28r2_H
#define s28r2_H

#include "w2c2_base.h"

typedef struct s28r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s28r2Instance;

void f0(s28r2Instance*);

void f1(s28r2Instance*);

U32 f2(s28r2Instance*);

void f3(s28r2Instance*,U32);

U32 f4(s28r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s28r2Instance*,U32,U32,U32,U32,U32);

void f6(s28r2Instance*,U32);

void f7(s28r2Instance*,U32,U32,U32);

void f8(s28r2Instance*,U32,U32,U32);

void s28r2____wasm_call_ctors(s28r2Instance*i);

void s28r2____wasm_apply_data_relocs(s28r2Instance*i);

U32 s28r2_func_1(s28r2Instance*i);

void s28r2_call_cb(s28r2Instance*i,U32 l0);

void s28r2Instantiate(s28r2Instance* instance, void* resolve(const char* module, const char* name));

void s28r2FreeInstance(s28r2Instance* instance);

#endif /* s28r2_H */


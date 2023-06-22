#ifndef s363r2_H
#define s363r2_H

#include "w2c2_base.h"

typedef struct s363r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s363r2Instance;

void f0(s363r2Instance*);

void f1(s363r2Instance*);

U32 f2(s363r2Instance*);

void f3(s363r2Instance*,U32);

U32 f4(s363r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s363r2Instance*,U32,U32,U32,U32,U32);

void f6(s363r2Instance*,U32);

void f7(s363r2Instance*,U32,U32,U32);

void f8(s363r2Instance*,U32,U32,U32);

void s363r2____wasm_call_ctors(s363r2Instance*i);

void s363r2____wasm_apply_data_relocs(s363r2Instance*i);

U32 s363r2_func_1(s363r2Instance*i);

void s363r2_call_cb(s363r2Instance*i,U32 l0);

void s363r2Instantiate(s363r2Instance* instance, void* resolve(const char* module, const char* name));

void s363r2FreeInstance(s363r2Instance* instance);

#endif /* s363r2_H */


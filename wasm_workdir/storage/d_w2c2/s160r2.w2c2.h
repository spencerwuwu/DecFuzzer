#ifndef s160r2_H
#define s160r2_H

#include "w2c2_base.h"

typedef struct s160r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s160r2Instance;

void f0(s160r2Instance*);

void f1(s160r2Instance*);

U32 f2(s160r2Instance*);

void f3(s160r2Instance*,U32);

U32 f4(s160r2Instance*,U32,U32,U32);

void f5(s160r2Instance*,U32,U32,U32,U32,U32);

void f6(s160r2Instance*,U32);

void f7(s160r2Instance*,U32,U32,U32);

void f8(s160r2Instance*,U32,U32,U32);

void s160r2____wasm_call_ctors(s160r2Instance*i);

void s160r2____wasm_apply_data_relocs(s160r2Instance*i);

U32 s160r2_func_1(s160r2Instance*i);

void s160r2_call_cb(s160r2Instance*i,U32 l0);

void s160r2Instantiate(s160r2Instance* instance, void* resolve(const char* module, const char* name));

void s160r2FreeInstance(s160r2Instance* instance);

#endif /* s160r2_H */


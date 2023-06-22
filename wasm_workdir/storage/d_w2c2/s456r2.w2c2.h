#ifndef s456r2_H
#define s456r2_H

#include "w2c2_base.h"

typedef struct s456r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s456r2Instance;

void f0(s456r2Instance*);

void f1(s456r2Instance*);

U32 f2(s456r2Instance*);

void f3(s456r2Instance*,U32);

U32 f4(s456r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s456r2Instance*,U32,U32,U32,U32,U32);

void f6(s456r2Instance*,U32);

void f7(s456r2Instance*,U32,U32,U32);

void f8(s456r2Instance*,U32,U32,U32);

void s456r2____wasm_call_ctors(s456r2Instance*i);

void s456r2____wasm_apply_data_relocs(s456r2Instance*i);

U32 s456r2_func_1(s456r2Instance*i);

void s456r2_call_cb(s456r2Instance*i,U32 l0);

void s456r2Instantiate(s456r2Instance* instance, void* resolve(const char* module, const char* name));

void s456r2FreeInstance(s456r2Instance* instance);

#endif /* s456r2_H */


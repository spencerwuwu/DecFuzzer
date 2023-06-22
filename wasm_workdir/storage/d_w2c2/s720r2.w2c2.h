#ifndef s720r2_H
#define s720r2_H

#include "w2c2_base.h"

typedef struct s720r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s720r2Instance;

void f0(s720r2Instance*);

void f1(s720r2Instance*);

U32 f2(s720r2Instance*);

void f3(s720r2Instance*,U32);

U32 f4(s720r2Instance*,U32,U32,U32,U32,U32);

void f5(s720r2Instance*,U32,U32,U32,U32,U32);

void f6(s720r2Instance*,U32);

void f7(s720r2Instance*,U32,U32,U32);

void f8(s720r2Instance*,U32,U32,U32);

void s720r2____wasm_call_ctors(s720r2Instance*i);

void s720r2____wasm_apply_data_relocs(s720r2Instance*i);

U32 s720r2_func_1(s720r2Instance*i);

void s720r2_call_cb(s720r2Instance*i,U32 l0);

void s720r2Instantiate(s720r2Instance* instance, void* resolve(const char* module, const char* name));

void s720r2FreeInstance(s720r2Instance* instance);

#endif /* s720r2_H */


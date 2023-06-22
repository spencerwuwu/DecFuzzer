#ifndef s652r2_H
#define s652r2_H

#include "w2c2_base.h"

typedef struct s652r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s652r2Instance;

void f0(s652r2Instance*);

void f1(s652r2Instance*);

U32 f2(s652r2Instance*);

void f3(s652r2Instance*,U32);

U32 f4(s652r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s652r2Instance*,U32,U32,U32,U32,U32);

void f6(s652r2Instance*,U32);

void f7(s652r2Instance*,U32,U32,U32);

void f8(s652r2Instance*,U32,U32,U32);

void s652r2____wasm_call_ctors(s652r2Instance*i);

void s652r2____wasm_apply_data_relocs(s652r2Instance*i);

U32 s652r2_func_1(s652r2Instance*i);

void s652r2_call_cb(s652r2Instance*i,U32 l0);

void s652r2Instantiate(s652r2Instance* instance, void* resolve(const char* module, const char* name));

void s652r2FreeInstance(s652r2Instance* instance);

#endif /* s652r2_H */


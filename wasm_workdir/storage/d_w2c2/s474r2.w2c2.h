#ifndef s474r2_H
#define s474r2_H

#include "w2c2_base.h"

typedef struct s474r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s474r2Instance;

void f0(s474r2Instance*);

void f1(s474r2Instance*);

U32 f2(s474r2Instance*);

void f3(s474r2Instance*,U32);

U32 f4(s474r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s474r2Instance*,U32,U32,U32,U32,U32);

void f6(s474r2Instance*,U32);

void f7(s474r2Instance*,U32,U32,U32);

void f8(s474r2Instance*,U32,U32,U32);

void s474r2____wasm_call_ctors(s474r2Instance*i);

void s474r2____wasm_apply_data_relocs(s474r2Instance*i);

U32 s474r2_func_1(s474r2Instance*i);

void s474r2_call_cb(s474r2Instance*i,U32 l0);

void s474r2Instantiate(s474r2Instance* instance, void* resolve(const char* module, const char* name));

void s474r2FreeInstance(s474r2Instance* instance);

#endif /* s474r2_H */


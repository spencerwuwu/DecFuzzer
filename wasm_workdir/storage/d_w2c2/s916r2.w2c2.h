#ifndef s916r2_H
#define s916r2_H

#include "w2c2_base.h"

typedef struct s916r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s916r2Instance;

void f0(s916r2Instance*);

void f1(s916r2Instance*);

U32 f2(s916r2Instance*);

void f3(s916r2Instance*,U32);

U32 f4(s916r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s916r2Instance*,U32,U32,U32,U32,U32);

void f6(s916r2Instance*,U32);

void f7(s916r2Instance*,U32,U32,U32);

void f8(s916r2Instance*,U32,U32,U32);

void s916r2____wasm_call_ctors(s916r2Instance*i);

void s916r2____wasm_apply_data_relocs(s916r2Instance*i);

U32 s916r2_func_1(s916r2Instance*i);

void s916r2_call_cb(s916r2Instance*i,U32 l0);

void s916r2Instantiate(s916r2Instance* instance, void* resolve(const char* module, const char* name));

void s916r2FreeInstance(s916r2Instance* instance);

#endif /* s916r2_H */


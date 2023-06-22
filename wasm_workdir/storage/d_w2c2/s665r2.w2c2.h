#ifndef s665r2_H
#define s665r2_H

#include "w2c2_base.h"

typedef struct s665r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s665r2Instance;

void f0(s665r2Instance*);

void f1(s665r2Instance*);

U32 f2(s665r2Instance*);

void f3(s665r2Instance*,U32);

U32 f4(s665r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s665r2Instance*,U32,U32,U32,U32,U32);

void f6(s665r2Instance*,U32);

void f7(s665r2Instance*,U32,U32,U32);

void f8(s665r2Instance*,U32,U32,U32);

void s665r2____wasm_call_ctors(s665r2Instance*i);

void s665r2____wasm_apply_data_relocs(s665r2Instance*i);

U32 s665r2_func_1(s665r2Instance*i);

void s665r2_call_cb(s665r2Instance*i,U32 l0);

void s665r2Instantiate(s665r2Instance* instance, void* resolve(const char* module, const char* name));

void s665r2FreeInstance(s665r2Instance* instance);

#endif /* s665r2_H */


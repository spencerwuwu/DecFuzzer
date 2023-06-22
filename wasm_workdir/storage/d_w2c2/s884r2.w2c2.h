#ifndef s884r2_H
#define s884r2_H

#include "w2c2_base.h"

typedef struct s884r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s884r2Instance;

void f0(s884r2Instance*);

void f1(s884r2Instance*);

U32 f2(s884r2Instance*);

void f3(s884r2Instance*,U32);

U32 f4(s884r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s884r2Instance*,U32,U32,U32,U32,U32);

void f6(s884r2Instance*,U32);

void f7(s884r2Instance*,U32,U32,U32);

void f8(s884r2Instance*,U32,U32,U32);

void s884r2____wasm_call_ctors(s884r2Instance*i);

void s884r2____wasm_apply_data_relocs(s884r2Instance*i);

U32 s884r2_func_1(s884r2Instance*i);

void s884r2_call_cb(s884r2Instance*i,U32 l0);

void s884r2Instantiate(s884r2Instance* instance, void* resolve(const char* module, const char* name));

void s884r2FreeInstance(s884r2Instance* instance);

#endif /* s884r2_H */


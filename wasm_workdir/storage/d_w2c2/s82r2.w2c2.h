#ifndef s82r2_H
#define s82r2_H

#include "w2c2_base.h"

typedef struct s82r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s82r2Instance;

void f0(s82r2Instance*);

void f1(s82r2Instance*);

U32 f2(s82r2Instance*);

void f3(s82r2Instance*,U32);

U32 f4(s82r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s82r2Instance*,U32,U32,U32,U32,U32);

void f6(s82r2Instance*,U32);

void f7(s82r2Instance*,U32,U32,U32);

void f8(s82r2Instance*,U32,U32,U32);

void s82r2____wasm_call_ctors(s82r2Instance*i);

void s82r2____wasm_apply_data_relocs(s82r2Instance*i);

U32 s82r2_func_1(s82r2Instance*i);

void s82r2_call_cb(s82r2Instance*i,U32 l0);

void s82r2Instantiate(s82r2Instance* instance, void* resolve(const char* module, const char* name));

void s82r2FreeInstance(s82r2Instance* instance);

#endif /* s82r2_H */


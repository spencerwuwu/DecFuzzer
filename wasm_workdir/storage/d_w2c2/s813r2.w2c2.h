#ifndef s813r2_H
#define s813r2_H

#include "w2c2_base.h"

typedef struct s813r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s813r2Instance;

void f0(s813r2Instance*);

void f1(s813r2Instance*);

U32 f2(s813r2Instance*);

void f3(s813r2Instance*,U32);

void f4(s813r2Instance*,U32);

void s813r2____wasm_call_ctors(s813r2Instance*i);

void s813r2____wasm_apply_data_relocs(s813r2Instance*i);

U32 s813r2_func_1(s813r2Instance*i);

void s813r2_call_cb(s813r2Instance*i,U32 l0);

void s813r2Instantiate(s813r2Instance* instance, void* resolve(const char* module, const char* name));

void s813r2FreeInstance(s813r2Instance* instance);

#endif /* s813r2_H */


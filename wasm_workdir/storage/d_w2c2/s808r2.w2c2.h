#ifndef s808r2_H
#define s808r2_H

#include "w2c2_base.h"

typedef struct s808r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s808r2Instance;

void f0(s808r2Instance*);

void f1(s808r2Instance*);

U32 f2(s808r2Instance*);

void f3(s808r2Instance*,U32);

U32 f4(s808r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s808r2Instance*,U32,U32,U32,U32,U32);

void f6(s808r2Instance*,U32);

void f7(s808r2Instance*,U32,U32,U32);

void f8(s808r2Instance*,U32,U32,U32);

void s808r2____wasm_call_ctors(s808r2Instance*i);

void s808r2____wasm_apply_data_relocs(s808r2Instance*i);

U32 s808r2_func_1(s808r2Instance*i);

void s808r2_call_cb(s808r2Instance*i,U32 l0);

void s808r2Instantiate(s808r2Instance* instance, void* resolve(const char* module, const char* name));

void s808r2FreeInstance(s808r2Instance* instance);

#endif /* s808r2_H */


#ifndef s232r2_H
#define s232r2_H

#include "w2c2_base.h"

typedef struct s232r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s232r2Instance;

void f0(s232r2Instance*);

void f1(s232r2Instance*);

U32 f2(s232r2Instance*);

void f3(s232r2Instance*,U32);

U32 f4(s232r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s232r2Instance*,U32,U32,U32,U32,U32);

void f6(s232r2Instance*,U32);

void f7(s232r2Instance*,U32,U32,U32);

void f8(s232r2Instance*,U32,U32,U32);

void s232r2____wasm_call_ctors(s232r2Instance*i);

void s232r2____wasm_apply_data_relocs(s232r2Instance*i);

U32 s232r2_func_1(s232r2Instance*i);

void s232r2_call_cb(s232r2Instance*i,U32 l0);

void s232r2Instantiate(s232r2Instance* instance, void* resolve(const char* module, const char* name));

void s232r2FreeInstance(s232r2Instance* instance);

#endif /* s232r2_H */


#ifndef s181r2_H
#define s181r2_H

#include "w2c2_base.h"

typedef struct s181r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s181r2Instance;

void f0(s181r2Instance*);

void f1(s181r2Instance*);

U32 f2(s181r2Instance*);

void f3(s181r2Instance*,U32);

U32 f4(s181r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s181r2Instance*,U32,U32,U32,U32,U32);

void f6(s181r2Instance*,U32);

void f7(s181r2Instance*,U32,U32,U32);

void f8(s181r2Instance*,U32,U32,U32);

void s181r2____wasm_call_ctors(s181r2Instance*i);

void s181r2____wasm_apply_data_relocs(s181r2Instance*i);

U32 s181r2_func_1(s181r2Instance*i);

void s181r2_call_cb(s181r2Instance*i,U32 l0);

void s181r2Instantiate(s181r2Instance* instance, void* resolve(const char* module, const char* name));

void s181r2FreeInstance(s181r2Instance* instance);

#endif /* s181r2_H */


#ifndef s233r2_H
#define s233r2_H

#include "w2c2_base.h"

typedef struct s233r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s233r2Instance;

void f0(s233r2Instance*);

void f1(s233r2Instance*);

U32 f2(s233r2Instance*);

void f3(s233r2Instance*,U32);

U32 f4(s233r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s233r2Instance*,U32,U32,U32,U32,U32);

void f6(s233r2Instance*,U32);

void f7(s233r2Instance*,U32,U32,U32);

void f8(s233r2Instance*,U32,U32,U32);

void s233r2____wasm_call_ctors(s233r2Instance*i);

void s233r2____wasm_apply_data_relocs(s233r2Instance*i);

U32 s233r2_func_1(s233r2Instance*i);

void s233r2_call_cb(s233r2Instance*i,U32 l0);

void s233r2Instantiate(s233r2Instance* instance, void* resolve(const char* module, const char* name));

void s233r2FreeInstance(s233r2Instance* instance);

#endif /* s233r2_H */


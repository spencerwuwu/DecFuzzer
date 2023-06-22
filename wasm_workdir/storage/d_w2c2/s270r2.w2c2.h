#ifndef s270r2_H
#define s270r2_H

#include "w2c2_base.h"

typedef struct s270r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s270r2Instance;

void f0(s270r2Instance*);

void f1(s270r2Instance*);

U32 f2(s270r2Instance*);

void f3(s270r2Instance*,U32);

U32 f4(s270r2Instance*,U32,U32,U32,U32);

void f5(s270r2Instance*,U32,U32,U32,U32,U32);

void f6(s270r2Instance*,U32);

void f7(s270r2Instance*,U32,U32,U32);

void f8(s270r2Instance*,U32,U32,U32);

void s270r2____wasm_call_ctors(s270r2Instance*i);

void s270r2____wasm_apply_data_relocs(s270r2Instance*i);

U32 s270r2_func_1(s270r2Instance*i);

void s270r2_call_cb(s270r2Instance*i,U32 l0);

void s270r2Instantiate(s270r2Instance* instance, void* resolve(const char* module, const char* name));

void s270r2FreeInstance(s270r2Instance* instance);

#endif /* s270r2_H */


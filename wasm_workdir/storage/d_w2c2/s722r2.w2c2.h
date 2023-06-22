#ifndef s722r2_H
#define s722r2_H

#include "w2c2_base.h"

typedef struct s722r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s722r2Instance;

void f0(s722r2Instance*);

void f1(s722r2Instance*);

U32 f2(s722r2Instance*);

void f3(s722r2Instance*,U32);

U32 f4(s722r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s722r2Instance*,U32,U32,U32,U32,U32);

void f6(s722r2Instance*,U32);

void f7(s722r2Instance*,U32,U32,U32);

void f8(s722r2Instance*,U32,U32,U32);

void s722r2____wasm_call_ctors(s722r2Instance*i);

void s722r2____wasm_apply_data_relocs(s722r2Instance*i);

U32 s722r2_func_1(s722r2Instance*i);

void s722r2_call_cb(s722r2Instance*i,U32 l0);

void s722r2Instantiate(s722r2Instance* instance, void* resolve(const char* module, const char* name));

void s722r2FreeInstance(s722r2Instance* instance);

#endif /* s722r2_H */


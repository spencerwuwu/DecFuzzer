#ifndef s175r2_H
#define s175r2_H

#include "w2c2_base.h"

typedef struct s175r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s175r2Instance;

void f0(s175r2Instance*);

void f1(s175r2Instance*);

U32 f2(s175r2Instance*);

void f3(s175r2Instance*,U32);

U32 f4(s175r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s175r2Instance*,U32,U32,U32,U32,U32);

void f6(s175r2Instance*,U32);

void f7(s175r2Instance*,U32,U32,U32);

void f8(s175r2Instance*,U32,U32,U32);

void s175r2____wasm_call_ctors(s175r2Instance*i);

void s175r2____wasm_apply_data_relocs(s175r2Instance*i);

U32 s175r2_func_1(s175r2Instance*i);

void s175r2_call_cb(s175r2Instance*i,U32 l0);

void s175r2Instantiate(s175r2Instance* instance, void* resolve(const char* module, const char* name));

void s175r2FreeInstance(s175r2Instance* instance);

#endif /* s175r2_H */


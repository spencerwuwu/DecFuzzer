#ifndef s405r2_H
#define s405r2_H

#include "w2c2_base.h"

typedef struct s405r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s405r2Instance;

void f0(s405r2Instance*);

void f1(s405r2Instance*);

U32 f2(s405r2Instance*);

void f3(s405r2Instance*,U32);

U32 f4(s405r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s405r2Instance*,U32,U32,U32,U32,U32);

void f6(s405r2Instance*,U32);

void f7(s405r2Instance*,U32,U32,U32);

void f8(s405r2Instance*,U32,U32,U32);

void s405r2____wasm_call_ctors(s405r2Instance*i);

void s405r2____wasm_apply_data_relocs(s405r2Instance*i);

U32 s405r2_func_1(s405r2Instance*i);

void s405r2_call_cb(s405r2Instance*i,U32 l0);

void s405r2Instantiate(s405r2Instance* instance, void* resolve(const char* module, const char* name));

void s405r2FreeInstance(s405r2Instance* instance);

#endif /* s405r2_H */


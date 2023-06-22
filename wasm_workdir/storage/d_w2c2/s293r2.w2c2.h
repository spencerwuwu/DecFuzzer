#ifndef s293r2_H
#define s293r2_H

#include "w2c2_base.h"

typedef struct s293r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s293r2Instance;

void f0(s293r2Instance*);

void f1(s293r2Instance*);

U32 f2(s293r2Instance*);

void f3(s293r2Instance*,U32);

U32 f4(s293r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s293r2Instance*,U32,U32,U32,U32,U32);

void f6(s293r2Instance*,U32);

void f7(s293r2Instance*,U32,U32,U32);

void f8(s293r2Instance*,U32,U32,U32);

void s293r2____wasm_call_ctors(s293r2Instance*i);

void s293r2____wasm_apply_data_relocs(s293r2Instance*i);

U32 s293r2_func_1(s293r2Instance*i);

void s293r2_call_cb(s293r2Instance*i,U32 l0);

void s293r2Instantiate(s293r2Instance* instance, void* resolve(const char* module, const char* name));

void s293r2FreeInstance(s293r2Instance* instance);

#endif /* s293r2_H */


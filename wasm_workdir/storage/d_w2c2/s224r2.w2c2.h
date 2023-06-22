#ifndef s224r2_H
#define s224r2_H

#include "w2c2_base.h"

typedef struct s224r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s224r2Instance;

void f0(s224r2Instance*);

void f1(s224r2Instance*);

U32 f2(s224r2Instance*);

void f3(s224r2Instance*,U32);

U32 f4(s224r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s224r2Instance*,U32,U32,U32,U32,U32);

void f6(s224r2Instance*,U32);

void f7(s224r2Instance*,U32,U32,U32);

void f8(s224r2Instance*,U32,U32,U32);

void s224r2____wasm_call_ctors(s224r2Instance*i);

void s224r2____wasm_apply_data_relocs(s224r2Instance*i);

U32 s224r2_func_1(s224r2Instance*i);

void s224r2_call_cb(s224r2Instance*i,U32 l0);

void s224r2Instantiate(s224r2Instance* instance, void* resolve(const char* module, const char* name));

void s224r2FreeInstance(s224r2Instance* instance);

#endif /* s224r2_H */


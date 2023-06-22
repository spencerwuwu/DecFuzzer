#ifndef s281r2_H
#define s281r2_H

#include "w2c2_base.h"

typedef struct s281r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s281r2Instance;

void f0(s281r2Instance*);

void f1(s281r2Instance*);

U32 f2(s281r2Instance*);

void f3(s281r2Instance*,U32);

U32 f4(s281r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s281r2Instance*,U32,U32,U32,U32,U32);

void f6(s281r2Instance*,U32);

void f7(s281r2Instance*,U32,U32,U32);

void f8(s281r2Instance*,U32,U32,U32);

void s281r2____wasm_call_ctors(s281r2Instance*i);

void s281r2____wasm_apply_data_relocs(s281r2Instance*i);

U32 s281r2_func_1(s281r2Instance*i);

void s281r2_call_cb(s281r2Instance*i,U32 l0);

void s281r2Instantiate(s281r2Instance* instance, void* resolve(const char* module, const char* name));

void s281r2FreeInstance(s281r2Instance* instance);

#endif /* s281r2_H */


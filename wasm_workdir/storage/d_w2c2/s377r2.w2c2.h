#ifndef s377r2_H
#define s377r2_H

#include "w2c2_base.h"

typedef struct s377r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s377r2Instance;

void f0(s377r2Instance*);

void f1(s377r2Instance*);

U32 f2(s377r2Instance*);

void f3(s377r2Instance*,U32);

U32 f4(s377r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s377r2Instance*,U32,U32,U32,U32,U32);

void f6(s377r2Instance*,U32);

void f7(s377r2Instance*,U32,U32,U32);

void f8(s377r2Instance*,U32,U32,U32);

void s377r2____wasm_call_ctors(s377r2Instance*i);

void s377r2____wasm_apply_data_relocs(s377r2Instance*i);

U32 s377r2_func_1(s377r2Instance*i);

void s377r2_call_cb(s377r2Instance*i,U32 l0);

void s377r2Instantiate(s377r2Instance* instance, void* resolve(const char* module, const char* name));

void s377r2FreeInstance(s377r2Instance* instance);

#endif /* s377r2_H */


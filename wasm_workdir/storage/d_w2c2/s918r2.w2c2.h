#ifndef s918r2_H
#define s918r2_H

#include "w2c2_base.h"

typedef struct s918r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s918r2Instance;

void f0(s918r2Instance*);

void f1(s918r2Instance*);

U32 f2(s918r2Instance*);

void f3(s918r2Instance*,U32);

U32 f4(s918r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s918r2Instance*,U32,U32,U32,U32,U32);

void f6(s918r2Instance*,U32);

void f7(s918r2Instance*,U32,U32,U32);

void f8(s918r2Instance*,U32,U32,U32);

void s918r2____wasm_call_ctors(s918r2Instance*i);

void s918r2____wasm_apply_data_relocs(s918r2Instance*i);

U32 s918r2_func_1(s918r2Instance*i);

void s918r2_call_cb(s918r2Instance*i,U32 l0);

void s918r2Instantiate(s918r2Instance* instance, void* resolve(const char* module, const char* name));

void s918r2FreeInstance(s918r2Instance* instance);

#endif /* s918r2_H */


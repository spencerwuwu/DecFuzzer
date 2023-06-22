#ifndef s973r2_H
#define s973r2_H

#include "w2c2_base.h"

typedef struct s973r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s973r2Instance;

void f0(s973r2Instance*);

void f1(s973r2Instance*);

U32 f2(s973r2Instance*);

void f3(s973r2Instance*,U32);

U32 f4(s973r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s973r2Instance*,U32,U32,U32,U32,U32);

void f6(s973r2Instance*,U32);

void f7(s973r2Instance*,U32,U32,U32);

void f8(s973r2Instance*,U32,U32,U32);

void s973r2____wasm_call_ctors(s973r2Instance*i);

void s973r2____wasm_apply_data_relocs(s973r2Instance*i);

U32 s973r2_func_1(s973r2Instance*i);

void s973r2_call_cb(s973r2Instance*i,U32 l0);

void s973r2Instantiate(s973r2Instance* instance, void* resolve(const char* module, const char* name));

void s973r2FreeInstance(s973r2Instance* instance);

#endif /* s973r2_H */


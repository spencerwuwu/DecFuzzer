#ifndef s705r2_H
#define s705r2_H

#include "w2c2_base.h"

typedef struct s705r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s705r2Instance;

void f0(s705r2Instance*);

void f1(s705r2Instance*);

U32 f2(s705r2Instance*);

void f3(s705r2Instance*,U32);

U32 f4(s705r2Instance*,U32,U32,U32);

void f5(s705r2Instance*,U32,U32,U32,U32,U32);

void f6(s705r2Instance*,U32);

void f7(s705r2Instance*,U32,U32,U32);

void f8(s705r2Instance*,U32,U32,U32);

void s705r2____wasm_call_ctors(s705r2Instance*i);

void s705r2____wasm_apply_data_relocs(s705r2Instance*i);

U32 s705r2_func_1(s705r2Instance*i);

void s705r2_call_cb(s705r2Instance*i,U32 l0);

void s705r2Instantiate(s705r2Instance* instance, void* resolve(const char* module, const char* name));

void s705r2FreeInstance(s705r2Instance* instance);

#endif /* s705r2_H */


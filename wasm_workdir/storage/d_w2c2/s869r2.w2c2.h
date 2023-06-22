#ifndef s869r2_H
#define s869r2_H

#include "w2c2_base.h"

typedef struct s869r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s869r2Instance;

void f0(s869r2Instance*);

void f1(s869r2Instance*);

U32 f2(s869r2Instance*);

void f3(s869r2Instance*,U32);

U32 f4(s869r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s869r2Instance*,U32,U32,U32,U32,U32);

void f6(s869r2Instance*,U32);

void f7(s869r2Instance*,U32,U32,U32);

void f8(s869r2Instance*,U32,U32,U32);

void s869r2____wasm_call_ctors(s869r2Instance*i);

void s869r2____wasm_apply_data_relocs(s869r2Instance*i);

U32 s869r2_func_1(s869r2Instance*i);

void s869r2_call_cb(s869r2Instance*i,U32 l0);

void s869r2Instantiate(s869r2Instance* instance, void* resolve(const char* module, const char* name));

void s869r2FreeInstance(s869r2Instance* instance);

#endif /* s869r2_H */


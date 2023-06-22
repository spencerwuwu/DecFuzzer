#ifndef s383r2_H
#define s383r2_H

#include "w2c2_base.h"

typedef struct s383r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s383r2Instance;

void f0(s383r2Instance*);

void f1(s383r2Instance*);

U32 f2(s383r2Instance*);

void f3(s383r2Instance*,U32);

U32 f4(s383r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s383r2Instance*,U32,U32,U32,U32,U32);

void f6(s383r2Instance*,U32);

void f7(s383r2Instance*,U32,U32,U32);

void f8(s383r2Instance*,U32,U32,U32);

void s383r2____wasm_call_ctors(s383r2Instance*i);

void s383r2____wasm_apply_data_relocs(s383r2Instance*i);

U32 s383r2_func_1(s383r2Instance*i);

void s383r2_call_cb(s383r2Instance*i,U32 l0);

void s383r2Instantiate(s383r2Instance* instance, void* resolve(const char* module, const char* name));

void s383r2FreeInstance(s383r2Instance* instance);

#endif /* s383r2_H */


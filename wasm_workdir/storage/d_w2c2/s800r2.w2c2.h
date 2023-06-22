#ifndef s800r2_H
#define s800r2_H

#include "w2c2_base.h"

typedef struct s800r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s800r2Instance;

void f0(s800r2Instance*);

void f1(s800r2Instance*);

U32 f2(s800r2Instance*);

void f3(s800r2Instance*,U32);

U32 f4(s800r2Instance*,U32,U32,U32,U32,U32);

void f5(s800r2Instance*,U32,U32,U32,U32,U32);

void f6(s800r2Instance*,U32);

void f7(s800r2Instance*,U32,U32,U32);

void f8(s800r2Instance*,U32,U32,U32);

void s800r2____wasm_call_ctors(s800r2Instance*i);

void s800r2____wasm_apply_data_relocs(s800r2Instance*i);

U32 s800r2_func_1(s800r2Instance*i);

void s800r2_call_cb(s800r2Instance*i,U32 l0);

void s800r2Instantiate(s800r2Instance* instance, void* resolve(const char* module, const char* name));

void s800r2FreeInstance(s800r2Instance* instance);

#endif /* s800r2_H */


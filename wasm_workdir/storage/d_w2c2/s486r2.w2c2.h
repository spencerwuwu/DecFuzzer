#ifndef s486r2_H
#define s486r2_H

#include "w2c2_base.h"

typedef struct s486r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s486r2Instance;

void f0(s486r2Instance*);

void f1(s486r2Instance*);

U32 f2(s486r2Instance*);

void f3(s486r2Instance*,U32);

U32 f4(s486r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s486r2Instance*,U32,U32,U32,U32,U32);

void f6(s486r2Instance*,U32);

void f7(s486r2Instance*,U32,U32,U32);

void f8(s486r2Instance*,U32,U32,U32);

void s486r2____wasm_call_ctors(s486r2Instance*i);

void s486r2____wasm_apply_data_relocs(s486r2Instance*i);

U32 s486r2_func_1(s486r2Instance*i);

void s486r2_call_cb(s486r2Instance*i,U32 l0);

void s486r2Instantiate(s486r2Instance* instance, void* resolve(const char* module, const char* name));

void s486r2FreeInstance(s486r2Instance* instance);

#endif /* s486r2_H */


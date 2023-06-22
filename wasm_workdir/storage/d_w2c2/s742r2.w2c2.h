#ifndef s742r2_H
#define s742r2_H

#include "w2c2_base.h"

typedef struct s742r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s742r2Instance;

void f0(s742r2Instance*);

void f1(s742r2Instance*);

U32 f2(s742r2Instance*);

void f3(s742r2Instance*,U32);

U32 f4(s742r2Instance*,U32,U32,U32,U32);

void f5(s742r2Instance*,U32,U32,U32,U32,U32);

void f6(s742r2Instance*,U32);

void f7(s742r2Instance*,U32,U32,U32);

void f8(s742r2Instance*,U32,U32,U32);

void s742r2____wasm_call_ctors(s742r2Instance*i);

void s742r2____wasm_apply_data_relocs(s742r2Instance*i);

U32 s742r2_func_1(s742r2Instance*i);

void s742r2_call_cb(s742r2Instance*i,U32 l0);

void s742r2Instantiate(s742r2Instance* instance, void* resolve(const char* module, const char* name));

void s742r2FreeInstance(s742r2Instance* instance);

#endif /* s742r2_H */


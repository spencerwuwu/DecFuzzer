#ifndef s119r2_H
#define s119r2_H

#include "w2c2_base.h"

typedef struct s119r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s119r2Instance;

void f0(s119r2Instance*);

void f1(s119r2Instance*);

U32 f2(s119r2Instance*);

void f3(s119r2Instance*,U32);

U32 f4(s119r2Instance*,U32,U32,U32,U32,U32);

void f5(s119r2Instance*,U32,U32,U32,U32,U32);

void f6(s119r2Instance*,U32);

void f7(s119r2Instance*,U32,U32,U32);

void f8(s119r2Instance*,U32,U32,U32);

void s119r2____wasm_call_ctors(s119r2Instance*i);

void s119r2____wasm_apply_data_relocs(s119r2Instance*i);

U32 s119r2_func_1(s119r2Instance*i);

void s119r2_call_cb(s119r2Instance*i,U32 l0);

void s119r2Instantiate(s119r2Instance* instance, void* resolve(const char* module, const char* name));

void s119r2FreeInstance(s119r2Instance* instance);

#endif /* s119r2_H */


#ifndef s413r2_H
#define s413r2_H

#include "w2c2_base.h"

typedef struct s413r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s413r2Instance;

void f0(s413r2Instance*);

void f1(s413r2Instance*);

U32 f2(s413r2Instance*);

void f3(s413r2Instance*,U32);

U32 f4(s413r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s413r2Instance*,U32,U32,U32,U32,U32);

void f6(s413r2Instance*,U32);

void f7(s413r2Instance*,U32,U32,U32);

void f8(s413r2Instance*,U32,U32,U32);

void s413r2____wasm_call_ctors(s413r2Instance*i);

void s413r2____wasm_apply_data_relocs(s413r2Instance*i);

U32 s413r2_func_1(s413r2Instance*i);

void s413r2_call_cb(s413r2Instance*i,U32 l0);

void s413r2Instantiate(s413r2Instance* instance, void* resolve(const char* module, const char* name));

void s413r2FreeInstance(s413r2Instance* instance);

#endif /* s413r2_H */


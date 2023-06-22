#ifndef s888r2_H
#define s888r2_H

#include "w2c2_base.h"

typedef struct s888r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s888r2Instance;

void f0(s888r2Instance*);

void f1(s888r2Instance*);

U32 f2(s888r2Instance*);

void f3(s888r2Instance*,U32);

U32 f4(s888r2Instance*,U32,U32,U32,U32);

void f5(s888r2Instance*,U32,U32,U32,U32,U32);

void f6(s888r2Instance*,U32);

void f7(s888r2Instance*,U32,U32,U32);

void f8(s888r2Instance*,U32,U32,U32);

void s888r2____wasm_call_ctors(s888r2Instance*i);

void s888r2____wasm_apply_data_relocs(s888r2Instance*i);

U32 s888r2_func_1(s888r2Instance*i);

void s888r2_call_cb(s888r2Instance*i,U32 l0);

void s888r2Instantiate(s888r2Instance* instance, void* resolve(const char* module, const char* name));

void s888r2FreeInstance(s888r2Instance* instance);

#endif /* s888r2_H */


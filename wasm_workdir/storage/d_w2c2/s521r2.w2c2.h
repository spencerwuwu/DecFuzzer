#ifndef s521r2_H
#define s521r2_H

#include "w2c2_base.h"

typedef struct s521r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s521r2Instance;

void f0(s521r2Instance*);

void f1(s521r2Instance*);

U32 f2(s521r2Instance*);

void f3(s521r2Instance*,U32);

U32 f4(s521r2Instance*,U32,U32,U32,U32,U32);

void f5(s521r2Instance*,U32,U32,U32,U32,U32);

void f6(s521r2Instance*,U32);

void f7(s521r2Instance*,U32,U32,U32);

void f8(s521r2Instance*,U32,U32,U32);

void s521r2____wasm_call_ctors(s521r2Instance*i);

void s521r2____wasm_apply_data_relocs(s521r2Instance*i);

U32 s521r2_func_1(s521r2Instance*i);

void s521r2_call_cb(s521r2Instance*i,U32 l0);

void s521r2Instantiate(s521r2Instance* instance, void* resolve(const char* module, const char* name));

void s521r2FreeInstance(s521r2Instance* instance);

#endif /* s521r2_H */


#ifndef s851r2_H
#define s851r2_H

#include "w2c2_base.h"

typedef struct s851r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s851r2Instance;

void f0(s851r2Instance*);

void f1(s851r2Instance*);

U32 f2(s851r2Instance*);

void f3(s851r2Instance*,U32);

U32 f4(s851r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s851r2Instance*,U32,U32,U32,U32,U32);

void f6(s851r2Instance*,U32);

void f7(s851r2Instance*,U32,U32,U32);

void f8(s851r2Instance*,U32,U32,U32);

void s851r2____wasm_call_ctors(s851r2Instance*i);

void s851r2____wasm_apply_data_relocs(s851r2Instance*i);

U32 s851r2_func_1(s851r2Instance*i);

void s851r2_call_cb(s851r2Instance*i,U32 l0);

void s851r2Instantiate(s851r2Instance* instance, void* resolve(const char* module, const char* name));

void s851r2FreeInstance(s851r2Instance* instance);

#endif /* s851r2_H */


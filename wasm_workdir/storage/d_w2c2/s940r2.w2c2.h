#ifndef s940r2_H
#define s940r2_H

#include "w2c2_base.h"

typedef struct s940r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s940r2Instance;

void f0(s940r2Instance*);

void f1(s940r2Instance*);

U32 f2(s940r2Instance*);

void f3(s940r2Instance*,U32);

U32 f4(s940r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s940r2Instance*,U32,U32,U32,U32,U32);

void f6(s940r2Instance*,U32);

void f7(s940r2Instance*,U32,U32,U32);

void f8(s940r2Instance*,U32,U32,U32);

void s940r2____wasm_call_ctors(s940r2Instance*i);

void s940r2____wasm_apply_data_relocs(s940r2Instance*i);

U32 s940r2_func_1(s940r2Instance*i);

void s940r2_call_cb(s940r2Instance*i,U32 l0);

void s940r2Instantiate(s940r2Instance* instance, void* resolve(const char* module, const char* name));

void s940r2FreeInstance(s940r2Instance* instance);

#endif /* s940r2_H */


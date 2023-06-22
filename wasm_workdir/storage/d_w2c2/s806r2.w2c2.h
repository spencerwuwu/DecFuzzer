#ifndef s806r2_H
#define s806r2_H

#include "w2c2_base.h"

typedef struct s806r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s806r2Instance;

void f0(s806r2Instance*);

void f1(s806r2Instance*);

U32 f2(s806r2Instance*);

void f3(s806r2Instance*,U32);

U32 f4(s806r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s806r2Instance*,U32,U32,U32,U32,U32);

void f6(s806r2Instance*,U32);

void f7(s806r2Instance*,U32,U32,U32);

void f8(s806r2Instance*,U32,U32,U32);

void s806r2____wasm_call_ctors(s806r2Instance*i);

void s806r2____wasm_apply_data_relocs(s806r2Instance*i);

U32 s806r2_func_1(s806r2Instance*i);

void s806r2_call_cb(s806r2Instance*i,U32 l0);

void s806r2Instantiate(s806r2Instance* instance, void* resolve(const char* module, const char* name));

void s806r2FreeInstance(s806r2Instance* instance);

#endif /* s806r2_H */


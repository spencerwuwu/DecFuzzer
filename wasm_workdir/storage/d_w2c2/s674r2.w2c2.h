#ifndef s674r2_H
#define s674r2_H

#include "w2c2_base.h"

typedef struct s674r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s674r2Instance;

void f0(s674r2Instance*);

void f1(s674r2Instance*);

U32 f2(s674r2Instance*);

void f3(s674r2Instance*,U32);

U32 f4(s674r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s674r2Instance*,U32,U32,U32,U32,U32);

void f6(s674r2Instance*,U32);

void f7(s674r2Instance*,U32,U32,U32);

void f8(s674r2Instance*,U32,U32,U32);

void s674r2____wasm_call_ctors(s674r2Instance*i);

void s674r2____wasm_apply_data_relocs(s674r2Instance*i);

U32 s674r2_func_1(s674r2Instance*i);

void s674r2_call_cb(s674r2Instance*i,U32 l0);

void s674r2Instantiate(s674r2Instance* instance, void* resolve(const char* module, const char* name));

void s674r2FreeInstance(s674r2Instance* instance);

#endif /* s674r2_H */


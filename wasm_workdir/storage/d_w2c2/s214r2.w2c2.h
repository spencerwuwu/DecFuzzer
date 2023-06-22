#ifndef s214r2_H
#define s214r2_H

#include "w2c2_base.h"

typedef struct s214r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s214r2Instance;

void f0(s214r2Instance*);

void f1(s214r2Instance*);

U32 f2(s214r2Instance*);

void f3(s214r2Instance*,U32);

U32 f4(s214r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s214r2Instance*,U32,U32,U32,U32,U32);

void f6(s214r2Instance*,U32);

void f7(s214r2Instance*,U32,U32,U32);

void f8(s214r2Instance*,U32,U32,U32);

void s214r2____wasm_call_ctors(s214r2Instance*i);

void s214r2____wasm_apply_data_relocs(s214r2Instance*i);

U32 s214r2_func_1(s214r2Instance*i);

void s214r2_call_cb(s214r2Instance*i,U32 l0);

void s214r2Instantiate(s214r2Instance* instance, void* resolve(const char* module, const char* name));

void s214r2FreeInstance(s214r2Instance* instance);

#endif /* s214r2_H */


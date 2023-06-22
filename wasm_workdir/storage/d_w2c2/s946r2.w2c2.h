#ifndef s946r2_H
#define s946r2_H

#include "w2c2_base.h"

typedef struct s946r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s946r2Instance;

void f0(s946r2Instance*);

void f1(s946r2Instance*);

U32 f2(s946r2Instance*);

void f3(s946r2Instance*,U32);

U32 f4(s946r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s946r2Instance*,U32,U32,U32,U32,U32);

void f6(s946r2Instance*,U32);

void f7(s946r2Instance*,U32,U32,U32);

void f8(s946r2Instance*,U32,U32,U32);

void s946r2____wasm_call_ctors(s946r2Instance*i);

void s946r2____wasm_apply_data_relocs(s946r2Instance*i);

U32 s946r2_func_1(s946r2Instance*i);

void s946r2_call_cb(s946r2Instance*i,U32 l0);

void s946r2Instantiate(s946r2Instance* instance, void* resolve(const char* module, const char* name));

void s946r2FreeInstance(s946r2Instance* instance);

#endif /* s946r2_H */


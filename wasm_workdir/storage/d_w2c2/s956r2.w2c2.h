#ifndef s956r2_H
#define s956r2_H

#include "w2c2_base.h"

typedef struct s956r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s956r2Instance;

void f0(s956r2Instance*);

void f1(s956r2Instance*);

U32 f2(s956r2Instance*);

void f3(s956r2Instance*,U32);

U32 f4(s956r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s956r2Instance*,U32,U32,U32,U32,U32);

void f6(s956r2Instance*,U32);

void f7(s956r2Instance*,U32,U32,U32);

void f8(s956r2Instance*,U32,U32,U32);

void s956r2____wasm_call_ctors(s956r2Instance*i);

void s956r2____wasm_apply_data_relocs(s956r2Instance*i);

U32 s956r2_func_1(s956r2Instance*i);

void s956r2_call_cb(s956r2Instance*i,U32 l0);

void s956r2Instantiate(s956r2Instance* instance, void* resolve(const char* module, const char* name));

void s956r2FreeInstance(s956r2Instance* instance);

#endif /* s956r2_H */


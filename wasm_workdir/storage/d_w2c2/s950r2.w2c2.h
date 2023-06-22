#ifndef s950r2_H
#define s950r2_H

#include "w2c2_base.h"

typedef struct s950r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s950r2Instance;

void f0(s950r2Instance*);

void f1(s950r2Instance*);

U32 f2(s950r2Instance*);

void f3(s950r2Instance*,U32);

U32 f4(s950r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s950r2Instance*,U32,U32,U32,U32,U32);

void f6(s950r2Instance*,U32);

void f7(s950r2Instance*,U32,U32,U32);

void f8(s950r2Instance*,U32,U32,U32);

void s950r2____wasm_call_ctors(s950r2Instance*i);

void s950r2____wasm_apply_data_relocs(s950r2Instance*i);

U32 s950r2_func_1(s950r2Instance*i);

void s950r2_call_cb(s950r2Instance*i,U32 l0);

void s950r2Instantiate(s950r2Instance* instance, void* resolve(const char* module, const char* name));

void s950r2FreeInstance(s950r2Instance* instance);

#endif /* s950r2_H */


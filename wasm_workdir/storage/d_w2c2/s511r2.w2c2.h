#ifndef s511r2_H
#define s511r2_H

#include "w2c2_base.h"

typedef struct s511r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s511r2Instance;

void f0(s511r2Instance*);

void f1(s511r2Instance*);

U32 f2(s511r2Instance*);

void f3(s511r2Instance*,U32);

U32 f4(s511r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s511r2Instance*,U32,U32,U32,U32,U32);

void f6(s511r2Instance*,U32);

void f7(s511r2Instance*,U32,U32,U32);

void f8(s511r2Instance*,U32,U32,U32);

void s511r2____wasm_call_ctors(s511r2Instance*i);

void s511r2____wasm_apply_data_relocs(s511r2Instance*i);

U32 s511r2_func_1(s511r2Instance*i);

void s511r2_call_cb(s511r2Instance*i,U32 l0);

void s511r2Instantiate(s511r2Instance* instance, void* resolve(const char* module, const char* name));

void s511r2FreeInstance(s511r2Instance* instance);

#endif /* s511r2_H */


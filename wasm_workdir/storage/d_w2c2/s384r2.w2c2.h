#ifndef s384r2_H
#define s384r2_H

#include "w2c2_base.h"

typedef struct s384r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s384r2Instance;

void f0(s384r2Instance*);

void f1(s384r2Instance*);

U32 f2(s384r2Instance*);

void f3(s384r2Instance*,U32);

U32 f4(s384r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s384r2Instance*,U32,U32,U32,U32,U32);

void f6(s384r2Instance*,U32);

void f7(s384r2Instance*,U32,U32,U32);

void f8(s384r2Instance*,U32,U32,U32);

void s384r2____wasm_call_ctors(s384r2Instance*i);

void s384r2____wasm_apply_data_relocs(s384r2Instance*i);

U32 s384r2_func_1(s384r2Instance*i);

void s384r2_call_cb(s384r2Instance*i,U32 l0);

void s384r2Instantiate(s384r2Instance* instance, void* resolve(const char* module, const char* name));

void s384r2FreeInstance(s384r2Instance* instance);

#endif /* s384r2_H */


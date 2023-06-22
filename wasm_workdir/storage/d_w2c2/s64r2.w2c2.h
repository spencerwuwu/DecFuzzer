#ifndef s64r2_H
#define s64r2_H

#include "w2c2_base.h"

typedef struct s64r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s64r2Instance;

void f0(s64r2Instance*);

void f1(s64r2Instance*);

U32 f2(s64r2Instance*);

void f3(s64r2Instance*,U32);

void f4(s64r2Instance*,U32);

void s64r2____wasm_call_ctors(s64r2Instance*i);

void s64r2____wasm_apply_data_relocs(s64r2Instance*i);

U32 s64r2_func_1(s64r2Instance*i);

void s64r2_call_cb(s64r2Instance*i,U32 l0);

void s64r2Instantiate(s64r2Instance* instance, void* resolve(const char* module, const char* name));

void s64r2FreeInstance(s64r2Instance* instance);

#endif /* s64r2_H */


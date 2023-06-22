#ifndef s112r2_H
#define s112r2_H

#include "w2c2_base.h"

typedef struct s112r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s112r2Instance;

void f0(s112r2Instance*);

void f1(s112r2Instance*);

U32 f2(s112r2Instance*);

void f3(s112r2Instance*,U32);

U32 f4(s112r2Instance*,U32,U32,U32,U32,U32);

void f5(s112r2Instance*,U32,U32,U32,U32,U32);

void f6(s112r2Instance*,U32);

void f7(s112r2Instance*,U32,U32,U32);

void f8(s112r2Instance*,U32,U32,U32);

void s112r2____wasm_call_ctors(s112r2Instance*i);

void s112r2____wasm_apply_data_relocs(s112r2Instance*i);

U32 s112r2_func_1(s112r2Instance*i);

void s112r2_call_cb(s112r2Instance*i,U32 l0);

void s112r2Instantiate(s112r2Instance* instance, void* resolve(const char* module, const char* name));

void s112r2FreeInstance(s112r2Instance* instance);

#endif /* s112r2_H */


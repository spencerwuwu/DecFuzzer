#ifndef s530r2_H
#define s530r2_H

#include "w2c2_base.h"

typedef struct s530r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s530r2Instance;

void f0(s530r2Instance*);

void f1(s530r2Instance*);

U32 f2(s530r2Instance*);

void f3(s530r2Instance*,U32);

U32 f4(s530r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s530r2Instance*,U32,U32,U32,U32,U32);

void f6(s530r2Instance*,U32);

void f7(s530r2Instance*,U32,U32,U32);

void f8(s530r2Instance*,U32,U32,U32);

void s530r2____wasm_call_ctors(s530r2Instance*i);

void s530r2____wasm_apply_data_relocs(s530r2Instance*i);

U32 s530r2_func_1(s530r2Instance*i);

void s530r2_call_cb(s530r2Instance*i,U32 l0);

void s530r2Instantiate(s530r2Instance* instance, void* resolve(const char* module, const char* name));

void s530r2FreeInstance(s530r2Instance* instance);

#endif /* s530r2_H */

